//
// File: stack.hpp
//
// Programmer: Anna Waltz
// Date:        Spring 2024
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//
#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_

#include <new>
#include <cassert>
#include "../string/string.hpp"


template<typename T> 
class Node {
	public:
    Node(): next(0){};
    Node(const T& x): data(x), next(nullptr){};
    T data;
    Node<T> *next;
};


// CLASS INV:
//
template <typename T>
class stack {
public:
              stack     (): tos(0) {};
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
    stack<T>& operator= (stack<T> rhs){
		swap(rhs); 
		return *this;
	};
    
	bool      empty     () const{
		return tos==nullptr;
	};
	bool      full      () const;
	T         top       () const;
	T         pop       ();
	void      push      (const T&);

private:
	Node<T>   *tos;
};
template <typename T>
void stack<T>:: push(const T& item){
    assert(!full());
    Node<T> *temp= new Node<T>(item); //automatically delete, local var
    temp->next= tos;
    tos=temp;
}

template <typename T>
T stack<T>:: pop(){
    assert(!empty());
    T result = tos->data;
    Node<T> *temp = tos;
    tos = tos->next;
    delete temp;
    return result;
}
template <typename T>
T stack<T>::top () const{
    return tos->data;
}
template <typename T>
stack<T>:: ~stack(){ //deconstructor
    Node <T> *temp;
    while(tos != 0){
        temp= tos;
        tos= tos->next;
        delete temp;
    }
}

template <typename T>
stack<T>:: stack(const stack<T>& actual){//copy constructor
//slides for this
    Node<T> *temp= actual.tos;
    Node<T> *bottom =0;
    tos=0;
    while(temp!=0){
        if(tos==0){
            tos=new Node <T>(temp->data);
            bottom = tos;
        }
        else{
            bottom -> next= new Node<T>(temp->data);
            bottom = bottom->next;
        }
        temp=temp->next;//increment
    }
}

//const time swap
template <typename T>
void stack<T>:: swap(stack<T>& rhs){
    Node<T>* temp = tos;
    tos= rhs.tos;
    rhs.tos= temp;
}

template <typename T>
bool stack<T>:: full()const{
    Node<T>* temp = new(std:: nothrow) Node<T>();
    if(temp==0) //no memory remaining
        return true;
    delete temp;
    return false;
}




#endif
