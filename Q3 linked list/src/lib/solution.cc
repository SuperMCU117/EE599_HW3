#include "solution.h"
#include<iostream>


singlyLinkedList::singlyLinkedList(const std::vector<int>&inputs,int i){
  
  ListNode *head = NULL;
  for(unsigned int i = 0 ; i < inputs.size() ; i++){

      int myvalue = inputs.at(i);
      ListNode* newnode = new ListNode(i);
      newnode->data = myvalue;
      newnode->next = NULL;
      if (head == NULL) {
        head = newnode;
      }
      else {
        ListNode* temp = head; // head is not NULL
        while (temp->next != NULL) { 
            temp = temp->next; // go to end of list
        }
        temp->next = newnode; // linking to newnode
    }

}
    


}


singlyLinkedList::~singlyLinkedList(){
  std::cout<<"List Deleted"<<endl;
}
bool singlyLinkedList::empty(){
  if(head==NULL){
    return true;
  }
  else return false;
}
int singlyLinkedList::size(){
  if(head==NULL) return 0;
  else{
    ListNode* temp = head; 
    int counter = 1;
    while (temp->next != NULL) { 
            temp = temp->next; 
            counter++;
        }
    return counter;
  }
}

void singlyLinkedList::​push_back(int i){
  ListNode* newnode = new ListNode(i);
    newnode->data = i;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
    }
    else {
        ListNode* temp = head; // head is not NULL
        while (temp->next != NULL) { 
            temp = temp->next; // go to end of list
        }
        temp->next = newnode; // linking to newnode
    }
}
void singlyLinkedList::push_front(int i){
  ListNode* newnode = new ListNode(i);
  newnode->data = i;
  newnode->next = NULL;
  if (head == NULL) {
    head = newnode;
   }
  else{
    ListNode* temp=new ListNode(i);
    temp->data=i;
    temp->next=head;
    head=temp;
  }
}

void singlyLinkedList::insert_after(ListNode* p,int i){
  ListNode *NewNode = new ListNode(i);
  NewNode->next=p->next;
  p->next=NewNode;
}

void singlyLinkedList::erase(ListNode* p){
  if (head==NULL) return;
  if (p->next==head->next) {
    head=head->next;
    delete p;
  }
  else{
    ListNode *temp = head;
    while (temp->next != p->next) { 
            temp = temp->next;
    }
    p=temp->next;
    temp->next=p->next;
    delete p;
  }


}

void singlyLinkedList::pop_back(){
  if (head == NULL)return;
  if (head->next==NULL) delete head;
  ListNode* second_last = head;
  while (second_last->next->next != NULL) { 
    second_last= second_last->next;
  }
  delete (second_last->next);
  second_last->next=NULL;
}

void singlyLinkedList::pop_front(){
  if (head == NULL)return;
  ListNode* temp = head;
  head=head->next ;
  delete temp;

}
int singlyLinkedList::back(){
  ListNode* temp = head; // head is not NULL
      while (temp->next != NULL) { 
          temp = temp->next; // go to end of list
      }
      return temp->data;
    } 


int singlyLinkedList::front(){
  ListNode* temp = head;
  
  return temp->data;

}

void singlyLinkedList::print(){
    ListNode* head = this->head;
    int i = 1;
    while(head){
        std::cout << i << ": " << head->data << std::endl;
        head = head->next;
        i++;
    }
}
/*
ListNode *GetBackPointer(){
  ListNode *node = this->head_;
  if(head_==nullptr){
    return head_;
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
ListNode *node= this->head_;
for(int n=1;n<i;n++){
  node=node->next;
}
return node;
};
*/
ListNode *head_{ head_=NULL};




  