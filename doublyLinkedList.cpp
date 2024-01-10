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
//		if (current->getNext() == NULL) {
//			current = current->getPrevious();
//		}
//		else {
//			current = current->getNext();
//		}
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
//
//	list.add(10);
//	list.add(20);
//	list.add(30);
//	list.add(40);
//	list.showList();
//	list.backward();
//	list.remove();
//	list.get();
//	list.remove();
//	list.get();
//	list.showList();
//	
//
//
//	return 0;
//}
//
//
////#include <iostream>
////#include <stdexcept>
////
////template <typename T>
////class Queue {
////private:
////    static const int MAX_SIZE = 100;
////    T data[MAX_SIZE];
////    int front;
////    int rear;
////
////public:
////    Queue();
////    void enqueue(T element);
////    T dequeue();
////    T peek();
////    bool isEmpty();
////    bool isFull();
////};
////
////template <typename T>
////Queue<T>::Queue() : front(-1), rear(-1) {}
////
////template <typename T>
////void Queue<T>::enqueue(T element) {
////    if (isFull()) {
////        throw std::overflow_error("Queue is full");
////    }
////
////    if (isEmpty()) {
////        front = rear = 0;
////    }
////    else {
////        rear = (rear + 1) % MAX_SIZE;
////    }
////
////    data[rear] = element;
////}
////
////template <typename T>
////T Queue<T>::dequeue() {
////    if (isEmpty()) {
////        throw std::underflow_error("Queue is empty");
////    }
////
////    T element = data[front];
////
////    if (front == rear) {
////        front = rear = -1; // Reset the queue when the last element is dequeued
////    }
////    else {
////        front = (front + 1) % MAX_SIZE;
////    }
////
////    return element;
////}
////
////template <typename T>
////T Queue<T>::peek() {
////    if (isEmpty()) {
////        throw std::underflow_error("Queue is empty");
////    }
////
////    return data[front];
////}
////
////template <typename T>
////bool Queue<T>::isEmpty() {
////    return front == -1 && rear == -1;
////}
////
////template <typename T>
////bool Queue<T>::isFull() {
////    return (rear + 1) % MAX_SIZE == front;
////}
////
////int main() {
////    try {
////        Queue<int> intQueue;
////        intQueue.enqueue(10);
////        intQueue.enqueue(20);
////        intQueue.enqueue(30);
////
////        std::cout << "Front element: " << intQueue.peek() << std::endl;
////
////        while (!intQueue.isEmpty()) {
////            std::cout << "Dequeued: " << intQueue.dequeue() << std::endl;
////        }
////
////        Queue<std::string> stringQueue;
////        stringQueue.enqueue("Hello");
////        stringQueue.enqueue("World");
////
////        std::cout << "Front element: " << stringQueue.peek() << std::endl;
////
////        while (!stringQueue.isEmpty()) {
////            std::cout << "Dequeued: " << stringQueue.dequeue() << std::endl;
////        }
////    }
////    catch (const std::exception& e) {
////        std::cerr << "Exception: " << e.what() << std::endl;
////    }
////
////    return 0;
////}
