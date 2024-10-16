//

//bigint.hpp
//Anna Waltz
//23001-002
//ADT hpp file for larger variation of interger type
#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>

const int maximumSize=200;
class bigint{
    public:
    //constructors
        bigint();        //default
        bigint(int);     //int -> int[] array
        bigint(const char[]);  //char[] copied to int[] array


      //functions
       
        bool operator==(const bigint&)const;
        int operator[](int index)const;

        bigint operator+(const bigint&)const;
        bigint operator*(const bigint&)const;
        
        void debugPrint(std::ostream&)const;
        friend std::ostream& operator<<(std::ostream&, const bigint&);
        friend std::istream& operator>>(std::istream&, bigint&);

        bigint timesDigit(int) const;
        bigint times10(int) const;


   private:
   //array that is the data
       int number[maximumSize];
};
#endif 