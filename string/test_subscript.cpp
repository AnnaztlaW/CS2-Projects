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
        String index= str[0];

        // VERIFY
        assert(index == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;
        String index= str[0];

        // VERIFY
        assert(index == '\0');
    }

    {
         //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abcdefgi");
        String index= str[1];

        // VERIFY
        assert(index == "b");
    }

   

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

