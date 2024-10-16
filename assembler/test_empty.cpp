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
        // VERIFY
        assert(x.empty());
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(3);
        // VERIFY
        assert(!(x.empty()));
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(9);
        x.pop();
        // VERIFY
        assert(x.empty());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        // VERIFY
        assert(x.empty());
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push('a');
        x.pop();
        // VERIFY
        assert(x.empty());
     }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing empty." << std::endl;
    return 0;
}

