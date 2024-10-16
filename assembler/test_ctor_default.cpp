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
        stack<int>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        stack<int>  x;
        stack<int>  y;
        x=y;

        // VERIFY
        assert(x.empty());
    }
    {
        stack<String>  x;
        

        // VERIFY
        assert(x.empty());
    }
    {
        stack<String>  x;
        stack<String>  y;
        x=y;

        // VERIFY
        assert(x.empty());
    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing default constructor." << std::endl;
    return 0;
}

