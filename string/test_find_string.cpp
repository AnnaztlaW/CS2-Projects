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
        String  str("abc");
        String subStr('a');

        int location= str.findstr(0, subStr);

        // VERIFY
        assert(location==0);
    }

    {
         //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abc");
        String subStr("cd");

        int location= str.findstr(0, subStr);

        // VERIFY
        assert(location==-1);
    }

    {
         //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abc");
        String subStr("c");

        int location= str.findstr(1, subStr);

        // VERIFY
        assert(location==2);
    }

    {
         //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcabc");
        String subStr("bc");

        int location= str.findstr(2, subStr);

        // VERIFY
        assert(location==4);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcabcabc");
        String subStr("abc");

        int location= str.findstr(1, subStr);

        // VERIFY
        assert(location==3);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcabcabc");
        String subStr("abc");

        int location= str.findstr(7, subStr);

        // VERIFY
        assert(location==-1);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    std::cout << "Done testing find string." << std::endl;
    return 0;
}

