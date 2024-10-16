
//hpp file for lab 6

#ifndef OBJECTCONSTRUCTION_HPP
#define OBJECTCONSTRUCTION_HPP

class Darray{
    public:
        Darray() : ptr(0), cap() {
            std:: cout << "Constructor, line 10 ob_con.hpp"<<std:: endl;
        }; //constructor
        Darray(int);                 // constructor
        Darray(const Darray&);      //copy constructor
        ~Darray();                  //destructor

        Darray& operator=(const Darray&); //assignment
        Darray& operator=(Darray);

        void swap(Darray&);

        int operator[](int) const;
        int operator[](int);

        int capacity() const {return cap;};
        void resizeCapacity(int);


    private:
        int *ptr;
        int cap;
};

#endif