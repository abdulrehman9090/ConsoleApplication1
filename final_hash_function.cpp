#include<iostream>
using namespace std;

template <typename T>
class Node {
private:
	T data;
	Node<T>* next;

public:
	Node(T d);
	Node* getNext();
	void setNext(Node<T>* ptr);
	T getData();
	void setData(T d);
	void showData();
};

template <typename T>
Node<T>::Node(T d) {
	data = d;
	next = nullptr;
}

template <typename T>
Node<T>* Node<T>::getNext() {
	return next;
}

template <typename T>
void Node<T>::setNext(Node<T>* ptr) {
	next = ptr;
}

template <typename T>
T Node<T>::getData() {
	return data;
}

template <typename T>
void Node<T>::setData(T d) {
	data = d;
}

template <typename T>
void Node<T>::showData() {
	cout << data << endl;
}

template <typename T>
class LinkedList {
private:
	Node<T>* current;
	Node<T>* head;
	int size;
	int length;


public:
	LinkedList();
	void add(T d);
	void showList();
	void remove();
	void get();
	void forward();
	void insertAtStart(T d);
	void backward();
	void find(T d);
	int getLength();
	void start();
	void setHead(Node<T>* h) {
		this->head = h;
	}
	Node<T>* getHead() {
		return this->head;
	}
};

template <typename T>
LinkedList<T>::LinkedList() {
	size = 0;
	length = 0;
	current = nullptr;
	head = nullptr;
}

template <typename T>
int LinkedList<T>::getLength() {
	return size;
}

template <typename T>
void LinkedList<T>::start() {
	if (size == 0) {
		cout << "list is empty" << endl;
		return;
	}
	current = head;
}

template <typename T>
void LinkedList<T>::add(T d) {
	Node<T>* ptr = new Node<T>(d);

	if (head == nullptr) {
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

template <typename T>
void LinkedList<T>::showList() {
	if (size == 0) {
		cout << "List is empty" << endl;
		return;
	}

	Node<T>* temp = head;
	while (temp != nullptr) {
		temp->showData();
		temp = temp->getNext();
	}
	cout << endl;
}

template <typename T>
void LinkedList<T>::remove() {
	if (current == head) {
		Node<T>* temp = head;
		head = current->getNext();
		delete temp;
		current = head;
		size--;
		return;
	}

	Node<T>* ptr = head;
	Node<T>* temp = current;
	do {
		if (ptr->getNext() == current) {
			break;
		}
		ptr = ptr->getNext();
	} while (ptr != nullptr);

	ptr->setNext(current->getNext());
	current = ptr->getNext();
	delete temp;
	size--;
}

template <typename T>
void LinkedList<T>::get() {
	if (size == 0) {
		cout << "List is empty" << endl;
		return;
	}
	cout << current->getData() << endl;
}

template <typename T>
void LinkedList<T>::forward() {
	if (current->getNext() != nullptr)
		current = current->getNext();
}

template <typename T>
void LinkedList<T>::insertAtStart(T d) {
	if (size == 0) {
		cout << "At least one Node should be present" << endl;
		return;
	}
	Node<T>* ptr = new Node<T>(d);
	ptr->setNext(head);
	head = ptr;
	size++;
}

template <typename T>
void LinkedList<T>::backward() {
	if (size == 0) {
		cout << "List is empty Can't go backward" << endl;
		return;
	}
	if (current == head) {
		cout << "Already at start. Can't go backward" << endl;
		return;
	}

	Node<T>* temp = head;
	do {
		if (temp->getNext() == current) {
			break;
		}
		temp = temp->getNext();
	} while (temp != nullptr);
	current = temp;
}

template <typename T>
void LinkedList<T>::find(T d) {
	if (size == 0) {
		cout << "List is empty" << endl;
		return;
	}
	bool found = false;
	Node<T>* ptr = head;
	do {
		if (ptr->getData() == d) {
			cout << "Value found" << endl;
			found = true;
			break;
		}
		ptr = ptr->getNext();
	} while (ptr != nullptr);

	if (!found) {
		cout << "Value not found" << endl;
	}
}


int hashCode(const char* s, int size)
{
	int i, sum;
	sum = 0;
	for (i = 0; i < strlen(s); i++)
		sum = sum + s[i]; // ascii value
	return sum % size;
}





int main() {


	const int arraySize = 10;
	const char* fruits[arraySize] = { "apple", "banana", "cherry", "date", "elderberry", "fig", "grape", "honeydew", "kiwi", "lemon" };

	// Create an array for hash table
	const int hashTableSize = 10;
	int hashTable[hashTableSize] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 }; // Initialize all elements to -1

	// Insert fruits into the hash table using the hashCode function
	for (int i = 0; i < arraySize; i++)
	{
		int index = hashCode(fruits[i], hashTableSize);


		// Handle collisions by linear probing
		while (hashTable[index] != -1)
		{
			index = (index + 1) % hashTableSize;
		}

		hashTable[index] = i; // Store the index of the fruit in the hash table
	}

	// Print the hash table
	for (int i = 0; i < hashTableSize; i++)
	{
		std::cout << "Index " << i << ": ";
		if (hashTable[i] != -1)
		{
			std::cout << fruits[hashTable[i]];
		}
		std::cout << std::endl;
	}

	return 0;

	/*Node<string>* ptr[3];
	LinkedList<string> list1;
	LinkedList<string> list3;
	LinkedList<string> list2;

	list1.add("apple");
	list1.add("banana");
	list1.showList();


	list2.add("onion");
	list2.add("patato");
	list2.showList();

	list3.add("olives");
	list3.add("cake");
	list3.showList();



	ptr[0] = list1.getHead();
	ptr[2] = list2.getHead();
	ptr[1] = list3.getHead();


	cout << ptr[0]->getNext()->getData() << endl;*/


}