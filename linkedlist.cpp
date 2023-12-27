//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Node {
//private:
//	T data;
//	Node* next;
//
//public:
//	Node(T d);
//	Node* getNext();
//	void setNext(Node* ptr);
//	T getData();
//	void setData(T d);
//	void showData();
//};
//
//template <typename T>
//Node<T>::Node(T d) {
//	data = d;
//	next = nullptr;
//}
//
//template <typename T>
//Node<T>* Node<T>::getNext() {
//	return next;
//}
//
//template <typename T>
//void Node<T>::setNext(Node* ptr) {
//	next = ptr;
//}
//
//template <typename T>
//T Node<T>::getData() {
//	return data;
//}
//
//template <typename T>
//void Node<T>::setData(T d) {
//	data = d;
//}
//
//template <typename T>
//void Node<T>::showData() {
//	cout << data << endl;
//}
//
//template <typename T>
//class LinkedList {
//private:
//	Node<T>* current;
//	Node<T>* head;
//	int size;
//	int length;
//
//public:
//	LinkedList();
//	void add(T d);
//	void showList();
//	void remove();
//	void get();
//	void forward();
//	void insertAtStart(T d);
//	void backward();
//	void find(T d);
//	int getLength();
//	void start();
//};
//
//template <typename T>
//LinkedList<T>::LinkedList() {
//	size = 0;
//	length = 0;
//	current = nullptr;
//	head = nullptr;
//}
//
//template <typename T>
//int LinkedList<T>::getLength() {
//	return size;
//}
//
//template <typename T>
//void LinkedList<T>::start() {
//	if (size == 0) {
//		cout << "list is empty" << endl;
//		return;
//	}
//	current = head;
//}
//
//template <typename T>
//void LinkedList<T>::add(T d) {
//	Node<T>* ptr = new Node<T>(d);
//
//	if (head == nullptr) {
//		head = ptr;
//		current = ptr;
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
//template <typename T>
//void LinkedList<T>::showList() {
//	if (size == 0) {
//		cout << "List is empty" << endl;
//		return;
//	}
//
//	Node<T>* temp = head;
//	while (temp != nullptr) {
//		temp->showData();
//		temp = temp->getNext();
//	}
//	cout << endl;
//}
//
//template <typename T>
//void LinkedList<T>::remove() {
//	if (current == head) {
//		Node<T>* temp = head;
//		head = current->getNext();
//		delete temp;
//		current = head;
//		size--;
//		return;
//	}
//
//	Node<T>* ptr = head;
//	Node<T>* temp = current;
//	do {
//		if (ptr->getNext() == current) {
//			break;
//		}
//		ptr = ptr->getNext();
//	} while (ptr != nullptr);
//
//	ptr->setNext(current->getNext());
//	current = ptr->getNext();
//	delete temp;
//	size--;
//}
//
//template <typename T>
//void LinkedList<T>::get() {
//	if (size == 0) {
//		cout << "List is empty" << endl;
//		return;
//	}
//	cout << current->getData() << endl;
//}
//
//template <typename T>
//void LinkedList<T>::forward() {
//	if (current->getNext() != nullptr)
//		current = current->getNext();
//}
//
//template <typename T>
//void LinkedList<T>::insertAtStart(T d) {
//	if (size == 0) {
//		cout << "At least one Node should be present" << endl;
//		return;
//	}
//	Node<T>* ptr = new Node<T>(d);
//	ptr->setNext(head);
//	head = ptr;
//	size++;
//}
//
//template <typename T>
//void LinkedList<T>::backward() {
//	if (size == 0) {
//		cout << "List is empty Can't go backward" << endl;
//		return;
//	}
//	if (current == head) {
//		cout << "Already at start. Can't go backward" << endl;
//		return;
//	}
//
//	Node<T>* temp = head;
//	do {
//		if (temp->getNext() == current) {
//			break;
//		}
//		temp = temp->getNext();
//	} while (temp != nullptr);
//	current = temp;
//}
//
//template <typename T>
//void LinkedList<T>::find(T d) {
//	if (size == 0) {
//		cout << "List is empty" << endl;
//		return;
//	}
//	bool found = false;
//	Node<T>* ptr = head;
//	do {
//		if (ptr->getData() == d) {
//			cout << "Value found" << endl;
//			found = true;
//			break;
//		}
//		ptr = ptr->getNext();
//	} while (ptr != nullptr);
//
//	if (!found) {
//		cout << "Value not found" << endl;
//	}
//}
//
//int main() {
//	LinkedList<int> intList;
//	intList.add(10);
//	intList.add(20);
//	intList.add(30);
//	intList.showList();
//	intList.start();
//	intList.get();
//	intList.find(30);
//
//	intList.backward();
//	intList.backward();
//	intList.get();
//	intList.remove();
//	intList.showList();
//	intList.backward();
//
//	LinkedList<string> stringList;
//	stringList.add("Hello");
//	stringList.add("World");
//	stringList.showList();
//
//	return 0;
//}
//
