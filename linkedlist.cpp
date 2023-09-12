#include<iostream>
using namespace std;
class Node {
private:
	int data;
	Node* next;
public:
	Node(int d);
	Node* getNext();
	void setNext(Node* ptr);
	int getData();
	void setData(int d);
	void showData();
};


Node::Node(int d)
{
	data = d;
	next = NULL;
}

Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* ptr)
{
	next = ptr;
}

int Node::getData()
{
	return data;
}

void Node::setData(int d)
{
	data = d;
}

void Node::showData()
{
	cout << data << endl;
}



class LinkedList {
private:
	Node* current;
	Node* head;
	int size;
	int length;
public:
	LinkedList();
	void add(int d);
	void showList();
	void remove();
	void get();
	void forward();
	void insertAtStart(int d);
	void backward();

};



LinkedList::LinkedList() {
	size = 0;
	length = 0;
	current = NULL;
	head = NULL;
}

void LinkedList::add(int d)
{
	Node* ptr = new Node(d);
	// its first entry in the list
	if (head == NULL) {
		head = ptr;
		current = ptr;
		
	}
	else {
		ptr->setNext(current->getNext());
		current->setNext(ptr);
		current = ptr;
	}

	size++;
}

void LinkedList::showList()
{
	if (size == 0) {
		cout << "List is empty" << endl;
		return;
	}

	Node* temp = head;
	while (temp != NULL)
	{
		temp->showData();
		temp = temp->getNext();
	}
	cout << endl;


}

void LinkedList::remove()
{
}

void LinkedList::get()
{
	cout << current->getData() << endl;
}

void LinkedList::forward()
{
	if (current->getNext() != NULL)
		current = current->getNext();
}

void LinkedList::insertAtStart(int d)
{
	if (size == 0) {
		cout << "Atleast one Node should be present" << endl;
		return;
	}
	Node* ptr = new Node(d);
	ptr->setNext(head);
	head = ptr;
}

void LinkedList::backward()
{
	if (size == 0) {
		cout << "List is empty Can't go backward" << endl;
		return;
	}
	if (current == head) {
		cout << "Already at start. Can't go backward" << endl;
		return;
	}

	Node* temp = head;
	do {
		// we are trying to break just one node before the current Node
		if (temp->getNext() == current) {
			break;
		}
		temp = temp->getNext();

	} while (temp != NULL);
	current = temp;
}





int main() {
	LinkedList list;
	//list.showList();
	list.add(10);
	//list.add(20);
	//list.add(30);
	//list.showList();
	//
	//list.backward();
	//list.backward();
	//

	//list.add(11);
	//list.showList();


	list.insertAtStart(121);
	list.showList();
	//list.forward();
	//list.forward();
	//list.add(19);
	//list.showList();

	//list.get();
	//list.backward();
	//list.get();
	//list.forward();
	//list.get();
	//list.forward();
	//list.get();
	//list.forward();
	//list.get();


	
	return 0;
}
