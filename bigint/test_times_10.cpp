// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(0);

        // Verify
        assert(bi == 3); 
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(11111);

        // Test 
        bi = bi.times10(2);

        // Verify
        assert(bi == 1111100);  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("987654334567890");

        // Test 
        bi = bi.times10(4);

        // Verify
        assert(bi == "9876543345678900000");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("100");

        // Test 
        bi = bi.times10(1);

        // Verify
        assert(bi == "1000");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi;

        // Test 
        bi = bi.times10(1);

        // Verify
        assert(bi == 0);  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(0);

        // Test 
        bi = bi.times10(8);

        // Verify
        assert(bi == 0);  
    }

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}

