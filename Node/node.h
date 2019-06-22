#include <iostream>

using namespace std;

template< typename T>
class Node{

	T value_;
	Node * nextNode;

public:

	Node(T value) : value_(value),nextNode(nullptr){cout << "Created node with value="<<value_<<endl;};
	void ChangeValue(T value){ value_ = value; };
	void SetNextNode(Node<T> & node){nextNode = &node;};
	int ReturnValue(){ return value_;}

	friend void PrintValuesOfConnectedNodes(Node<T> * first){
		while(first->nextNode!=nullptr){
			cout << first->value_ << " - > ";
			first = first->nextNode;}
		cout << first->value_ << "->";
		cout << "nullptr" << endl;
	}

};
