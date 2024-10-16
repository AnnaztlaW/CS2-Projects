//

//bigint.cpp
//Anna Waltz
//23001-002
//ADT cpp file for larger variation of interger type, MAIN
#include <iostream>
#include "bigint.hpp"

 bigint::bigint(){
    //sets all array elements to zero
    number[0]=0;
    for(int i=1; i<maximumSize;++i){
        number[i]=0;
    }
 }

 bigint::bigint(int num){
    //will store num in array, in REVERSE
    for(int i=0; i<maximumSize;++i){
        int digit = num % 10;
        number[i]=digit;
        num/=10;
    }
 }

 bigint::bigint(const char array[]){
      int size=0;
      //finds char[]size
      while(array[size]!='\0'){
        ++size;
      }
      //will copy all char[] characters to int[], in REVERSE
      for(int i=0 ; i<size; ++i){
         //copy the number not ascii val
         number[i]=array[size-i-1] - '0';
      }
      for(int i=size; i<maximumSize;++i){
        number[i]=0;
    }
 }
   
void bigint::debugPrint(std::ostream& stream) const{
   bool leadingZero=true;
   for(int i=maximumSize-1;i>=0; i--){
      if(number[i]!=0 || !leadingZero){
         leadingZero=false;
         stream<<number[i] << "|";
      }
   }
}

bool bigint::operator==(const bigint& rhs) const{
   for(int i=0; i<maximumSize; ++i){
      if(number[i]!=rhs.number[i]  && (number[i]>=0 && rhs.number[i]>=0)) //check if different or if leading number
         return false;
   }
     return true;
   }

int bigint::operator[](int index)const{
   if(index < maximumSize){
      return number[index];
   }
   else 
      return -1;
}

bigint bigint::operator+(const bigint& rhs)const{ //NEED REVIEW, ADDITION WRONG DO MORE INDEPTH TESTS
   int extraDigit=0;
   bigint newInt;
   for(int i=0; i<maximumSize; ++i)
   {
      int newDigit=number[i] + rhs.number[i];
      newInt.number[i]= (newDigit + extraDigit)%10;
      
      if(newDigit+extraDigit>9)
         extraDigit+=(newDigit+extraDigit)/10;
      extraDigit=0;
   }
   return newInt;
 }


int exponent(int base, int power){
   int result=1;
   for(int i=0; i<power; ++i)
      result*=base;
   return result;
}
bigint bigint::operator*(const bigint& rhs)const{
   bigint newInt;
   int i=0;
   while(i<maximumSize)
   {
      for(int j=0; j< number[i]*exponent(10,i); ++j)
         newInt = newInt+ rhs;
      i++;
   }
   return newInt;
}


std::ostream& operator<<(std::ostream& stream, const bigint& rhs){
   bool leadingZero=true;
   for(int i=maximumSize-1; i>0; i--){
      if((rhs.number[i]>0 || (rhs.number[i]>=0 && !leadingZero)) ){ //ensures no leading zeros are printed
         leadingZero=false;
         stream << rhs.number[i]; 
      if(i%70==0 && i!=0) //no more than 70 digits printed per line
            stream << "\n"; //change line
      }
      

      }
   stream << rhs.number[0];
   return stream;
}
std::istream& operator>>(std::istream& stream, bigint& input){
   //Read in any number of digits [0-9] until a semi colon ";" is encountered. 
   char tempNumber[maximumSize]; //temparary number for reading in
   int loc=0;
   stream >> tempNumber[loc];    //reads one digit at a time until ';'
   char digit= tempNumber[loc];
   while(digit!=';' && loc<=maximumSize){
      loc++; 
      stream >> tempNumber[loc];
      digit= tempNumber[loc];
   }
   for(int i=loc; i>0; i--)             //puts tempNumber(the input) into input.number in reverse order
      input.number[i]=tempNumber[loc-i];
   for(int i=loc; i<maximumSize; i++)
      input.number[i]=0;
   return stream;
}



