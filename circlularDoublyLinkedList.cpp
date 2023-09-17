//#include<iostream>
//using namespace std;
//class Node {
//private:
//	int data;
//	Node* next;
//	Node* previous;
//public:
//	Node(int d);
//	Node* getNext();
//	void setNext(Node* ptr);
//	void setPrevious(Node* ptr);
//	Node* getPrevious();
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
//	previous = NULL;
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
//
//Node* Node::getPrevious()
//{
//	return previous;
//}
//
//void Node::setPrevious(Node* ptr)
//{
//	previous = ptr;
//}
//
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
//
//
//LinkedList::LinkedList() {
//	size = 0;
//	length = 0;
//	current = NULL;
//	head = NULL;
//}
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
//void LinkedList::add(int d)
//{
//	Node* ptr = new Node(d);
//	// its first entry in the list
//	if (head == NULL) {
//		head = ptr;
//		current = ptr;
//		current->setNext(ptr);
//		current->setPrevious(ptr);
//
//	}
//	else {
//		ptr->setNext(current->getNext());
//		ptr->setPrevious(current);
//		current->getNext()->setPrevious(ptr);
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
//	do{
//		temp->showData();
//		temp = temp->getNext();
//	} while (temp != head);
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
//		
//		head = current->getNext();
//		
//	}
//
//	
//	Node* temp = current;
//	temp->getPrevious()->setNext(current->getNext());
//	temp->getNext()->setPrevious(current->getPrevious());
//	size--;
//	current = current->getNext();
//	delete temp;
//	
//	
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
//	if (head != NULL) {
//		current = current->getNext();
//		
//	}
//		
//}
//
//void LinkedList::insertAtStart(int d)
//{
//	if (size == 0) {
//		cout << "Atleast one Node should be present" << endl;
//		return;
//	}
//
//	Node* ptr = new Node(d);
//	Node* temp = head;
//	do {
//		if (temp->getNext() == head) {
//			break;
//		}
//		temp = temp->getNext();
//
//	} while (temp != head);
//	temp->setNext(ptr);
//	ptr->setPrevious(current);
//	ptr->setNext(head);
//	head->setPrevious(ptr);
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
//		
//	current = current->getPrevious();
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
//	} while (ptr != head);
//
//	if (found == false) {
//		cout << "Value not found" << endl;
//	}
//
//
//}
//
//int main() {
//	LinkedList list;
//	//list.showList();
//	list.add(10);
//	list.add(20);
//	list.add(30);
//	//list.backward();
//	//list.backward();
//
//	//list.remove();
//	//list.remove();
//
//	//list.forward();
//	/*list.backward();
//	list.add(202);
//	list.get();*/
//	list.showList();
//	list.find(20);
////	list.remove();
////	list.get();
////	/*list.remove();
////	list.get();*/
////	
////	list.showList();
////
////	list.add(202);
////	list.add(303);
////	list.showList();
////
////	list.backward();
////	list.remove();
////	list.showList();
////	/*list.backward();
////	list.get();*/
////	/*list.get();
////	list.backward();
////	list.remove();
////	list.showList();*/
////	////list.backward();
////	////
////
////	////list.add(11);
////	////list.showList();
////
////
////	///*list.insertAtStart(121);
//	/*list.showList();
//	list.forward();
//	list.forward();
//	list.add(19);
//	list.showList();
//
//	list.get();
//	list.backward();
//	list.get();
//	list.forward();
//	list.get();
//	list.forward();
//	list.get();
//	list.forward();
//	list.get();*/
////
//
//
//	return 0;
//}
