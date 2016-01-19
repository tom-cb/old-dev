#include <iostream>

#include "List.h"
#include "Node.h"


main (int argc, char *argv[])
{

  List* list = new List();

  list->initNodes(10);

  LinkNode node1 = list->newNode(1); 
  LinkNode node2 = list->newNode(2); 
  LinkNode node3 = list->newNode(3); 

  std::cout << "node1 data: " << node1->data << "node1: next data " << node1->next->data << "\n";
  std::cout << "node2 data: " << node2->data << "node2: next data " << node2->next->data << "\n";

  list->insertNext(node1, node2);

  std::cout << "node1 data: " << node1->data << "node1: next data " << node1->next->data << "\n";
  std::cout << "node2 data: " << node2->data << "node2: next data " << node2->next->data << "\n";


  list->insertNext(node2, node3);

//  std::cout << "node num:" << list->getData(node1) << " next: " << list->getData(list->getNext(node1)) << "\n";
//  std::cout << "node num:" << list->getData(node2) << " next: " << list->getData(list->getNext(node2)) << "\n";
//  std::cout << "node num:" << list->getData(node3) << " next: " << list->getData(list->getNext(node3)) << "\n";

  LinkNode x = node1;

  /*
  while (x != list->getNext(x))
  {
    std::cout << list->getData(x) << "\n";
    x = list->getNext(x);
  }
*/


}
