//src file of the Stack
#include <iostream>
using namespace std ;
#include "Stack.h"

Stack::Stack() {
        top = NULL;
        stack_size = 0 ; // initial stack size 
    }
Stack::~Stack(){
    if (!IsEmpty()){
        pop();
    }
}
int Stack::pop() {
        if (IsEmpty()) {
            throw "Stack is empty!";
        }
        Node* temp = top;
        int poppedValue = temp->Data;
        top = top->Next;
        delete temp;
        return poppedValue;
        stack_size -- ;
    }
void Stack::push(int data) {
        Node* newNode = new Node(data);
        newNode->Next = top;
        top = newNode;
        stack_size++ ;
    }
int Stack:: peek() {
        if (IsEmpty()) {
            throw "Stack is empty!";
        }
        return top->Data;
    }

bool Stack::IsEmpty() {
        return top == NULL;
    }
int Stack::size(){
    return stack_size ;
}
