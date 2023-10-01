//#include<iostream>
//using namespace std;
//class Node {
//private:
//	int data;
//	Node* next;
//public:
//	Node(int d);
//	Node* getNext();
//	void setNext(Node* ptr);
//	int getData();
//	void setData(int d);
//	void showData();
//};
//
//
//Node::Node(int d)
//{
//	data = d;
//	next = NULL;
//}
//
//Node* Node::getNext()
//{
//	return next;
//}
//
//void Node::setNext(Node* ptr)
//{
//	next = ptr;
//}
//
//int Node::getData()
//{
//	return data;
//}
//
//void Node::setData(int d)
//{
//	data = d;
//}
//
//void Node::showData()
//{
//	cout << data << endl;
//}
//
//
//
//class LinkedList {
//private:
//	Node* current;
//	Node* head;
//	int size;
//	int length;
//public:
//	LinkedList();
//	void add(int d);
//	void showList();
//	void remove();
//	void get();
//	void forward();
//	void insertAtStart(int d);
//	void backward();
//	void find(int);
//	int getLength();
//	void start();
//
//};
//
//LinkedList::LinkedList() {
//	size = 0;
//	length = 0;
//	current = NULL;
//	head = NULL;
//}
//
//
//int LinkedList::getLength() {
//	return size;
//}
//
//
//void LinkedList::start() {
//	if (size == 0) {
//		cout << "list is empty" << endl;
//		return;
//	}
//	current = head;
//}
//
//
//
//
//void LinkedList::add(int d)
//{
//	Node* ptr = new Node(d);
//	// its first entry in the list
//	if (head == NULL) {
//		head = ptr;
//		current = ptr;
//		
//	}
//	else {
//		ptr->setNext(current->getNext());
//		current->setNext(ptr);
//		current = ptr;
//	}
//
//	size++;
//}
//
//void LinkedList::showList()
//{
//	if (size == 0) {
//		cout << "List is empty" << endl;
//		return;
//	}
//
//	Node* temp = head;
//	while (temp != NULL)
//	{
//		temp->showData();
//		temp = temp->getNext();
//	}
//	cout << endl;
//
//
//}
//
//void LinkedList::remove()
//{
//
//
//	// first element to delete
//	if (current == head) {
//		Node* temp = head;
//		head = current->getNext();
//		delete temp;
//		current = head;
//      size--;
//		return;
//	}
//
//
//	Node* ptr = head;
//	Node* temp = current;
//	do {
//		if (ptr->getNext() == current) {
//			break;
//		}
//		ptr = ptr->getNext();
//
//	} while (ptr != NULL);
//
//	ptr->setNext(current->getNext());
//	current = ptr->getNext();
//	delete temp;
//	
//  size--;
//
//}
//
//void LinkedList::get()
//{
// if (size == 0) 
//{
//	cout << "List is empty" << endl;
//	return;
//	}
//	cout << current->getData() << endl;
//}
//
//void LinkedList::forward()
//{
//	if (current->getNext() != NULL)
//		current = current->getNext();
//}
//
//void LinkedList::insertAtStart(int d)
//{
//	if (size == 0) {
//		cout << "Atleast one Node should be present" << endl;
//		return;
//	}
//	Node* ptr = new Node(d);
//	ptr->setNext(head);
//	head = ptr;
//  size++;
//}
//
//void LinkedList::backward()
//{
//	if (size == 0) {
//		cout << "List is empty Can't go backward" << endl;
//		return;
//	}
//	if (current == head) {
//		cout << "Already at start. Can't go backward" << endl;
//		return;
//	}
//
//	Node* temp = head;
//	do {
//		// we are trying to break just one node before the current Node
//		if (temp->getNext() == current) {
//			break;
//		}
//		temp = temp->getNext();
//
//	} while (temp != NULL);
//	current = temp;
//}
//
//void LinkedList::find(int d) {
//	if (size == 0) {
//		cout << "List is empty" << endl;
//		return;
//	}
//	bool found = false;
//	Node* ptr = head;
//	do
//	{
//		if (ptr->getData() == d) {
//			cout << "Value found" << endl;
//			found = true;
//			break;
//		}
//
//		ptr = ptr->getNext();
//		
//
//	} while (ptr != NULL);
//
//	if (found == false) {
//		cout << "Value not found" << endl;
//	}
//
//
//}
//
//
//
//
//
//int main() {
//	LinkedList list;
//	//list.showList();
//	list.add(10);
//	list.add(20);
//	list.add(30);
//	list.showList();
//	list.start();
//	list.get();
//	list.find(30);
//
//	list.backward();
//	list.backward();
//	list.get();
//	list.remove();
//	list.showList();
//	list.backward();
//	
//
//	
//
//
//	
//	return 0;
//}
