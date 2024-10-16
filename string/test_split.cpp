//  String class test program
// 
//  Tests: XXX
//
  
#include "string.hpp"
#include <cassert>
#include <iostream> 
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str;

        // TEST
        std:: vector<String> result = str.split(' ');

        // VERIFY
        assert(result[0] == "");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abc ef gh");

        // TEST
        std:: vector<String> result = str.split(' ');

        // VERIFY
        //std:: cout << result[0] << std:: endl;
        //std:: cout << result[1] << std:: endl;
        //std:: cout << result[2] << std:: endl;
        //std:: cout << result.size() << std:: endl;

        assert(result[0] == "abc");
        assert(result[1] == "ef");
        assert(result[2] == "gh");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("-abc-ef--gh");

        // TEST
        std:: vector<String> result = str.split('-');

        assert(result[0] == "");
        assert(result[1] == "abc");
        assert(result[2] == "ef");
        assert(result[3] == "");
        assert(result[4] == "gh");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("-abc-ef--gh");

        // TEST
        std:: vector<String> result = str.split(' ');

        assert(result[0] == "-abc-ef--gh");
    }

    
    std::cout << "Done testing split." << std::endl;
    return 0;
}

