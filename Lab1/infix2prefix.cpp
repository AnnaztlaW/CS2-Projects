#include <iostream>
#include "../assembler/stack.hpp"

int main(){
    //Infix expression converted to prefix expression

    std::ifstream file;            // Define input stream
    file.open("data3-1.txt");      // Open a file
    if(!file) {                    // Make sure file opened correctly
        std::cerr << "File not found: data3-1.txt" << std::endl;
        exit(1);
    }
    String x;

    stack<String> stk;
    
    while(file >> x){
        if(file.eof())
            exit(1);

        while(x!= ";" ){
            if(x == ")" ){
                String rhs = stk.pop();
                String op = stk.pop();
                String lhs = stk.pop();
                stk.push(op + lhs + rhs); //pre stk.push(op + lhs + rhs );
            }
            else if(x != "("){
                stk.push(x + " ");
            }
            file >> x;
        }
        std:: cout << stk.pop() + " " << std::endl;

    }
}