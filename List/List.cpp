#include <iostream>
#include "List.h"

////////////////////////////////////////////////////

void List::Insert(int index, int value)
{
	if(index<0 || index>numberOfElements){ cout << "Out of index";return;}
	if(value<0){cout << "Only positive numbers can be used."; return;}
	int * tempPointer = listOfElements; // copy the pointer
	numberOfElements+=1;
	listOfElements = new int[numberOfElements]; // resize the array

	for(int i=0,j=0; i<numberOfElements;)
	{
		if(i==index){listOfElements[index]=value;i++;}
		else{listOfElements[i++]=tempPointer[j++];//i++;//j++;
		}
	}
}

////////////////////////////////////////////////////

int List::Get(int index){
	if(index<0 || index>numberOfElements){return -1;}
	return listOfElements[index];}

///////////////////////////////////////////////////

void List::Remove(int index){
	if(index<0 || index>numberOfElements){cout <<"There is no such an index."; return;}
	int * tempPointer = listOfElements;
	numberOfElements--;
	listOfElements = new int[numberOfElements];

	for(int i=0,j=0; i<numberOfElements;)
	{
		if(j==index){j++;}
		else{listOfElements[i++]=tempPointer[j++];}
	}
}

////////////////////////////////////////////////

int List::Search(int value){
	for(int i=0;i<numberOfElements;i++){
		if(listOfElements[i]==value){return i;}}
	return -1;
}
