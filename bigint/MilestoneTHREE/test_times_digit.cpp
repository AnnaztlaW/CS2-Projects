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
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3); 
        std:: cout << "working one";
    }


    //Add test cases as needed.
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("11111111111111");

        // Test 
        bi = bi.timesDigit(2);

        // Verify

        assert(bi == "22222222222222");  
        std:: cout << "working two";
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi;

        // Test 
        bi = bi.timesDigit(98);

        // Verify

        assert(bi == 0);  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("99999");

        // Test 
        bi = bi.timesDigit(3);

        // Verify

        assert(bi == 299997);  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("123456789");

        // Test 
        bi = bi.timesDigit(5);

        // Verify

        assert(bi == "617283945");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("6565656565656565656565656565656565656565656565");

        // Test 
        bi = bi.timesDigit(1);

        // Verify

        assert(bi == "6565656565656565656565656565656565656565656565");  
    }


    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}
