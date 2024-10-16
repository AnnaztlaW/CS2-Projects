//
// Lab 6 main file
//
// Anna Waltz
// CS 23001-002


#include <iostream>
#include "object_construction.hpp"
int main(){
    int size;
    
    std:: cout << "Enter size for array :";
    std :: cin >> size;
    Darray array(size);
    std ::cout << std :: endl;
    int num;
    for (int i=0; i < size; i++){
        std::cin >> num;
        array[i]= num;
    }

    std::cout << "{";
    for (int i=0 ;i < size; i++){
        std::cout << array[i]<<", ";
    }
    std::cout << "}";
}