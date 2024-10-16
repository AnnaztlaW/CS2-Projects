//  String class test program
//
//  Tests: XXX 
// 
  
#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;
        std:: cout << "Enter 'hello' ::";
        std:: cin >> str;

        // VERIFY
        assert(str == "hello");
    }

    {
       //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;
        std:: cout << "Enter 'h' ::";
        std:: cin >> str;

        // VERIFY
        assert(str == "h");
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;
        std:: cout << "Enter anything to be printed ::";
        std:: cin >> str;
        std:: cout << str<< std:: endl;

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;
        std:: cout << "Enter anything to be printed ::";
        std:: cin >> str;
        std:: cout << str<< std:: endl;

    }


    
    std::cout << "Done testing input." << std::endl;
    return 0;
}

