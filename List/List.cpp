#include <iostream>
#include "List.h"

////////////////////////////////////////////////////

template <typename T>
void List<T>::Insert(int index, T value)
{
	if(index<0 || index>numberOfElements){ cout << "Out of index";return;}
	T * tempPointer = listOfElements; // copy the pointer
	numberOfElements+=1;
	listOfElements = new T[numberOfElements]; // resize the array

	for(int i=0,j=0; i<numberOfElements;)
	{
		if(i==index){listOfElements[index]=value;i++;}
		else{listOfElements[i++]=tempPointer[j++];//i++;//j++;
		}
	}
	delete []tempPointer;
}

////////////////////////////////////////////////////
template <typename T>
T List<T>::Get(int index){
	if(index<0 || index>numberOfElements){return -1;}
	return listOfElements[index];}

///////////////////////////////////////////////////
template <typename T>
void List<T>::Remove(int index){
	if(index<0 || index>numberOfElements){cout <<"There is no such an index."; return;}
	T * tempPointer = listOfElements;
	numberOfElements--;
	listOfElements = new T[numberOfElements];

	for(int i=0,j=0; i<numberOfElements;)
	{
		if(j==index){j++;}
		else{listOfElements[i++]=tempPointer[j++];}
	}
	delete []tempPointer;
}

////////////////////////////////////////////////
template <typename T>
int List<T>::Search(T value){
	for(int i=0;i<numberOfElements;i++){
		if(listOfElements[i]==value){return i;}}
	return -1;
}

template class List<int>;
template class List<float>;
