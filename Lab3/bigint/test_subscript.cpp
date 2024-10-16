// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        // Setup
        bigint bi(0);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 0);  
        assert(digit == 0);
    }
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  
        assert(digit == 4);
    }
    {
        // Setup
        bigint bi("999989999");

        // Test 
        int digit = bi[4];

        // Verify
        assert(bi    == "999989999");  
        assert(digit == 8);
    }
    {
        // Setup
        bigint bi("10000000000000000");

        // Test 
        int digit = bi[1];

        // Verify
        assert(bi    == "10000000000000000");  
        assert(digit == 0);
    }
    {
        // Setup
        bigint bi(123456789);

        // Test 
        int digit = bi[8];

        // Verify
        assert(bi    == 123456789);  
        assert(digit == 9);
    }
    
    //Add test cases!!

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

