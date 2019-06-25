#include <iostream>

using namespace std;

template< typename T>
class Node{

	T value_;
	Node * nextNode;

public:

	Node(T value) : value_(value),nextNode(nullptr){cout << "Created node with value = "<<value_<<endl;};
	Node() = delete;
	~Node(){delete []nextNode;}
	void ChangeValue(T value){ value_ = value; };
	void SetNextNode(Node<T> & node){nextNode = &node;};
	int ReturnValue(){ return value_;}

	template <typename U>
	friend void PrintValuesOfConnectedNodes(Node<U> * first);
	template <typename U>
	friend int CountConnectedNodes(Node<U> * first);

};

template<typename T>
void PrintValuesOfConnectedNodes(Node<T> * first){
	while(first->nextNode!=nullptr){
		cout << first->value_ << " - > ";
		first = first->nextNode;}
	cout << first->value_ << "->";
	cout << "nullptr" << endl;
}

template<typename T>
int CountConnectedNodes(Node<T> *first)
{
	int counter=0;
	while(first->nextNode!=nullptr){
		counter++;
		first = first->nextNode;}
	return counter;
}
