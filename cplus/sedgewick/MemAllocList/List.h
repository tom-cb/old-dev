#ifndef LIST_H
#define LIST_H

#include "Node.h"

//class Node;
//typedef Node* LinkNode;

class List {

LinkNode freeList;

public:

void initNodes(int N);
LinkNode newNode(int i);
void freeNode(LinkNode x);
void insertNext(LinkNode x, LinkNode t);
LinkNode deleteNext(LinkNode x);
LinkNode getNext(LinkNode x);
int getData(LinkNode x);


};

#endif
