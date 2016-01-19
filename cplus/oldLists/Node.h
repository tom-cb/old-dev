#ifndef NODE
#define NODE

#include <iostream>

typedef struct node* nodeLink;
struct node { int data; nodeLink next; };

nodeLink reverse(nodeLink x)
{
  nodeLink t, y = x, r = NULL;

  while (y != NULL)
  { 
    t = y->next;
    y->next = r;
    r = y;
    y = t;
  }

  return r;
}

void print(nodeLink x)
{
  nodeLink t;
  for (t = x; t!= NULL; t=t->next)
  {
    std::cout << "Node data: " << t->data << "\n";
  }

}
#endif
