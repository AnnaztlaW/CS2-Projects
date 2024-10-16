//tests the swap assginment for milestone 2


#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('a');
        String str2('b');
        str.swap(str2);

        // VERIFY
        assert(str2 == 'a');
        assert(str == 'b');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;
        String str2;
        str.swap(str2);

        // VERIFY
        assert(str2 == "");
        assert(str == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("jhgfddfyuuytfgh");
        String str2("hgfdrtyiojhvcsartuiopolknbvcxsr");
        str.swap(str2);

        // VERIFY
        assert(str2 == "jhgfddfyuuytfgh");
        assert(str == "hgfdrtyiojhvcsartuiopolknbvcxsr");
    }

    std:: cout << "Done testing swap assignment!" << std:: endl;
}
