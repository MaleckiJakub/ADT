#include <iostream>
#include "LinkedList.h"

using namespace std;

/////////////
// @todo: Finish insert function
////////////
void LinkedList::Insert(int index, int value)
{
  if(index<0 || index>numberOfObjects){cout <<"Index out of bounds"; return;}

  if(numberOfObjects==0){
    Node<int> * newNode = new Node<int>(value);
    head->SetNextNode(newNode);
  }
}

void LinkedList::InsertHead(int value)
{
  Node<int> * newHead = new Node<int>(value);
  newHead->SetNextNode(head);
  head = newHead;


  if(numberOfObjects==0){tail=head;}
  numberOfObjects++;

}
////////////
//@ todo: add removing allocated memory !!! (previous head)
///////////
void LinkedList::RemoveHead()
{

  // if(numberOfObjects==1){
  //   delete head;
  //   head=nullptr;
  //   tail=nullptr;
  // }
  cout << "1" << endl;
  Node<int> * tempPointer = head;
    cout << "2" << endl;
  head = head->GetNextNode();
    cout << "3" << endl;
  delete tempPointer;
    cout << "4" << endl;

}

////////////
//@ todo: add removing allocated memory !!! (previous head)
///////////
void LinkedList::RemoveTail()
{
  Node<int> * temp = head;

  while(temp->GetNextNode()!=tail)
  {
    temp = temp->GetNextNode();
  }

  tail = temp;
  tail->SetNextNode(nullptr);
  numberOfObjects--;
}

void LinkedList::InsertTail(int value)
{
  Node<int> * newTail = new Node<int>(value);



  tail->SetNextNode(newTail);
  tail = tail->GetNextNode();
  tail->SetNextNode(nullptr);
  // or tail = newTail;

  if(numberOfObjects==0){head = tail;}

  numberOfObjects++;
}


int LinkedList::Get(int index)
{
  if(index<0 || index>numberOfObjects){cout <<"Index out of bounds"; return -1;}

  Node<int> * tempPointer = head;

  for(int i=0; i<index;i++){
    tempPointer = tempPointer->GetNextNode();
  }

  return tempPointer->ReturnValue();

}

void LinkedList::PrintList()
{
  Node<int> * wsk = head;
  unsigned long x;
  for(int i=0; i<numberOfObjects;i++)
  {
    cout << "node nr " << i << " = " << wsk->ReturnValue();
    cout << endl;
    wsk = wsk->GetNextNode();
    x = reinterpret_cast<unsigned long>(wsk);
    cout << "adres = " << x << endl;
  }

}
