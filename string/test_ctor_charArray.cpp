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
        char array[] ={'a','b','c','d'};
        String  str(array);

        // VERIFY
        assert(str == "abcd");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("HELLO");

        // VERIFY
        assert(str == "HELLO");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("00012345678912345678923456789123456789123456789");

        // VERIFY
        assert(str == "00012345678912345678923456789123456789123456789");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("Why hello there!");

        // VERIFY
        assert(str == "Why hello there!");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("qwertyuiopasdfghjklzxcvbnm!!!!!!");

        // VERIFY
        assert(str == "qwertyuiopasdfghjklzxcvbnm!!!!!!");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing chararater array constructor." << std::endl;
    return 0;
}

