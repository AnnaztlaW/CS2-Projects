//  String class test program
// 
//  Name:  XXX
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
        String  left;
        String  right;

        // TEST

        // VERIFY
        assert(!(left<right));
        assert(left<=right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left;
        String  right("a");

        // TEST

        // VERIFY
        assert((left<right));
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('a');
        String  right('a');

        // TEST

        // VERIFY
        assert(!(left<right));
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("abcd");
        String  right("abcdefg");

        // TEST

        // VERIFY
        assert((left<right));
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("abcddefghi");
        String  right("abcdefghi");

        // TEST

        // VERIFY
        assert((left<right));
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("aaaaaaaaaaaaaaaad");
        String  right("aaaaaaaaaaaaaaaat");

        // TEST

        // VERIFY
        assert((left<right));
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing less than." << std::endl;
    return 0;
}
