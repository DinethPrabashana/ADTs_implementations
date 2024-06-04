#include <iostream>
using namespace std ;
#include "linked_list.h"

int main() {
    linked_list list;
    list.InsertAtbeginning(9);
    list.InsertAtbeginning(1);
    list.InsertAtbeginning(2);
    list.insert_before(4, 1);//insterting int 4 before int 1
    list.insert_after(5, 1);//inserting 5 after 1
    list.deleteEnd(); // deleting the last "that is int 9"
    list.printList();
    return 0;
}
