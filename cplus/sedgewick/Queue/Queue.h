#ifndef QUEUE_H
#define QUEUE_H

template <class Item>
class Queue {

public:
 virtual void init(int)=0;
 virtual int empty()=0;
 virtual void put(Item)=0; 
 virtual Item get()=0;
};

#endif
