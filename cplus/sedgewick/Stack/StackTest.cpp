#include <iostream>

#include "Stack.h"
#include "StackArray.h"
#include "StackList.h"
#include "StackDupFreeInt.h"


main()
{

  std::cout << "Stack Test!\n";

//  StackArray <int> stk;
  StackDupFreeInt stk;
  stk.StackInit(10);

  stk.StackPush(1);
  stk.StackPush(2);
  stk.StackPush(3);
  stk.StackPush(3);
  stk.StackPush(3);
  stk.StackPush(1);

  std::cout << "StackPop: " <<  stk.StackPop() << "\n";
  std::cout << "StackPop: " <<  stk.StackPop() << "\n";
  
  stk.StackPush(4);

  std::cout << "StackPop: " <<  stk.StackPop() << "\n";
  std::cout << "StackPop: " <<  stk.StackPop() << "\n";
/*
  StackList<char> charStk;
  charStk.StackInit(10);
  charStk.StackPush('t');
  charStk.StackPush('s');
  charStk.StackPush('e');
  charStk.StackPush('t');

  std::cout << "StackPop: " <<  charStk.StackPop() << "\n";
  std::cout << "StackPop: " <<  charStk.StackPop() << "\n";
  std::cout << "StackPop: " <<  charStk.StackPop() << "\n";
  std::cout << "StackPop: " <<  charStk.StackPop() << "\n";
*/
}
