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
    std::cout << "File opened, is working!"<< std::endl;
    
    while(!file.eof()){
        bigint one;
        bigint two;
        file >> one;
        file >> two;
        bigint result;
        result=one + two;
        if(!file.eof())
            std::cout << one << " + " << two << " = " << result << std:: endl;
    }
    
    file.close();
    return 0;
}



