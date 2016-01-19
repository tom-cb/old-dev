#ifndef LIST_H
#define LIST_H

#include "Node.h"

//class Node;
//typedef Node* LinkNode;

class List {


public:

LinkNode head;

List(LinkNode iHead);

//void initNodes(int N);
//LinkNode newNode(int i);
//void freeNode(LinkNode x);

void traverse(LinkNode h, void (*visit)(LinkNode));
int count(LinkNode x);

void insertNext(LinkNode x, LinkNode t);
LinkNode deleteNext(LinkNode x);

void sortNSqrd(List* iList, List* oList); 

LinkNode getNext(LinkNode x);
int getData(LinkNode x);


};

#endif
