//header file for linked_list
#ifndef linked_list_H
#define linked_list_H
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
class linked_list{
private:
    Node* head ;
public:
    linked_list();
    void InsertAtbeginning(int data);
    void InsertAtend(int data);
    void deleteBegining();
    void deleteEnd();
    void insert_before(int data, int value);
    void insert_after(int data, int value);
    void printList();
};

#endif 
