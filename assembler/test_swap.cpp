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
        stack<int>  y;
        x.push(1);
        y.push(2);

        x.swap(y);

        // VERIFY
        assert(x.pop()==2);
        assert(y.pop()==1);
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String>  y;
        x.push('a');
        y.push('b');

        x.swap(y);

        // VERIFY
        assert(x.pop()=='b');
        assert(y.pop()=='a');
     }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing swap." << std::endl;
    return 0;
}

