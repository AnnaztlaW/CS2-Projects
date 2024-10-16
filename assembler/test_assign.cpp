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
        y=x;

        // VERIFY
        assert(x.pop()==y.pop());
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;
        x.push(1);
        x.push(300);
        x.push(21);
        y=x;

        // VERIFY
        assert(x.pop()==y.pop());
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;
        stack<bool>  y;
        x.push(true);
        y=x;

        // VERIFY
        assert(x.pop()==y.pop());
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;
        stack<bool>  y;
        x.push(true);
        y=x;

        // VERIFY
        assert(x.pop()==y.pop());
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String>  y;
        x.push('a');
        y=x;

        // VERIFY
        assert(x.pop()==y.pop());
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String>  y;
        x.push("abc");
        y=x;

        // VERIFY
        assert(x.pop()==y.pop());
     }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing assign." << std::endl;
    return 0;
}

