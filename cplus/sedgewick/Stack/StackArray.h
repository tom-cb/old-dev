#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include "Stack.h"

template <class Item>
class StackArray : public Stack<Item> {

private:
  // Pointer to array of items in stack
  Item* s;
  // Number of items on the stack
  int N;

public:

  virtual void StackInit(int maxItems)
  {
    s = new Item[maxItems];
    N = 0;
  }

  virtual int StackEmpty()
  {
    return N == 0;
  }

  virtual void StackPush(Item item)
  {
    s[N++] = item;
  }

  virtual Item StackPop()
  {
    return s[--N];
  }

};

#endif
