
#ifndef LISTNODE
#define LISTNODE

class ListNode {

  public :

  ListNode* next;
  ListNode* previous;

  int data;

  ListNode(int iData, ListNode* iPrevious)
  {
    next = NULL;
    previous = iPrevious;
    data = iData;
  }
};

#endif
