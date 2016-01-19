#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H

#include "Queue.h"

template <class Item>
class QueueArray : public Queue<Item> {

private:
Item *q;
int N, head, tail;

public:
 virtual void init(int maxN)
 {
   q = new Item[(maxN+1)];   
   N = maxN+1;
   head = N;
   tail = 0;
 }

 virtual int empty()
 {
  return head % N == tail;
 }

 virtual void put(Item item)
 {
   q[tail++] = item;
   tail = tail % N; 
 }


 virtual Item get()
 {
   head = head % N;
   return q[head++];
 }

};

#endif
