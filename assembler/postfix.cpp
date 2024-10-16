//Anna Waltz
//Project Three



//read text file for infix 2 postfix
#include "utilities.hpp"
#include <fstream>


int main(int agrc, char* argv[]){
     //   ./postfix data3-2.txt out.txt
    //     or
    //   ./postfix data3-2.txt 

    if(agrc >3 || agrc<2){
        std:: cout << "Invalid number of arguments!" << std:: endl;
        exit(1);
    }

    std::ifstream file;            // Define input stream
    file.open(argv[1]);      // Open a file
    if(!file) {                    // Make sure file opened correctly
        std::cerr << "File not found/cannot open " << std::endl;
        exit(1);
    }

    if(agrc == 2){
        expression(file, std::cout);
        file.clear();
        file.seekg(0, std::ios::beg);
        infixToPostfix(file, std::cout);
        file.clear();
        file.seekg(0, std::ios::beg);
        infixToPrefix(file, std:: cout); //bonus
    }
    if(agrc == 3){
        std::ofstream outFile(argv[2]); 
        expression(file, outFile);
        file.clear();
        file.seekg(0, std::ios::beg);
        infixToPostfix(file, outFile);
        file.clear();
        file.seekg(0, std::ios::beg);
        infixToPrefix(file, outFile); //bonus
    }

    //comment out lines 24 and 29 for prefix elavuation

}