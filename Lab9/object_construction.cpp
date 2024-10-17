#include <iostream>
#include "object_construction.hpp"
 
Darray:: Darray(int newCap, ){ //assignment constructor
    std:: cout << "Constructor, line 5 ob_con.cpp"<<std:: endl;
    if(newCap < 0)
        newCap=0;
    cap = newCap;
    ptr= new int[cap];
}

Darray:: ~Darray(){ ///DESTRUCTOR,
std:: cout << "Destructor, line 13 ob_con.cpp"<<std:: endl; 
    delete[] ptr;
    //cap=0; not nessessary
}

Darray:: Darray(const Darray& actual){ //copy constructor
std:: cout << "Copy constructor, line 19 ob_con.cpp"<<std:: endl;
    cap=actual.cap;
    ptr= new int[cap];
    for(int i= 0; i< cap; i++){
        ptr[i]=actual.ptr[i];
    }
}

void Darray:: swap(Darray& rhs){
    int *temp= ptr;
    int cTemp= cap;
    ptr= rhs.ptr;
    cap=rhs.cap;
    rhs.ptr =temp;
    rhs.cap= cTemp;
}

Darray& Darray::operator=(Darray rhs){ //assignment
    std:: cout << "Assignment, line 37 ob_con.cpp"<<std:: endl;
    swap(rhs);
    return *this;
}

int operator[](int index) const{
    if(index>cap || index <0)
        return -1;
    else 
        return str[index];
}
int operator[](int){
    if(index>cap || index <0)
        return -1;
    else 
        return str[index];

}


void Darray:: resizeCapacity(int newSize){
    int smaller = (cap < newSize) ? cap : newSize;
    cap= newSize;
    int *temp= new int[cap];
    for(int i=0; i<smaller; i++)
        temp[i]=ptr[i];

    delete[] ptr;
    for(int i=0; i<smaller; i++)
        ptr[i]=temp[i];
}