#ifndef STACK_H
#define STACK_H

template <class Item>
class Stack {

public:
  virtual void StackInit(int)=0;
  virtual int StackEmpty()=0;
  virtual void StackPush(Item)=0;
  virtual Item StackPop()=0;

};

#endif
