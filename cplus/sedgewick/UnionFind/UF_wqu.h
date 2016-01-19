#ifndef UF_WQU_H
#define UF_WQU_H

#include "UF.h"

template <class Item>
class UF_wqu : public UF<Item> {

private:
int* id;
int* sz;

private:
  int find(int x)
  {
    int i = x;
    while (i != id[i])
    {
      i = id[i];
    }

    return i;
  }

public:
  virtual void UFinit(int N)
  {
    int i;
    id = new int[N];
    sz = new int[N];

    for (i=0; i < N; i++)
    {
      id[i] = i;
      sz[i] = 1;
    }
  }

  virtual int UFind(int p, int q)
  {
    return (find(p) == find(q)); 
  }

  virtual void UFUnion(int p, int q)
  {
    int i = find(p);
    int j = find(q);
    
    if (i==j) return;

    if (sz[i] < sz[j])
    {
      id[i] = j;
      sz[j] += sz[i];
    }
    else
    {
      id[j] = i;
      sz[i] += sz[j];
    }
  }

};

#endif
