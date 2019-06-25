#include <iostream>
#include "node.h"

#ifndef LinkedList_h
#define LinkedList_h

using namespace std;

class LinkedList
{
  int numberOfObjects;
  Node<int> * head;
  Node<int> * tail;

public:

  LinkedList():numberOfObjects(0),head(nullptr),tail(nullptr){};

  void Insert(int index, int value);
  int Search(int value);
  void Remove(int index);
  int Get(int index);

  void InsertHead(int value);
  void RemoveHead();
  void InsertTail(int value);
  void RemoveTail();

  void PrintList();

};

#endif
