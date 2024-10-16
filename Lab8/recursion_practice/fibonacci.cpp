#include <iostream>

int fib(int val){
    if(val<=1)
        return val;
    return fib(val-1) + fib(val-2);
    

}

int tailFib(int now, int one, int two){
    if(now<1)
        return one ;
    return tailFib(now-1, two, one+two);
}

int main(){
    int max;
    std:: cout << "Fibonacci Sequence!!" << std:: endl;
    std:: cout << "Enter disired maximum of sequence:: " ;
    std:: cin >> max;

    std:: cout << "'Regular' call::"<< std::endl;
    for(int i=0; i<max; i++)
        std:: cout << fib(i)<< " ";
    std:: cout << std:: endl;

    std:: cout << "'Tail' call::"<< std::endl;
    for(int i=0; i < max;i++)
        std:: cout << tailFib(i,0,1)<< " ";
    std:: cout << std:: endl;

}