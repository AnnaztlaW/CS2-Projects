// 
//project TWO - String adt
//Anna Waltz
// 
// MILESTONE TWO
//
//23001-002

#include "string.hpp"
#include <iostream>

//constructors
String:: String(){ //Empty string
    stringSize=1;
    str= new char[stringSize];
    str[0]=0;
}        
String::String (char value){//String('x')
    if(value==0){
        stringSize=1;
        str= new char[stringSize]; 
        str[0]=0;
    }
    else{
        stringSize=2;
        str= new char[stringSize]; 
        str[0]=value;
        str[1]=0;
    }
}                      
String::String(const char *array ) {//String("abcd")
    int i=0; //length
    while(array[i]!=0){
        i++;
    }
    stringSize=i+1;
    str= new char[stringSize];

    i=0;
    while(array[i] != 0){
        str[i]=array[i];
        ++i;
    }
    str[i]=0;
}              

String:: String (const String& actual){   //Copy Constructor
    stringSize=actual.stringSize;
    str= new char[stringSize];
    for(int i= 0; i< stringSize; i++){
        str[i]=actual.str[i];
    }

}
String:: ~String (){
    delete[] str;

}             

int String:: capacity () const{//Max chars that can be stored
 return stringSize-1; //minus null terminator
} 
int String::length() const{//Number of char in string
    int result=0;
    while(str[result] !=0)
    {
        ++result;
    }
    return result;
}
char& String:: operator[] (int index){//Accessor/Modifier
    if((index>=0) && (index < length()))
        return str[index];
    else
        return str[0];
}                       
char String:: operator[] (int index) const{//Accessor
    if((index>=0) && (index < length()))
        return str[index];
    else
        return '0';
} 

void String:: swap (String& rhs){//Constant time swap
    char *temp= str;
    int sizeTemp= stringSize;
    str= rhs.str;
    stringSize=rhs.stringSize;
    rhs.str =temp;
    rhs.stringSize= sizeTemp;
}                        
String& String:: operator= (String rhs){
    swap(rhs);
    return *this;
}

//concatination
String& String:: operator+=(const String& rhs){
    char *temp= new char[length() + rhs.length() + 1];
    int i=0;
    while(str[i]!=0){
        temp[i]=str[i];
        i++;
    }
    int j=0;
    while(rhs.str[j]!=0){
        temp[i]=rhs.str[j];
        j++;
        i++;
    }  
    temp[i]=0;

    stringSize=length() + rhs.length() +1;
    str=temp;
    return *this;

}
String  operator+ (String lhs, const String& rhs){
   return lhs+=rhs;
}

//relation operators
bool String:: operator==(const String& rhs)const{
    int i =0;
    while((str[i]!=0) && (rhs.str[i]!=0) && (str[i]==rhs.str[i])){
        i++;
    }
    return str[i] == rhs.str[i];
}
bool String:: operator<(const String& rhs)const{
    int i=0;
    while(str[i] !=0 && rhs.str[i]!=0 && str[i]==rhs.str[i]){
      ++i;
    }
    return str[i] < rhs.str[i];
}

//friend relation operators
bool operator==(const char lhs[],  const String& rhs){
    return String(lhs) == rhs;
}
bool operator==(char lhs, const String& rhs){
    return String(lhs) == rhs;
}
bool operator<(const char lhs[],  const String& rhs){
    return String(lhs) < rhs;
}
bool operator<(char lhs, const String& rhs){
    return String(lhs) < rhs;
}
bool operator<=(const String& lhs, const String& rhs){
    return !(rhs < lhs);
}
bool operator!=(const String& lhs, const String& rhs){
    return !(rhs==lhs);
}
bool operator>=(const String& lhs, const String& rhs){
    return !(lhs < rhs);
}
bool operator>(const String& lhs, const String& rhs){
    return rhs < lhs;
}

String String:: substr(int start, int stop) const{//Sub from staring to ending positions
    //three main conditions
    if(start<0) 
        start=0;              //1
    if(stop>=length())
        stop=length()-1;  //2
    if(start>stop) 
        return String();    //3

    String result;
    int i=start;
    while(i<=stop){
        result.str[i-start]=str[i];
        ++i;
    }
    result.str[i-start]=0;
    return result;
} 
int String:: findch(int start,  char character) const{//Location of charater starting at a position
    for(int i=start; i < length(); i++)
        if(str[i]==character)
            return i;
    return -1;
} 
int String:: findstr(int start,  const String& subString) const{ //Location of string starting at a position
    String found= new char[subString.length()];
    for(int i=start; i < length(); i++){
        if(str[i]==subString.str[0] && (i+subString.length()-1<length())){
            found= substr(i, i+subString.length()-1);
            if(found==subString)
                return i;
        }
    }
    return -1;
    
}
std::istream& operator>>(std::istream& stream, String& rhs){
    char buffer[rhs.capacity()];
    if(!stream.eof()){
        stream >>buffer;
    }
    else
        buffer[0]=0;
    String newRHS(buffer);
    rhs= newRHS;
    return stream;
}
std::ostream& operator<<(std::ostream& stream, const String& rhs){
    for(int i= 0; i < rhs.length(); i++){
        stream << rhs.str[i];
    }
    return stream;
}