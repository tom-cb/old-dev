#include "List.h"
#include "Node.h"
#include <stdlib.h>
#include <iostream>

/*
LinkNode List::newNode(int i)
{
  LinkNode x = deleteNext(freeList);
  x->data = i;
  x->next = x;
  return x;
}
*/

List::List(LinkNode iHead)
{
  head = iHead; 
  head->next = NULL;
}

void List::traverse(LinkNode x, void (*visit)(LinkNode))
{

}

int List::count(LinkNode x)
{
  if (x == NULL) 
    return 0;
  else
    return 1 + count(x->next);
}

void List::insertNext(LinkNode x, LinkNode t)
{
  if ( x == NULL)
  {
     head = t;
     head->next = NULL;
  }
  else
  {
    t->next = x->next;
    x->next = t;
  }
}

LinkNode List::deleteNext(LinkNode x)
{
  LinkNode t = x->next;
  x->next = t->next;
  return t;
}


void List::sortNSqrd(List* iList, List* oList) 
{
  LinkNode t;
  LinkNode u;
  LinkNode x;
  LinkNode b;

  b = oList->head;

  for (t = iList->head; t != NULL; t = u)
  {
    u = t->next;
    std::cout << "t data: " << t->data << "\n";
    for (x = b; x->next != NULL; x=x->next)
    {
      std::cout << "x data: "<< x->data << "\n";
      if (x->next->data > t->data)
      {
       std::cout << "break\n"; 
       break;
      }
    }
   t->next = x->next;
   x->next = t; 
  }
}


LinkNode List::getNext(LinkNode x)
{
  return x->next;
}

int List::getData(LinkNode x)
{
  return x->data;
}


