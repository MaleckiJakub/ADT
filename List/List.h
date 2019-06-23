#ifndef LIST_H
#define LIST_H
#include <iostream>

using namespace std;

class List{

	int numberOfElements;
	int * listOfElements;

public:

	List(){
		numberOfElements=0;
		listOfElements = new int[numberOfElements];}

	void Insert(int index, int value);
	void Remove(int index);
	int  Get(int index);
	int Search(int value);
	int Size();
};

#endif
