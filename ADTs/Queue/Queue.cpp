//src file of the Queue
#include <iostream>
using namespace std ;
#include "Queue.h"

Queue::Queue(int max_size) {  //constructor 
    head = NULL; 
    tail = NULL;
    size = 0 ; // current size 
    this->max_size = max_size;
    }
Queue::~Queue() {
    while (!IsEmpty()) {
        dequeue(); // Dequeue until the queue is empty to avoid memory leaks
    }
}
void Queue::enqueue(int data) {
    if (IsFull()) {
        cout << "Queue is full. Cannot enqueue " << data << endl;
        return;
    }
    
    Node* newNode = new Node(data);
    if (IsEmpty()) {
        head = newNode;
        tail = newNode;
    } else {
        tail->Next = newNode;
        tail = newNode;
    }
    size++;
}
int Queue::dequeue() {
    if (IsEmpty()) { // if the queue is empty
        cout<<"queue is empty ! Cannot dequeue"<<endl;
        return -1;
    }

    Node* temp = head;
    int deletedValue = head->Data;
    head = head->Next;
    size = size -1 ;

    if (head == NULL or size == 0) { // if the queue becomes empty after dequeue
        tail = NULL;
    }

    delete temp;
    return deletedValue;
}
bool Queue:: IsEmpty(){
    return size == 0;
}
bool Queue:: IsFull(){
    return size == max_size;
}
void Queue::printqueue() {
    if (IsEmpty()) { // if the queue is empty
        cout << "Queue is empty!" << endl;
        return;
    }

    Node* current = head;
    while (current != NULL) {
        cout << current->Data << " ";
        current = current->Next;
    }
    cout << endl;
}

