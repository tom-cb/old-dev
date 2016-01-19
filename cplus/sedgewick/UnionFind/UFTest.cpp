#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "UF.h"
#include "UF_wqu.h"

main(int argc, char* argv[])
{

  std::cout << "UnionFind Test!\n";

  int p, q, N = atoi(argv[1]);

  UF<int>* uf = new UF_wqu<int>();
 
  uf->UFinit(N);

  while (scanf("%d %d", &p, &q) == 2)
  {
    if (!uf->UFind(p, q))
    {
      uf->UFUnion(p, q);
      printf(" %d %d\n", p, q);
    }

  }
 
}
