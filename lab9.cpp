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
//class CircularLinkedList {
//private:
//	Node* head;
//public:
//	CircularLinkedList();
//	void insertAtTail(int);
//	int deleteAtTail();
//	void insertAtHead(int);
//	int deleteAtHead();
//	int totalElements();
//	void display();
//	~CircularLinkedList();
//
//};
//
//
//CircularLinkedList::CircularLinkedList()
//{
//	head = NULL;
//}
//
//void CircularLinkedList::insertAtHead(int data)
//{
//	Node* ptr = new Node(data);
//	if (head == NULL) {
//		head = ptr;
//		ptr->setNext(head);
//		return;
//	}
//
//
//
//	ptr->setNext(head);
//	
//	Node *temp = ptr;
//	do {
//		temp = temp->getNext();
//	} while (temp->getNext() != head);
//	head = ptr;
//	temp->setNext(head);
//}
//
//int CircularLinkedList::deleteAtTail()
//{
//	Node* temp = head;
//	if (temp->getNext() == head) {
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
//	while (temp->getNext()->getNext() != head)
//	{
//		temp = temp->getNext();
//	}
//	Node* nodeToBeDeleted = temp->getNext();
//	temp->setNext(head);
//	int result = nodeToBeDeleted->getData();
//	delete nodeToBeDeleted;
//	return result;
//}
//
//int CircularLinkedList::totalElements()
//{
//
//	if (head == NULL) {
//		return -1;
//	}
//
//
//	int size = 0;
//	Node* temp = head;
//	
//	do{
//		temp = temp->getNext();
//		size++;
//	} while (temp != head);
//
//
//	return size;
//}
//
//CircularLinkedList::~CircularLinkedList()
//{
//	delete head;
//}
//
//void CircularLinkedList::insertAtTail(int data)
//{
//	Node* ptr = new Node(data);
//	if (head == NULL) {
//		head = ptr;
//		ptr->setNext(head);
//		return;
//	}
//
//	// if there is some element present then we need to traverse the list to get at tail
//	Node* temp = head;
//	do
//	{
//		temp = temp->getNext();
//	} while (temp->getNext() != head);
//
//	temp->setNext(ptr);
//	ptr->setNext(head);
//
//}
//
//int CircularLinkedList::deleteAtHead()
//{
//	if (head == NULL) {
//		cout << "List is empty" << endl;
//		return -1;
//	}
//
//
//
//	Node* nodeToDelete = head;
//	
//	Node* temp = head;
//	
//	while (temp->getNext() != head){
//		temp = temp->getNext();
//    }
//	head = head->getNext();
//	temp->setNext(head);
//	int result = nodeToDelete->getData();
//	delete nodeToDelete;
//
//	return result;
//}
//
//void CircularLinkedList::display() {
//	Node* temp = head;
//	cout << "list : ";
//	
//	do{
//		temp->showData();
//		temp = temp->getNext();
//	}while (temp != head);
//	cout << endl;
//
//
//}
//
//
//
//int main() {
//	CircularLinkedList list;
//
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
//	cout << "Total Elements: " << list.totalElements() << endl;
//
//	list.display();
//	return 0;
//}
//
