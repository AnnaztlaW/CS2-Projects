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
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("1000000000000");

        // Test 
        bi = bi.times10(9);

        // Verify
        assert(bi == "1000000000000000000000");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("8346875943659762964593547926435286538475697346");

        // Test 
        bi = bi.times10(10);

        // Verify
        assert(bi == "83468759436597629645935479264352865384756973460000000000");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("2975639746593767826975628431765364825284516754367518263479143851635482634195");

        // Test 
        bi = bi.times10(3);

        // Verify
        assert(bi == "2975639746593767826975628431765364825284516754367518263479143851635482634195000");  
    }


    std::cout << "Done testing times_10!" << std::endl;
    return 0;
}

