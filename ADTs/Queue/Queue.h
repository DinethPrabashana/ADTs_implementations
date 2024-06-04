//header file for Queue
#ifndef Queue_H
#define Queue_H
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

class Queue{
private:
    Node* head;
    Node* tail;
    int max_size ;
public:
   Queue(int max_size);
   ~Queue();
   void enqueue(int data);
   int dequeue() ;
   int peek();
   bool IsEmpty();
   bool IsFull();
   void printqueue();
   int size ; // current queue size 
};
#endif 