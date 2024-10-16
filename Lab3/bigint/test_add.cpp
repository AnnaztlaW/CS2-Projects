// bigint Test Program
//
// Tests:  int constructor, uses ==
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
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;
        std:: cout << left << " + " << right<< " = " << result;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;
      std:: cout << left << " + " << right<< " = " << result;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;
      std:: cout << left << " + " << right<< " = " << result;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

    //assert(1 == 2); //WRONG. This will fail, of course.
                    //You need to add more test cases here. Remove this assert.

    
    //Add test cases as needed.
    //test default constructor
    //test addition that results in carring numbers, like 9+9=18  !=8)
    {
    bigint left;
    bigint right;
    bigint result= left + right;
    std:: cout << left << " + " << right<< " = " << result;
    assert(left   == 0);
    assert(right  == 0);
    assert(result == 0);
    }
    {
    bigint left(99);
    bigint right(2);
    bigint result= left + right;
    std:: cout << left << " + " << right<< " = " << result;
    assert(left   == 99);
    assert(right  == 2);
    assert(result == 101);
    }
    {
    bigint left("10000000000000999999999");
    bigint right(23);
    bigint result= left + right;
    std:: cout << left << " + " << right<< " = " << result;
    assert(left   == "10000000000000999999999");
    assert(right  == 23);
    assert(result == "10000000000001000000022");
    }

    {
    bigint left("999");
    bigint right;
    bigint result= left + right;
    std:: cout << left << " + " << right<< " = " << result;
    assert(left   == "999");
    assert(right  == 0);
    assert(result == "999");
    }

    {
    bigint left("999999999");
    bigint right("11");
    bigint result= left + right;
    std:: cout << left << " + " << right<< " = " << result;
    assert(left   == "999999999");
    assert(right  == 11);
    assert(result == "100000010");
    }
    
    std::cout << "Done with testing addition." << std::endl;
    return 0;
}

