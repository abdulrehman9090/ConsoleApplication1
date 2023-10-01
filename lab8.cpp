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
//	cout << data << "  ";
//}
//
//
//
//class LinkedList {
//private:
//	Node* head;
//public:
//	LinkedList();
//	void insertAtTail(int);
//	int deleteAtTail();
//	void insertAtHead(int);
//	int deleteAtHead();
//	int totalElements();
//	void display();
//	~LinkedList();
//
//};
//
//
//LinkedList::LinkedList()
//{
//	head = NULL;
//}
//
//void LinkedList::insertAtHead(int data)
//{
//	Node* ptr = new Node(data);
//	if (head == NULL) {
//		head = ptr;
//		return;
//	}
//
//	ptr->setNext(head);
//	head = ptr;
//}
//
//int LinkedList::deleteAtTail()
//{
//	Node* temp = head;
//	if (temp->getNext() == NULL) {
//		// only one element is present in list
//		int result = temp->getData();
//		delete temp; 
//		head = NULL;
//		return result;
//	}
//
//	// this block will execute when atleast
//	//  two elements are present in list
//
//	while (temp->getNext()->getNext() != NULL)
//	{
//		temp = temp->getNext();
//	}
//	Node *nodeToBeDeleted = temp->getNext();
//	temp->setNext(NULL);
//	int result = nodeToBeDeleted->getData();
//	delete nodeToBeDeleted;
//	return result;
//}
//
//int LinkedList::totalElements()
//{
//	int size = 0;
//	Node* temp = head;
//	while (temp != NULL)
//	{
//		temp = temp->getNext();
//		size++;
//	}
//
//
//	return size;
//}
//
//LinkedList::~LinkedList()
//{
//	delete head;
//}
//
//void LinkedList::insertAtTail(int data )
//{
//	Node* ptr = new Node(data);
//	if (head == NULL) {
//		head = ptr;
//		return;
//	}
//
//	// if there is some element present then we need to traverse the list to get at tail
//	Node* temp = head;
//	while (temp->getNext() != NULL)
//	{
//		temp = temp->getNext();
//	}
//
//	temp->setNext(ptr);
//
//
//}
//
//int LinkedList::deleteAtHead()
//{
//	if (head == NULL) {
//		cout << "List is empty" << endl;
//		return -1;
//	}
//
//	Node* temp = head;
//	head = head->getNext();
//	int result = temp->getData();
//	delete temp;
//
//	return result;
//}
//
//void LinkedList::display() {
//	Node* temp = head;
//	cout << "list : ";
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
//
//
//int main() {
//
//
//	LinkedList list;
//	list.insertAtTail(40);
//	list.insertAtTail(50);
//	list.insertAtTail(60);
//	list.insertAtHead(10);
//	list.insertAtHead(20);
//	list.insertAtHead(30);
//	cout << "Total Elements: " << list.totalElements() << endl;
//
//	list.display();
//	cout << list.deleteAtTail() << endl;
//	cout << list.deleteAtHead() << endl;
//	
//	cout << "Total Elements: " << list.totalElements() << endl;
//
//	list.display();
//
//	return 0;
//}
//
