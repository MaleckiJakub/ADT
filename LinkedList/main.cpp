#include <iostream>
#include "LinkedList.h"

using namespace std;


int main()
{
  LinkedList * lista = new LinkedList();
  lista->InsertHead(5);
  lista->InsertHead(6);
  lista->InsertHead(7);
  lista->PrintList();

  lista->RemoveHead();
  // lista->InsertHead(5);
  // lista->InsertHead(7);
  // cout << lista->Get(0);
  // cout << lista->Get(1);
  // lista->RemoveHead();
  // cout << "kk" << endl;
  // cout << lista->Get(0);

  // lista->InsertHead(1);
  // lista->InsertHead(2);
  // lista->InsertHead(3);
  // lista->RemoveTail();
  //
  // cout << lista->Get(1);


  // lista->InsertHead(5);
  // cout << lista->Get(0);
  // cout << endl;
  // lista->InsertHead(6);
  // cout << lista->Get(0);
  // cout << endl;
  // cout << lista->Get(1);
  // lista->InsertTail(7);
  //   cout << endl;
  //     cout << endl;
  //       cout << endl;
  //       cout << lista->Get(0);
  //       cout << lista->Get(1);
  //       cout << lista->Get(2);
  //       lista->InsertTail(8);
  //       cout << endl;
  //         cout << endl;
  //           cout << endl;
  //           cout << lista->Get(0);
  //           cout << lista->Get(1);
  //           cout << lista->Get(2);
  //             cout << lista->Get(3);



}
