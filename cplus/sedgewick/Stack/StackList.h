#ifndef STACK_LIST_H
#define STACK_LIST_H

#include "Stack.h"

template <class Item>
class StackNode {
public:
  Item item;
  StackNode* next;
};

template <class Item>
class StackList: public Stack<Item> {

StackNode<Item>* head;

private:
  StackNode<Item>* newNode(Item item, StackNode<Item>* next)
  {
    StackNode<Item>* x = new StackNode<Item>;
    x->item = item;
    x->next = next;
    return x;
  }

public:
  virtual void StackInit(int maxItems)
  {
    head = NULL;
  }

  virtual int StackEmpty()
  {
    return head == NULL;
  }

  virtual void StackPush(Item item)
  {
    head = newNode(item, head); 
  }

  virtual Item StackPop()
  {
    Item item = head->item;
    StackNode<Item>* t = head->next;
    delete head;
    head = t;
    return item;
  }

};
#endif
