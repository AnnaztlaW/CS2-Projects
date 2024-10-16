//
//
#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream file;            // Define input stream
    file.open("data1-1.txt");      // Open a file
    if(!file) {                    // Make sure file opened correctly
        std::cerr << "File not found: data1-1.txt" << std::endl;
        exit(1);
    }
    
    bigint one;
    bigint two;
    file >> one;
    file >> two;
    bigint result;
    result=one + two;

    std::cout << one << " + " << two << " = " << result;
    


    file.close();
    return 0;
}



