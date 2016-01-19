#include <iostream>

#include "Queue.h"
#include "QueueList.h"
#include "QueueArray.h"

main()
{
  std::cout << "QueueTest!\n";

  Queue<int>* queue = new QueueList<int>();
  
  queue->init(10);
  queue->put(1);
  queue->put(2);
  queue->put(3);

  std::cout << "queue get: " <<  queue->get() << "\n";
  queue->put(4);

  std::cout << "queue get: " <<  queue->get() << "\n";
  std::cout << "queue get: " <<  queue->get() << "\n";
  std::cout << "queue get: " <<  queue->get() << "\n";

}
