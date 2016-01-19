
#include <iostream>
#include "LinkedList.h"


using namespace std;

main()
{
  cout << "Hello World!\n";

  LinkedList list;
  list.addNode(3); 
  list.addNode(1);
  list.addNode(2);
  list.addNode(4);

  list.print();
  cout << "sorting list\n";
  list.sortList();
  list.print();

  return 0;
}
