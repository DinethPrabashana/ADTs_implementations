//src file of the linked_list
#include <iostream>
using namespace std ;
#include "linked_list.h"


linked_list::linked_list() {  // LinkedList constructor 
    head = NULL; // initially the linkedlist is empty 
    }
void linked_list::InsertAtbeginning(int data) {
        Node* newNode = new Node(data);
        newNode->Next = head;
        head = newNode;
    }
void linked_list::InsertAtend(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head; 
        while (temp->Next != NULL) {
            temp = temp->Next;
        }
        temp->Next = newNode;
    }
void linked_list::deleteBegining() {
        if (head == NULL) {
            cout << "empty list" << endl;
            return;
        }
        Node* temp = head->Next;
        delete head;
        head = temp;
    }
void linked_list::deleteEnd() {
        if (head == NULL) {
            cout << "empty list" << endl;
            return;
        }

        if (head->Next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* current = head;
        while (current->Next->Next != NULL) {
            current = current->Next;
        }
        delete current->Next;
        current->Next = NULL;
    }
void linked_list::insert_before(int data, int value) {
        if (head == NULL) return; // if the list is empty

        if (head->Data == value) { // insert before head
            InsertAtbeginning(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* current = head;
        while (current->Next != NULL && current->Next->Data != value) {
            current = current->Next;
        }
        if (current->Next == NULL) {
            delete newNode; // value not found
            return;
        }
        newNode->Next = current->Next;
        current->Next = newNode;
    }
void linked_list::insert_after(int data, int value) {
        Node* current = head;
        while (current != NULL && current->Data != value) {
            current = current->Next;
        }
        if (current == NULL) return; // value not found
        Node* newNode = new Node(data);
        newNode->Next = current->Next;
        current->Next = newNode;
    }
void linked_list::printList() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* current = head;
        while (current != NULL) {
            cout << current->Data << " ";
            current = current->Next; 
        }
        cout << endl;
    }
