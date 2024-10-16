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

        // VERIFY
        assert(str.capacity() == 0 );
        assert(str.length() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abcdefghijk");

        // VERIFY
        assert(str.capacity() == 11 );
        assert(str.length() == 11 );
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('a');

        // VERIFY
        assert(str.capacity() == 1 );
        assert(str.length() == 1);
    }

    {
         //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abcdefgh");

        // VERIFY
        assert(str.capacity() == 8 );
        assert(str.length() == 8);
    }

    {
         //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("123456789123456789123456789123456789123456789123456789123456789123456789123456789123456789");

        // VERIFY
        assert(str.capacity() == 90 );
        assert(str.length() == 90);
    }
    
    std::cout << "Done testing capacity and length." << std::endl;
    return 0;
}

