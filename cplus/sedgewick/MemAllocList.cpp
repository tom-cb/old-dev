#include "MemAllocList.h"
#include "Node.h"
#include <stdlib.h>
#include <iostream>

void MemAllocList::initNodes(int N)
{
  int i;
  freeList = (LinkNode)malloc((N+1)*(sizeof *freeList));
  for (i=0; i<N; i++)
  {
    freeList[i].next = &freeList[i+1];
  }

  freeList[N].next = NULL;
}


LinkNode MemAllocList::newNode(int i)
{
  LinkNode x = deleteNext(freeList);
  x->data = i;
  x->next = x;
  return x;
}


void MemAllocList::freeNode(LinkNode x)
{
  insertNext(freeList, x);
}

void MemAllocList::insertNext(LinkNode x, LinkNode t)
{
  t->next = x->next;
  x->next = t;
}

LinkNode MemAllocList::deleteNext(LinkNode x)
{
  LinkNode t = x->next;
  x->next = t->next;
  return t;
}


LinkNode MemAllocList::getNext(LinkNode x)
{
  return x->next;
}

int MemAllocList::getData(LinkNode x)
{
  return x->data;
}


