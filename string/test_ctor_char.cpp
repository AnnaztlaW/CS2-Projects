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
        String  str('a');

        // VERIFY
        assert(str == "a");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('b');

        // VERIFY
        assert(str != 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('3');

        // VERIFY
        assert(str == '3');
    }

    
    
    std::cout << "Done testing char constructor." << std::endl;
    return 0;
}

