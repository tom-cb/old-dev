#include <iostream>
#include "LinkedList.h"
#include "ListNode.h"

using namespace std;

LinkedList::LinkedList()
{
  head = NULL; 
}

void LinkedList::addNode(int iData)
{
  if (head == NULL)
  {
    head = new ListNode(iData, NULL);
  }
  else
  {
    ListNode* n = head;

    // Find last node in list
    while (n->next != NULL)
    {
      n=n->next; 
    }
    
    //Add node at the end of the list, setting current as previous
    n->next = new ListNode(iData, n);
  }
}

void LinkedList::addNodeHead(int iData)
{
  if (head == NULL)
  {
    head = new ListNode(iData, NULL);
  }
  else
  {
    ListNode* newHead = new ListNode(iData, NULL);
    head->previous = newHead;
    newHead->next = head;
    head = newHead;
  }
}

void LinkedList::print()
{
  ListNode* n = head;

  while (n != NULL)  {
    cout << "data: " << n->data << "\n";
    n = n->next;
  }
}

void LinkedList::sortList()
{
  if (head == NULL) return;
  if (head->next == NULL) return;

  ListNode* n = head->next;
  ListNode* curr = head;

  bool match = false;

  while (n->next != NULL)
  {
    if (curr->data > n->data)
    {
      //next is less, swap n to head
      //ListNode* newHead = new ListNode(iData, NULL);
      cout << "swapping curr: " << curr->data << " with " << n->data << "\n";
      cout << "curr next data: " << curr->next->data <<"\n";
      cout << "n next data: " << n->next->data <<"\n";

      ListNode* currNext =  curr->next;
      curr->next = n->next;
      if (currNext == n)
      {
        cout << "swapping next current";
        n->next = curr;
      }
      else
      {
       cout << "swapping for current next\n";
        n->next = currNext;
      }
 
      //ListNode* currPrev = curr->previous;
      //curr->previous = n->previous;
      //n->previous = currPrev;

      if (curr == head)
      {
        head = n;
      }
    print();
    }
   cout << "head after sort it " << head->data << "\n";
   n = curr->next; 
  }
}


void LinkedList::removeNode()
{
  if (head == NULL) return;

  ListNode* n = head;
  
  // Find last node in list
  while (n->next != NULL)
  {
    n=n->next; 
  }
 
  if ( n->previous != NULL  ) { 
    n->previous->next = NULL; 
  }

  if (n == head) {
    head = NULL;
  }

  cout << "deleting node with data: " << n->data << "\n";
  delete n;
}



