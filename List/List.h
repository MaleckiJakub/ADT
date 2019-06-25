#ifndef LIST_H
#define LIST_H
#include <iostream>

using namespace std;

template <typename T>
class List{

	int numberOfElements;
	T * listOfElements;

public:

	List(){
		numberOfElements=0;
		listOfElements = new T[numberOfElements];}

	~List(){delete []listOfElements;}

	void Insert(int index, T value);
	void Remove(int index);
	T  Get(int index);
	int Search(T value);
	int Size();
};

#endif
