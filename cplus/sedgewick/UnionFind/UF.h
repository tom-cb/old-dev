#ifndef UF_H
#define UF_H

template <class Item>
class UF {

public:
  virtual void UFinit(int)=0;
  virtual int UFind(int, int)=0;
  virtual void UFUnion(Item, Item)=0;

};

#endif
