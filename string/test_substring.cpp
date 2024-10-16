//  String class test program
//
//  Tests: the substring function 
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
        String newSubStr= str.substr(0,0);

        // VERIFY
        assert(newSubStr == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abcdef");
        String newSubStr= str.substr(0,2);

        // VERIFY
        assert(newSubStr == "abc");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abcdefghi");
        String newSubStr= str.substr(2,3);

        // VERIFY
        assert(newSubStr == "cd");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abcdefghi");
        String newSubStr= str.substr(7,8);

        // VERIFY
        assert(newSubStr == "hi");
    }

   {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abcdefghi");
        String newSubStr= str.substr(0,8);

        // VERIFY
        assert(newSubStr == "abcdefghi");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing substring." << std::endl;
    return 0;
}

