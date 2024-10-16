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

        int location= str.findch(0, 'b');

        // VERIFY
        assert(location==1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abc");

        int location= str.findch(2, 'b');

        // VERIFY
        assert(location==-1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abc");

        int location= str.findch(2, 'c');

        // VERIFY
        assert(location==2);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcabc");

        int location= str.findch(1, 'c');

        // VERIFY
        assert(location==2);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcabcabc");

        int location= str.findch(3, 'c');

        // VERIFY
        assert(location==5);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    std::cout << "Done testing find character." << std::endl;
    return 0;
}

