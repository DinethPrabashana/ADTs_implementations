#include <iostream>
using namespace std ;
#include "Queue.h"

int main() {
    Queue queue(4);

    cout << "IsFull: " << (queue.IsFull() ? "Yes" : "No") << endl;
    cout << "IsEmpty: " << (queue.IsEmpty() ? "Yes" : "No") << endl;

    queue.enqueue(10);
    queue.enqueue(11);
    queue.enqueue(1);
    queue.enqueue(92);

    cout << "After enqueuing 4 elements:" << endl;
    queue.printqueue();

    cout << "IsFull: " << (queue.IsFull() ? "Yes" : "No") << endl;
    cout << "IsEmpty: " << (queue.IsEmpty() ? "Yes" : "No") << endl;

    queue.enqueue(12); // Trying to enqueue to a full queue

    queue.dequeue();
    queue.dequeue();

    cout << "After dequeuing 2 elements:" << endl;
    queue.printqueue();

    cout << "IsFull: " << (queue.IsFull() ? "Yes" : "No") << endl;
    cout << "IsEmpty: " << (queue.IsEmpty() ? "Yes" : "No") << endl;

    return 0;
}