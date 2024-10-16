//  Stack class test program
//
//  Tests: XXX 
//

#include "stack.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(1);

        // VERIFY
        assert(x.pop()==1);
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(2);
        x.push(1);

        // VERIFY
        assert(x.pop()==1);
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(3);
        x.push(2);
        x.push(1);
        x.pop();

        // VERIFY
        assert(x.pop()==2);
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push('a');

        // VERIFY
        assert(x.pop()=='a');
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("abc");

        // VERIFY
        assert(x.pop()=="abc");
     }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing push and pop." << std::endl;
    return 0;
}

