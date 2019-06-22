#include <iostream>
#include "List.h"

void List::Insert(int index, int value)
{
	if(index<0 || index>numberOfElements){return;}
	int * tempPointer = listOfElements; // copy the pointer
	numberOfElements+=1;
	listOfElements = new int[numberOfElements]; // resize the array

	for(int i=0,j=0; i<=numberOfElements;)
	{
		if(i==index){listOfElements[index]=value;i++;}
		else
		{
			listOfElements[i]=tempPointer[j];
			i++;
			j++;
		}

	}
}

