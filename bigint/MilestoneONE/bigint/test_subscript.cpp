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
        bigint bi;

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 0);  
        assert(digit == 0);

    }
    {
        // Setup
        bigint bi(9993);

        // Test 
        int digit = bi[3];

        // Verify
        assert(bi    == 9993);  
        assert(digit == 3);

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
        bigint bi("10000000000000000111");

        // Test 
        int digit = bi[1];

        // Verify
        assert(bi    == "10000000000000000111");  
        assert(digit == 0);
    }
    {
        // Setup
        bigint bi("9000000000000");

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == "9000000000000");  
        assert(digit == 9);
    }
    {
        // Setup
        bigint bi("98543456789585445433421234588888908543345");

        // Test 
        int digit = bi[7];

        // Verify
        assert(bi    == "98543456789585445433421234588888908543345");  
        assert(digit == 6);
    }
    {
        // Setup
        bigint bi(1023);

        // Test 
        int digit = bi[2];

        // Verify
        assert(bi    == 1023);  
        assert(digit == 2);
    }
     
    //Add test cases!!

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

