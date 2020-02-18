#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
using namespace std;

struct ListNode
{
public:
    int data;
    ListNode* next;
    ///////////////////////////////////
    //ListNode():data(NULL),next(nullptr){}
  
    ListNode(int x) : data(x), next(nullptr){}
};

class singlyLinkedList{
public:

    singlyLinkedList(){head = NULL ;};// constructor
       
    singlyLinkedList(const std::vector<int>&inputs,int i);
    ~singlyLinkedList(); // destructor
    bool empty();
    int size();
    
    void push_front(int i); 
    void ​push_back(int i); 
    void insert_after(ListNode* p,int i);
    void erase(ListNode* p);
    void pop_front();
    void pop_back();
    int back();
    int front();
    //ListNode *GetBackPointer()
    ListNode *GetBackPointer(){
    ListNode *node = this->head;
    if(head==nullptr){
    return head;
    }
    if (node->next==nullptr){
    node = node->next;
    }
    return node;
};

ListNode *GetIthPointer(int i){
    if(i<=0){
    return nullptr;
    }
    ListNode *node= this->head;
    for(int n=1;n<i;n++){
    node=node->next;
    }
    return node;
 };
    //ListNode *GetIthPointer(int i);
    void print();

    ListNode *head_;
    

    

    ListNode* head;
    
};


#endif 
