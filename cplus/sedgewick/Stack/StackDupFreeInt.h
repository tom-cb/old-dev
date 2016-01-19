#ifndef STACK_DUP_FREE_INT
#define STACK_DUP_FREE_INT

#include "Stack.h"
#include "StackArray.h"

class StackDupFreeInt : public Stack<int> {

private:

Stack<int>* stack;
int* presentInts;

public:

  virtual void StackInit(int maxItems)
  {
    stack = new StackList<int>;
    stack->StackInit(maxItems);

    presentInts = new int[maxItems];

    for (int i=0; i < maxItems; i++)
    {
      presentInts[i] = 0;
    }
  }

  virtual int StackEmpty()
  {
    return stack->StackEmpty();
  }

  virtual void StackPush(int item)
  {
    if ( presentInts[item] == 1)
      return;
    else
    {
      stack->StackPush(item);
      presentInts[item] = 1;
    }
  }

  virtual int StackPop()
  {
    int item = stack->StackPop();
    presentInts[item] = 0;
    return item;
  }

};



#endif
