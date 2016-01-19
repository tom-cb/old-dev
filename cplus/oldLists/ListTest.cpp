#include <stdlib.h>
#include "Node.h"
#include <iostream>

main (int argc, char *argv[])
{
  struct node heada;

  nodeLink t;
  nodeLink a = &heada;
  t = a;

  for (int i=0; i < 10; i++)
  {
    t->next = (nodeLink) malloc(sizeof *t);
    t = t->next;
    t->next = NULL; 
    t->data = i;
  } 

  print(heada.next);

  std::cout << "reversing\n";
  nodeLink reversed = reverse(heada.next);
  print(reversed);

}

