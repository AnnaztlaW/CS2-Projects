

//Anna Waltz
//Milestone Three
//postFix expression to assembler

#include "utilities.hpp"
#include <fstream>

int main(int agrc, char* argv[]){

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


    //print regular expression
    //print post          and pre(bonus)
    //print assembly

    if(agrc ==2){
        expression(file, std::cout);
        file.clear();
        file.seekg(0, std::ios::beg);

        String post= infixToPostfix(file, std::cout);
        file.clear();
        file.seekg(0, std::ios::beg);

        String pre= infixToPrefix(file, std::cout); //bonus
        file.clear();
        file.seekg(0, std::ios::beg);

        std::vector<String> temp= post.split('\n');
        std::cout << "Assembly PostFix:: \n";
        for(int i=0; i <(int)temp.size(); i++)
            std::cout << postfixToAs(temp[i]);

    }
    if(agrc==3){
        std::ofstream outFile(argv[2]);

        expression(file, outFile);
        file.clear();
        file.seekg(0, std::ios::beg);

        String post= infixToPostfix(file, outFile);
        file.clear();
        file.seekg(0, std::ios::beg);

        String pre= infixToPrefix(file, outFile); //bonus
        file.clear();
        file.seekg(0, std::ios::beg);

        std::vector<String> temp= post.split('\n');
        outFile << "Assembly PostFix:: \n";
        for(int i=0; i <(int)temp.size()-1; i++)
            outFile << postfixToAs(temp[i]);
    }


}