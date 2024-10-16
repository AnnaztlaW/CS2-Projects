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
        String  right;
        String left;

        // TEST
        String result = right + left;

        // VERIFY
        assert(result == right);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  right('a');
        String left('b');

        // TEST
        String result = right + left;

        // VERIFY
        assert(result == "ab");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  right;
        String left('b');

        // TEST
        String result = right + left;

        // VERIFY
        assert(result == "b");
    }

    {
       //------------------------------------------------------
        // SETUP FIXTURE
        String  right("abcd");
        String left("ABCD");

        // TEST
        String result = right + left;

        // VERIFY
        assert(result == "abcdABCD");
    }

    {
       //------------------------------------------------------
        // SETUP FIXTURE
        String  right("1234567890123456789012345678901234567890");
        String left("qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbnm");

        // TEST
        String result = right + left;

        // VERIFY
        assert(result == "1234567890123456789012345678901234567890qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbnm");
    }
     {
       //------------------------------------------------------
        // SETUP FIXTURE
        String  right("abcd");
        String left("ABCD");

        // TEST
        right += left;

        // VERIFY
        assert(right == "abcdABCD");
    }
    {
       //------------------------------------------------------
        // SETUP FIXTURE
        String  right;
        String left("ABCD");

        // TEST
        right += left;

        // VERIFY
        assert(right == "ABCD");
    }
   

    std::cout << "Done testing concatination." << std::endl;
    return 0;
}

