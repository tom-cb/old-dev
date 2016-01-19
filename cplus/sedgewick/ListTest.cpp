#include <iostream>

#include "MemAllocList.h"
#include "List.h"
#include "Node.h"


main (int argc, char *argv[])
{

  MemAllocList* memList = new MemAllocList();

  memList->initNodes(10);

  LinkNode node4 = memList->newNode(4); 
  LinkNode node5 = memList->newNode(5); 
  LinkNode node6 = memList->newNode(6); 

  LinkNode hNode = memList->newNode(0);
  List* list = new List(hNode);

  list->insertNext(NULL, node4);

  list->insertNext(node4, node5);
  list->insertNext(node5, node6);

  LinkNode x = list->head;

  
  while (x != NULL)
  {
    std::cout << list->getData(x) << "\n";
    x = list->getNext(x);
  }

  LinkNode node1 = memList->newNode(1); 
  LinkNode node2 = memList->newNode(2); 
  LinkNode node3 = memList->newNode(3); 

  list->insertNext(node6, node1);

  list->insertNext(node1, node2);
  list->insertNext(node2, node3);

  LinkNode hNode2 = memList->newNode(0);
  List* listTwo = new List(hNode2);

  list->sortNSqrd(list, listTwo);

  x = listTwo->head;

  while (x != NULL)
  {
    std::cout << listTwo->getData(x) << "\n";
    x = listTwo->getNext(x);
  }

  std::cout << "Length of list: " << listTwo->count(listTwo->head) << "\n";

}


