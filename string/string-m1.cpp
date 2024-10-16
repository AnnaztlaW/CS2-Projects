// 
//project TWO - String adt
//Anna Waltz
// 
// MILESTONE ONE
//
//23001-002

#include "string.hpp"
#include <iostream>

//constructors
String:: String(){ //Empty string
    str[0]=0;
}        
String::String (char value){//String('x')
    str[0]=value;
    str[1]=0;
}                      
String::String(const char array[] ) {//String("abcd")
    int i=0;
    while(array[i] != 0){
        if(i>=capacity())
            break;
        str[i]=array[i];
        ++i;
    }
    str[i]=0;
}              

int String:: capacity () const{//Max chars that can be stored
 return STRING_SIZE-1;
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


//concatination
String& String:: operator+=(const String& rhs){
    int offset = length();
    int rhsLen= rhs.length(); 
    int i=0;
    while(i < rhsLen){
        if(offset+i>+capacity())
            break;
        str[offset+i] = rhs.str[i];
        ++i;
    }
    str[offset+i]= 0;
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
    
    for(int i=start; i < length(); i++){
        if(str[i]==subString.str[0] && (i+subString.length()-1<length())){
            String found= substr(i, i+subString.length()-1);
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
    rhs=String(buffer);
    return stream;
}
std::ostream& operator<<(std::ostream& stream, const String& rhs){
    for(int i= 0; i < rhs.length(); i++){
        stream << rhs.str[i];
    }
    return stream;
}