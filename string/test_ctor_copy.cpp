//tests the copy constructor for milestone 2


#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
String testCopy(String obj){
    //does nothing
    return obj;
}

int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('a');
        String str2= testCopy(str);

        // VERIFY
        assert(str == str2);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abcdefg");
        String str2= testCopy(str);

        // VERIFY
        assert(str == str2);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("khgfdiuytrrtyujhgfdnbvcxjytrewertyuiojnbvcxzawerfg");
        String str2= testCopy(str);

        // VERIFY
        assert(str == str2);
    }
    std:: cout << "Done testing copy constructor!" << std:: endl;
}