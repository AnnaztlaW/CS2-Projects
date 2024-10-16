//  Stack class test program
//
//  Tests: XXX 
//

#include "stack.hpp"
#include <cassert>
#include <iostream>

stack<int> send(stack<int> x){ //does nothing
    return x;
}
stack<String> send(stack<String> x){ //does nothing
    return x;
}


//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(1);

        // TEST
        stack<int> y =send(x);

        // VERIFY
        assert(y.pop()==x.pop());
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        x.push(1);
        x.push(2);

        // TEST
        stack<int> y =send(x);
        x.pop();
        y.pop();

        // VERIFY
        assert(y.pop()==x.pop());
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push('a');

        // TEST
        stack<String> y =send(x);

        // VERIFY
        assert(y.pop()==x.pop());
     }
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push("abc");
        x.push("ABC");

        // TEST
        stack<String> y =send(x);

        // VERIFY
        assert(y.pop()==x.pop());
        assert(y.pop()==x.pop());
     }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing copy constructor." << std::endl;
    return 0;
}

