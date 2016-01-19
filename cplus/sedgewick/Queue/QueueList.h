#ifndef QUEUE_LIST_H
#define QUEUE_LIST_H

#include "Queue.h"

template <class Item>
class QueueNode {
public:
  Item item;
  QueueNode* next;
};


template <class Item>
class QueueList : public Queue<Item> {

private:
QueueNode<Item>* head;
QueueNode<Item>* tail;

QueueNode<Item>* addNode(Item item, QueueNode<Item>* next)
{
  QueueNode<Item>* x = new QueueNode<Item>();
  x->item = item;
  x->next = next;
  return x;
}

public:
 virtual void init(int N)
 {
   head = NULL;  
 }

 virtual int empty()
 {
   return (head == NULL);
 }

 virtual void put(Item item)
 {
   if (head == NULL)
   {
     tail = addNode(item, head);
     head = tail;
     return;
   }
   
   tail->next = addNode(item, tail->next);
   tail = tail->next;
 }

 virtual Item get()
 {
   Item item = head->item;
   QueueNode<Item>* t = head->next;
   delete head;
   head = t;

   return item;
 }

};

#endif
