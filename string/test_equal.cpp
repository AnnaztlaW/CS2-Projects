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

        // VERIFY
        assert(left   == right);
        assert(right  == left);
    }

    {
        //------------------------------------------------------
          // SETUP FIXTURE
        String  left('a');
        String  right('a');

        // VERIFY
        assert(left   == 'a');
        assert(right  == left);
    }

    {
        //------------------------------------------------------
           // SETUP FIXTURE
        String  left("hello");
        String  right("hello");

        // VERIFY
        assert(left   == "hello");
        assert(right  == left);
    }

    {
        //------------------------------------------------------
        String  left("hello");
        String  right("hello");

        // VERIFY
        assert(left   == "hello");
        assert(right  == left);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("hello there");
        String  right("hello");

        // TEST
      
        assert(left   == "hello there");
        assert(right  != left);
    }

    {
        //------------------------------------------------------
       // SETUP FIXTURE
        String  left("h");
        String  right('h');

        // TEST
      
        assert(left   == "h");
        assert(right  == left);
    }
    
    
    std::cout << "Done testing equal!" << std::endl;
    return 0;
}
