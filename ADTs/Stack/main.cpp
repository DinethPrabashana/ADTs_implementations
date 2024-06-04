//main file of the Stack
#include <iostream>
using namespace std ;
#include "Stack.h"


int main() {
    Stack stack;

    stack.push(10);
    stack.push(12);
    stack.push(19);

    cout << "Top element: " << stack.peek() << endl;

    while (!stack.IsEmpty()) {
        cout << "Popped element: " << stack.pop() << endl;
    }

    if (stack.IsEmpty()) {
        cout << "Stack is empty now." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}