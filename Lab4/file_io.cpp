// 
// File: file_io
// Anna Waltz
// 23001-002
//

#include <iostream> 
#include <fstream>
#include <cstdlib>
void readText(){
std::ifstream file;            // Define input stream
    file.open("fileio-text.txt");      // Open a file
    if(!file.is_open()) {                    // Make sure file opened correctly
        std::cerr << "File not found: data1-1.txt" << std::endl;
        exit(0);
    }
    
    char ch;           ///read text
    file.get(ch);
    while(!file.eof()){
        if(ch==' ')
            std:: cout << "\n";
        else
            std:: cout << ch;
        file.get(ch);
    }
    file.close();
}
void readData(){
    std::ifstream file;            // Define input stream
    file.open("fileio-data-1.txt");      // Open a file
    if(!file.is_open()) {                    // Make sure file opened correctly
        std::cerr << "File not found: data1-1.txt" << std::endl;
        exit(0);
    }

    int num1;          ///read data
    int num2;
    char ignore;
    while(file >> num1){ //assumes each one has a pain and ALL have non-int character to follow
        file >> ignore;
        file >> num2;
        std:: cout << num1 + num2 << "\n";
        file >> ignore;
    }
 
    file.close();
}
int main() {
    readText();
    readData();
}