#include <iostream>
#include "src/lib/solution.h"
#include<string>

int main() {
    
    singlyLinkedList* list = new singlyLinkedList();
    list->​push_back(100);
    list->push_front(300);
    list->push_front(400);
    list->push_front(600);
    list->push_front(700);
    list->​push_back(900);
    list->pop_back();
    list->pop_front();
    
    std::cout << "Linked List data   " << list->front()<<std::endl;
    list->print();
    delete list;
    return 0;
}
    