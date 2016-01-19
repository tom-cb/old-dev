#ifndef LINKEDLIST
#define LINKEDLIST

#include "ListNode.h"

class LinkedList {

  ListNode* head;


  public: 
    LinkedList();

    void addNode(int iData);
    void addNodeHead(int iData);
   
    void removeNode();

    void sortList();

    void print();

};
#endif
