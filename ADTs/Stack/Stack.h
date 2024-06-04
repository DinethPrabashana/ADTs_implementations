//header file for Stack
#ifndef Stack_H
#define Stack_H
#include <iostream>
using namespace std ;

//class Node 
class Node{
public:
    int Data;
    Node* Next ;

    Node(int data){//constructor 
        this->Data = data;
        this->Next = NULL;
    }  
};
class Stack{
private:
    Node* top;
public:
   int stack_size;
   Stack();
   ~Stack();//destructor
   int pop();
   void push(int data) ;
   int peek();
   bool IsEmpty();
   int size();
};
#endif