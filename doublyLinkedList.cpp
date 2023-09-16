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
//void LinkedList::add(int d)
//{
//	Node* ptr = new Node(d);
//	// its first entry in the list
//	if (head == NULL) {
//		head = ptr;
//		current = ptr;
//		current->setNext(NULL);
//		current->setPrevious(NULL);
//
//	}
//	else {
//		ptr->setNext(current->getNext());
//		ptr->setPrevious(current);
//		if (current->getNext() != NULL) {
//			// only execute this line when user is at end of list
//			current->getNext()->setPrevious(ptr);
//		}
//		
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
//	} while (temp != NULL);
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
//	if (current->getPrevious() != NULL) {
//		// current pointer is not at first position
//		current->getPrevious()->setNext(current->getNext());
//	}
//
//	if (current->getNext() != NULL && current->getPrevious() != NULL) {
//		// only execute this line when user is in middle of list or atleast one node before last
//		current->getNext()->setPrevious(current->getPrevious());
//	}
//	size--;
//	if (size > 0) {
//
//		if (size == 1) {
//			current = head;
//			return;
//		}
//
//		current = current->getNext();
//	}
//	delete temp;
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
//		if (current->getNext() == NULL) {
//			cout << "Already at end of list" << endl;
//			return;
//		}
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
//	Node* ptr = new Node(d);
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
//	if (current == head) {
//				cout << "Already at start. Can't go backward" << endl;
//				return;
//			}
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
//	} while (ptr != NULL);
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
//	list.add(40);
//	list.backward();
//	list.remove();
//	list.get();
//	/*list.remove();
//	list.get();*/
//	
//	list.showList();
//
//	list.add(202);
//	list.add(303);
//	list.showList();
//
//	list.backward();
//	list.remove();
//	list.showList();
//	/*list.backward();
//	list.get();*/
//	/*list.get();
//	list.backward();
//	list.remove();
//	list.showList();*/
//	////list.backward();
//	////
//
//	////list.add(11);
//	////list.showList();
//
//
//	///*list.insertAtStart(121);
//	//list.showList();*/
//	////list.forward();
//	////list.forward();
//	////list.add(19);
//	////list.showList();
//
//	////list.get();
//	////list.backward();
//	////list.get();
//	////list.forward();
//	////list.get();
//	////list.forward();
//	////list.get();
//	////list.forward();
//	////list.get();
//
//
//
//	return 0;
//}
