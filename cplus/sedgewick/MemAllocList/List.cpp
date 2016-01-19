#include "List.h"
#include "Node.h"
#include <stdlib.h>
#include <iostream>

void List::initNodes(int N)
{
  int i;
  freeList = (LinkNode)malloc((N+1)*(sizeof *freeList));
  for (i=0; i<N; i++)
  {
    freeList[i].next = &freeList[i+1];
  }

  freeList[N].next = NULL;
}


LinkNode List::newNode(int i)
{
  LinkNode x = deleteNext(freeList);
  x->data = i;
  x->next = x;
  return x;
}


void List::freeNode(LinkNode x)
{
  insertNext(freeList, x);
}

void List::insertNext(LinkNode x, LinkNode t)
{
  t->next = x->next;
  x->next = t;
}

LinkNode List::deleteNext(LinkNode x)
{
  LinkNode t = x->next;
  x->next = t->next;
  return t;
}


LinkNode List::getNext(LinkNode x)
{
  return x->next;
}

int List::getData(LinkNode x)
{
  return x->data;
}


