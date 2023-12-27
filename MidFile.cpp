// =======================================
       // LIST USING ARRAY
// =======================================

//#include<iostream>
//using namespace std;
//class List {
//private:
//    int *data;
//    int size;
//    int length;
//    int current;
//public:
//    List(int l);
//    void add(int);
//    void remove();
//    void showList();
//    int get();
//    void start();
//    void tail();
//    void next();
//    void back();
//};
//
//List::List(int l)
//{
//    if (l > 0) {
//        size = 0;
//        length = l;
//        current = -1;
//        data = new int[l];
//    }
//    else {
//        size = 0;
//        length = 100; // default size
//        current = -1;
//        data = new int[l];
//    }
//}
//
//void List::add(int d)
//{
//    if (size == length) {
//        cout << "list is full" << endl;
//        return;
//    }
//
//    if (current == size - 1) {
//        // current is not in middle of element
//        data[++current] = d;
//        size++;
//        return;
//    }
//
//   
//    int loopCount = size - current;
//    this->tail(); // move current to last Pointer
//    current++;
//    for (int i = 0; i < loopCount; i++)
//    {
//        data[current] = data[current-1];
//        current--;
//    }
//    data[current] = d;
//    size++;
//}
//
//void List::showList() {
//    if (size == 0) {
//        cout << "List is empty" << endl;
//        return;
//    }
//
//    for (int i = 0; i < size; i++)
//    {
//        cout << data[i] << endl;
//    }
//}
//
//void List::remove()
//{
//    if (size == 0) {
//        cout << "list is empty" << endl;
//        return;
//    }
//
//    if (current == size - 1) {
//        // it is last element
//        data[current] == -1;
//        size--;
//        current--;
//        return;
//    }
//
//    int loopCount;
//    loopCount = size - (current + 1);
//    for (int i = 0; i < loopCount; i++)
//    {
//        current++;
//        data[current-1] = data[current];
//
//    }
//    size--;
//
//
//
//}
//
//int List::get()
//{
//    if (size == 0) {
//        return -1;
//    }
//    return data[current];
//}
//
//void List::start()
//{
//    current = 0;
//}
//
//void List::tail()
//{
//    current = size-1;
//}
//
//void List::next()
//{
//    if (current < size) {
//        current++;
//    }
//}
//
//void List::back()
//{
//    if (current > 0) {
//        current--;
//    }
//}
//
//
//int main() {
//    List d(10);
//    d.add(89);
//    d.add(200);
//    d.add(202);
//    d.add(304);
//    d.showList();
//    d.back();
//    d.back();
//    d.remove();
//    d.showList();
//    return 0;
//}




// =======================================
       // SINGLY LINKED LIST
// =======================================

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
//class SinglyLinkedList {
//private:
//	Node* head;
//	Node* current;
//	int size;
//public:
//	SinglyLinkedList();
//	void add(int d);
//	void remove();
//	void get();
//	void find(int d);
//	void back();
//	void forward();
//	void showList();
//};
//
//SinglyLinkedList::SinglyLinkedList()
//{
//	head = NULL;
//	current = NULL;
//	size = 0;
//}
//
//void SinglyLinkedList::get() {
//    current->showData();
//}
//
//void SinglyLinkedList::add(int d)
//{
//	Node* ptr = new Node(d);
//	if (head == NULL) {
//		// list is empty
//		head = ptr;
//		current = ptr;
//		size++;
//		return;
//	}
//
//	ptr->setNext(current->getNext());
//	current->setNext(ptr);
//	current = ptr;
//	size++;
//}
//
//void SinglyLinkedList::showList()
//{
//	Node* temp = head;
//	while (temp != NULL)
//	{
//		temp->showData();
//		temp = temp->getNext();
//	}
//}
//
//void SinglyLinkedList::remove()
//{
//	Node *temp = head;
//	Node* temp1 = current;
//	if (current == head) {
//		head = head->getNext();
//		delete temp;
//		size--;
//		return;
//	}
//
//	while (temp != NULL)
//	{
//		if (temp->getNext() == current) {
//			break;
//		}
//		temp = temp->getNext();
//	}
//	temp->setNext(current->getNext());
//	current = current->getNext();
//	delete temp1;
//	size--;
//
//
//
//}
//
//void SinglyLinkedList::find(int d)
//{
//	Node* temp = head;
//	while (temp != NULL)
//	{
//		if (temp->getData() == d) {
//			cout << "Data Found" << endl;
//			break;
//		}
//		temp = temp->getNext();
//	}
//	
//}
//
//void SinglyLinkedList::back()
//{
//	if (current != head) {
//		Node* temp = head;
//		while (temp != NULL)
//		{
//			if (temp->getNext() == current) {
//				break;
//			}
//			temp = temp->getNext();
//		}
//		current = temp;
//	}
//}
//
//void SinglyLinkedList::forward()
//{
//	if(current->getNext() != NULL)
//	current = current->getNext();
//}
//
//
//
//
//int main() {
//	SinglyLinkedList list;
//	list.add(10);
//	list.add(30);
//	list.add(20);
//	list.add(90);
//	list.showList();
//	list.back();
//	list.back();
//	list.back();
//	list.remove();
//	list.showList();
//	return 0;
//}



// =======================================
       // SINGLY CIRCULAR LINKED LIST
// =======================================

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
//class SinglyCircularLinkedList {
//private:
//	Node* head;
//	Node* current;
//	int size;
//public:
//	SinglyCircularLinkedList();
//	void add(int d);
//	void remove();
//	void get();
//	void find(int d);
//	void back();
//	void forward();
//	void showList();
//};
//
//SinglyCircularLinkedList::SinglyCircularLinkedList()
//{
//	head = NULL;
//	current = NULL;
//	size = 0;
//}
//
//void SinglyCircularLinkedList::get() {
//    current->showData();
//}
//
//void SinglyCircularLinkedList::add(int d)
//{
//	Node* ptr = new Node(d);
//	if (head == NULL) {
//		// list is empty
//		head = ptr;
//		current = ptr;
//		ptr->setNext(head);
//		size++;
//		return;
//	}
//
//	ptr->setNext(current->getNext());
//	current->setNext(ptr);
//	current = ptr;
//	size++;
//}
//
//void SinglyCircularLinkedList::showList()
//{
//	Node* temp = head;
//	do{
//		temp->showData();
//		temp = temp->getNext();
//	} while (temp != head);
//}
//
//void SinglyCircularLinkedList::remove()
//{
//	
//	if (current == head) {
//		head = current->getNext();
//	}
//
//	Node* ptr = head;
//	Node* temp = current;
//	do
//	{
//		if (ptr->getNext() == current) {
//			break;
//		}
//		ptr = ptr->getNext();
//	} while (ptr != head);
//	ptr->setNext(current->getNext());
//	current = ptr->getNext();
//	delete temp;
//	size--;
//
//
//
//}
//
//void SinglyCircularLinkedList::find(int d)
//{
//	Node* temp = head;
//	
//	do{
//		if (temp->getData() == d) {
//			cout << "Data Found" << endl;
//			break;
//		}
//		temp = temp->getNext();
//	}while (temp != head);
//	
//}
//
//void SinglyCircularLinkedList::back()
//{
//	
//	if (size != 0) {
//		Node* temp = head;
//
//		do {
//			if (temp->getNext() == current) {
//				break;
//			}
//			temp = temp->getNext();
//		} while (temp != head);
//		current = temp;
//	}
//	
//}
//
//void SinglyCircularLinkedList::forward()
//{
//	if(size != 0)
//	current = current->getNext();
//}
//
//
//
//
//int main() {
//	SinglyCircularLinkedList list;
//	list.add(10);
//	list.add(30);
//	list.add(20);
//	list.add(90);
//	list.showList();
//	return 0;
//}


// =======================================
       // DOUBLY LINKED LIST
// =======================================

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
//class DoublyCircularLinkedList {
//private:
//	Node* current;
//	Node* head;
//	int size;
//public:
//	DoublyCircularLinkedList();
//	void add(int d);
//	void get();
//	void remove();
//	void find(int);
//	void showList();
//	void back();
//	void forward();
//};
//
//DoublyCircularLinkedList::DoublyCircularLinkedList()
//{
//	head = NULL;
//	current = NULL;
//	size = 0;
//}
//
//void DoublyCircularLinkedList::add(int d)
//{
//	Node* ptr = new Node(d);
//	if (head == NULL) {
//		head = ptr;
//		current = ptr;
//		ptr->setNext(ptr);
//		ptr->setPrevious(ptr);
//		size++;
//		return;
//	}
//
//	ptr->setNext(current->getNext());
//	ptr->setPrevious(current);
//	current->getNext()->setPrevious(ptr);
//	current->setNext(ptr);
//	current = ptr;
//	size++;
//}
//
//void DoublyCircularLinkedList::get()
//{
//	current->showData();
//}
//
//void DoublyCircularLinkedList::remove()
//{
//	if (current == head) {
//		head = head->getNext();
//	}
//	Node* temp = current;
//	current->getPrevious()->setNext(current->getNext());
//	current->getNext()->setPrevious(current->getPrevious());
//	current = current->getNext();
//	delete temp;
//	size--;
//}
//
//void DoublyCircularLinkedList::find(int d)
//{
//	Node* ptr = head;
//	do
//	{
//		if (ptr->getData() == d) {
//			cout << "Data found" << endl;
//			break;
//		}
//		ptr = ptr->getNext();
//	} while (ptr != head);
//}
//
//void DoublyCircularLinkedList::showList()
//{
//	Node* temp = head;
//	do {
//		temp->showData();
//		temp = temp->getNext();
//
//	} while (temp != head);
//}
//
//void DoublyCircularLinkedList::back()
//{
//	
//	current = current->getPrevious();
//}
//
//void DoublyCircularLinkedList::forward()
//{
//	current = current->getNext();
//}
//
//int main() {
//	DoublyCircularLinkedList list;
//	list.add(20);
//	list.add(10);
//	list.add(30);
//	list.add(40);
//	list.showList();
//	list.back();
//	list.back();
//	list.back();
//	list.remove();
//	list.showList();
//	return 0;
//}

// =======================================
       // DOUBLY LINKED LIST
// =======================================
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

// =======================================
       // JOSEPH PROBLEM 1
// =======================================

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
//class SinglyCircularLinkedList {
//private:
//	Node* head;
//	Node* current;
//	int size;
//public:
//	SinglyCircularLinkedList();
//	void add(int d);
//	void remove();
//	void get();
//	void find(int d);
//	void start();
//	void back();
//	void forward();
//	int getSize();
//	void showList();
//};
//
//SinglyCircularLinkedList::SinglyCircularLinkedList()
//{
//	head = NULL;
//	current = NULL;
//	size = 0;
//}
//
//void SinglyCircularLinkedList::start() {
//	current = head;
//}
//
//void SinglyCircularLinkedList::get() {
//    current->showData();
//}
//int SinglyCircularLinkedList::getSize() {
//	return size;
//}
//
//void SinglyCircularLinkedList::add(int d)
//{
//	Node* ptr = new Node(d);
//	if (head == NULL) {
//		// list is empty
//		head = ptr;
//		current = ptr;
//		ptr->setNext(head);
//		size++;
//		return;
//	}
//
//	ptr->setNext(current->getNext());
//	current->setNext(ptr);
//	current = ptr;
//	size++;
//}
//
//void SinglyCircularLinkedList::showList()
//{
//	Node* temp = head;
//	do{
//		temp->showData();
//		temp = temp->getNext();
//	} while (temp != head);
//}
//
//void SinglyCircularLinkedList::remove()
//{
//	
//	if (current == head) {
//		head = current->getNext();
//	}
//
//	Node* ptr = head;
//	Node* temp = current;
//	do
//	{
//		if (ptr->getNext() == current) {
//			break;
//		}
//		ptr = ptr->getNext();
//	} while (ptr != head);
//	ptr->setNext(current->getNext());
//	current = ptr->getNext();
//	delete temp;
//	size--;
//
//
//
//}
//
//void SinglyCircularLinkedList::find(int d)
//{
//	Node* temp = head;
//	
//	do{
//		if (temp->getData() == d) {
//			cout << "Data Found" << endl;
//			break;
//		}
//		temp = temp->getNext();
//	}while (temp != head);
//	
//}
//
//void SinglyCircularLinkedList::back()
//{
//	
//	if (size != 0) {
//		Node* temp = head;
//
//		do {
//			if (temp->getNext() == current) {
//				break;
//			}
//			temp = temp->getNext();
//		} while (temp != head);
//		current = temp;
//	}
//	
//}
//
//void SinglyCircularLinkedList::forward()
//{
//	if(size != 0)
//	current = current->getNext();
//}
//
//
//int main() {
//	SinglyCircularLinkedList list;
//
//	for (int i = 1; i <= 10; i++)
//	{
//		list.add(i);
//	}
//
//	list.showList();
//	list.start();
//
//	while (list.getSize() > 1)
//	{
//		for (int i = 0; i < 3; i++) {
//			list.forward();
//		}
//		list.remove();
//	}
//
//	list.showList();
//
//	return 0;
//}


// =======================================
       // JOSEPH PROBLEM CR GR
// =======================================

//#include<iostream>
//using namespace std;
//
//using namespace std;
//class Student {
//private:
//	int id;
//	const char* name;
//	char gender;
//public:
//	static int femaleCount;
//	static int maleCount;
//	Student();
//	
//	Student(int id, const char* name, char gender);
//	int getId();
//	void setId(int);
//	const char* getName();
//	void setName(const char*);
//	char getGender();
//	void setGender(char);
//
//};
//
//int Student::femaleCount = 0;
//int Student::maleCount = 0;
//
//
//Student::Student() {
//	//id = -1;
//	//name = "fda";
//	//gender = '\0';
//
//
//}
//
//Student::Student(int id, const char* name, char gender) {
//	this->setId(id);
//	this->setName(name);
//	this->setGender(gender);
//}
//
//void Student::setId(int id) {
//	this->id = id;
//}
//int Student::getId() {
//	return id;
//}
//
//const char* Student::getName() {
//	return name;
//}
//
//void Student::setName(const char* newName) {
//	this->name = newName;
//}
//
//void Student::setGender(char g) {
//	if (g == 'M' || g == 'F') {
//		gender = g;
//		return;
//	}
//	gender = 'M'; // by default is male
//	cout << "Plese enter a valid gender " << endl;
//	cout << "M for Male & F for Female" << endl;
//
//}
//
//char Student::getGender() {
//	return gender;
//}
//
//
//class Node {
//private:
//	Student data;
//	Node* next;
//public:
//	Node(Student d);
//	Node* getNext();
//	void setNext(Node* ptr);
//	Student getData();
//	void setData(Student d);
//	void showData();
//};
//
//
//Node::Node(Student d)
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
//Student Node::getData()
//{
//	return data;
//}
//
//void Node::setData(Student d)
//{
//	data = d;
//}
//
//void Node::showData()
//{
//	cout << "----------------------------" << endl;
//		cout << "ID : ";
//		cout << data.getId() << endl;
//		cout << "NAME : ";
//		cout << data.getName() << endl;
//		cout << "GENDER : ";
//		cout << data.getGender() << endl;
//		cout << endl;
//}
//
//class SinglyCircularLinkedList {
//private:
//	Node* head;
//	Node* current;
//	int size;
//public:
//	SinglyCircularLinkedList();
//	void add(Student d);
//	void remove();
//	void get();
//	void find(int d);
//	void start();
//	void back();
//	void forward();
//	Node* getCurrent();
//	int getSize();
//	void showList();
//};
//
//SinglyCircularLinkedList::SinglyCircularLinkedList()
//{
//	head = NULL;
//	current = NULL;
//	size = 0;
//}
//
//void SinglyCircularLinkedList::start() {
//	current = head;
//}
//
//Node* SinglyCircularLinkedList::getCurrent() {
//	return current;
//}
//
//void SinglyCircularLinkedList::get() {
//    current->showData();
//}
//int SinglyCircularLinkedList::getSize() {
//	return size;
//}
//
//void SinglyCircularLinkedList::add(Student d)
//{
//	Node* ptr = new Node(d);
//	if (head == NULL) {
//		// list is empty
//		head = ptr;
//		current = ptr;
//		ptr->setNext(head);
//		size++;
//		if (d.getGender() == 'F') {
//			Student::femaleCount++;
//		}
//		else {
//			Student::maleCount++;
//		}
//		return;
//	}
//
//	ptr->setNext(current->getNext());
//	current->setNext(ptr);
//	current = ptr;
//	if (d.getGender() == 'F') {
//		Student::femaleCount++;
//	}
//	else {
//		Student::maleCount++;
//	}
//	
//	size++;
//}
//
//void SinglyCircularLinkedList::showList()
//{
//	Node* temp = head;
//	do{
//		temp->showData();
//		temp = temp->getNext();
//	} while (temp != head);
//}
//
//void SinglyCircularLinkedList::remove()
//{
//	
//	if (current == head) {
//		head = current->getNext();
//	}
//
//	Node* ptr = head;
//	Node* temp = current;
//	do
//	{
//		if (ptr->getNext() == current) {
//			break;
//		}
//		ptr = ptr->getNext();
//	} while (ptr != head);
//	ptr->setNext(current->getNext());
//	current = ptr->getNext();
//	if (temp->getData().getGender() == 'F') {
//		Student::femaleCount--;
//	}
//	else {
//		Student::maleCount--;
//	}
//	delete temp;
//	size--;
//
//
//
//}
//
//void SinglyCircularLinkedList::find(int d)
//{
//	Node* temp = head;
//	
//	do{
//		if (temp->getData().getId() == d) {
//			cout << "Data Found" << endl;
//			break;
//		}
//		temp = temp->getNext();
//	}while (temp != head);
//	
//}
//
//void SinglyCircularLinkedList::back()
//{
//	
//	if (size != 0) {
//		Node* temp = head;
//
//		do {
//			if (temp->getNext() == current) {
//				break;
//			}
//			temp = temp->getNext();
//		} while (temp != head);
//		current = temp;
//	}
//	
//}
//
//void SinglyCircularLinkedList::forward()
//{
//	if(size != 0)
//	current = current->getNext();
//}
//
//int main() {
//	SinglyCircularLinkedList list;
//	Student cr, gr;
//		list.add(Student(1, "Umar", 'M'));
//		list.add(Student(2, "Ali", 'M'));
//		list.add(Student(3, "Fatima", 'F'));
//		list.add(Student(4, "Noor", 'F'));
//		list.add(Student(5, "Ahmad", 'M'));
//		list.add(Student(6, "Sana", 'F'));
//		list.add(Student(7, "Rarwa", 'F'));
//		list.add(Student(8, "Jannat	", 'F'));
//		list.add(Student(9, "Sonia", 'F'));
//		list.add(Student(10, "Abdulrehman", 'M'));
//		list.start();
//		while (list.getSize() > 2)
//		{
//			
//			for (int i = 0; i < 3; i++)
//			{
//				list.forward();
//			}
//
//			if (list.getCurrent()->getData().getGender() == 'F' && Student::femaleCount > 1) {
//				list.remove();
//			}
//			else if (list.getCurrent()->getData().getGender() == 'M' && Student::maleCount > 1) {
//				list.remove();
//
//			}
//			else {
//				list.forward();
//				
//			}
//
//		}
//
//		list.showList();
//	return 0;
//}


// =======================================
       // STACK with array
// =======================================

//#include<iostream>
//using namespace std;
//class Stack {
//private:
//    int size;
//    int length;
//    int current;
//    int* p;
//public:
//    Stack(int);
//    int push(int);
//    int pop();
//    int top();
//};
//
//Stack::Stack(int s) {
//    current = -1;
//    size = 0;
//    length = s;
//    p = new int[s];
//}
//
//int Stack::push(int d) {
//    if (size == length) {
//        cout << "List is full" << endl;
//        return -1;
//    }
//    p[++current] = d;
//    size++;
//
//    return p[current];
//}
//
//int Stack::pop() {
//    if (size == 0) {
//        cout << "list is empty" << endl;
//        return -1;
//     }
//    int result = p[current];
//    p[current--] = -1;
//    size--;
//    return result;
//
//}
//
//int Stack::top() {
//    if (size == 0) {
//        cout << "list is empty" << endl;
//        return -1;
//    }
//    return p[current];
//}
//
//int main() {
//    Stack s(10);
//    cout << s.push(10) << endl;
//    cout << s.push(20) << endl;
//    cout << s.push(30) << endl;
//    cout << s.push(40) << endl;
//    cout << s.top() << endl;
//    cout << s.pop() << endl;
//    cout << s.pop() << endl;
//    cout << s.pop() << endl;
//    cout << s.pop() << endl;
//    cout << s.top() << endl;
//    return 0;
//}
//


 //=======================================
 //       STACK with linked list
 //=======================================

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
//class SinglyLinkedList {
//private:
//	Node* head;
//	Node* current;
//	int size;
//public:
//	SinglyLinkedList();
//	void add(int d);
//	void remove();
//	int get();
//	void find(int d);
//	void back();
//	void forward();
//	void showList();
//	void insertAtStart(int d);
//};
//
//SinglyLinkedList::SinglyLinkedList()
//{
//	head = NULL;
//	current = NULL;
//	size = 0;
//}
//
//int SinglyLinkedList::get() {
//    return current->getData();
//}
//
//void SinglyLinkedList::add(int d)
//{
//	Node* ptr = new Node(d);
//	if (head == NULL) {
//		// list is empty
//		head = ptr;
//		current = ptr;
//		size++;
//		return;
//	}
//
//	ptr->setNext(current->getNext());
//	current->setNext(ptr);
//	current = ptr;
//	size++;
//}
//
//void SinglyLinkedList::insertAtStart(int d) {
//	Node* ptr = new Node(d);
//	if (head == NULL) {
//		// list is empty
//		head = ptr;
//		current = ptr;
//		size++;
//		return;
//	}
//	ptr->setNext(head);
//	head = ptr;
//	current = ptr;
//	size++;
//}
//
//void SinglyLinkedList::showList()
//{
//	Node* temp = head;
//	while (temp != NULL)
//	{
//		temp->showData();
//		temp = temp->getNext();
//	}
//}
//
//void SinglyLinkedList::remove()
//{
//	Node *temp = head;
//	if (current == head) {
//		if (size == 1) {
//			// last element is being deleted
//			head = NULL;
//			current = NULL;
//		}
//		else {
//			head = head->getNext();
//			current = head;
//		}
//		delete temp;
//		size--;
//		return;
//	}
//
//
//
//}
//
//void SinglyLinkedList::find(int d)
//{
//	Node* temp = head;
//	while (temp != NULL)
//	{
//		if (temp->getData() == d) {
//			cout << "Data Found" << endl;
//			break;
//		}
//		temp = temp->getNext();
//	}
//	
//}
//
//void SinglyLinkedList::back()
//{
//	if (current != head) {
//		Node* temp = head;
//		while (temp != NULL)
//		{
//			if (temp->getNext() == current) {
//				break;
//			}
//			temp = temp->getNext();
//		}
//		current = temp;
//	}
//}
//
//void SinglyLinkedList::forward()
//{
//	if(current->getNext() != NULL)
//	current = current->getNext();
//}
//
//class Stack {
//private:
//	int size;
//	SinglyLinkedList list;
//public:
//	Stack();
//	int top();
//	int push(int);
//	int pop();
//};
//Stack::Stack() {
//	size = 0;
//}
//
//int Stack::top() {
//	if (size == 0) cout << "list is empty" << endl;
//	return size == 0 ? -1 : list.get();
//}
//int Stack::push(int d) {
//	list.insertAtStart(d);
//	size++;
//	return list.get();
//}
//
//int Stack::pop() {
//	if (size == 0) {
//		cout << "List is empty" << endl;
//		return -1;
//	}
//	int result = list.get();
//	size--;
//	list.remove();
//	return result;
//}
//
//
//
//int main() {
//	Stack s;
//	cout << s.push(10) << endl;
//	cout << s.push(20) << endl;
//	cout << s.push(30) << endl;
//	cout << s.push(40) << endl;
//	cout << s.top() << endl;
//	cout << s.pop() << endl;
//	cout << s.pop() << endl;
//	cout << s.pop() << endl;
//	cout << s.pop() << endl;
//	cout << s.top() << endl;
//
//	return 0;
//}

 //=======================================
 //       STACK with linked list and template
 //=======================================

//#include<iostream>
//using namespace std;
//template<class T>
//class Node {
//private:
//	T data;
//	Node* next;
//public:
//	Node(T d);
//	Node* getNext();
//	void setNext(Node* ptr);
//	T getData();
//	void setData(T d);
//	void showData();
//};
//
//template<class T>
//Node<T>::Node(T d) {
//	data = d;
//	next = NULL;
//}
//
//template<class T>
//Node<T>* Node<T>::getNext()
//{
//	return next;
//}
//
//template<class T>
//void Node<T>::setNext(Node* ptr)
//{
//	next = ptr;
//}
//
//template<class T>
//T Node<T>::getData()
//{
//	return data;
//}
//
//template<class T>
//void Node<T>::setData(T d)
//{
//	data = d;
//}
//
//
//template<class T>
//void Node<T>::showData()
//{
//	cout << data << endl;
//}
//
//
//template<class T>
//class SinglyLinkedList {
//private:
//	Node<T>* head;
//	Node<T>* current;
//	int size;
//public:
//	SinglyLinkedList();
//	void add(T d);
//	void remove();
//	T get();
//	void find(T d);
//	void back();
//	void forward();
//	void showList();
//	void insertAtStart(T d);
//};
//
//template<class T>
//SinglyLinkedList<T>::SinglyLinkedList()
//{
//	head = NULL;
//	current = NULL;
//	size = 0;
//}
//
//template<class T>
//T SinglyLinkedList<T>::get() {
//	return current->getData();
//}
//
//template<class T>
//void SinglyLinkedList<T>::add(T d)
//{
//	Node<T>* ptr = new Node<T>(d);
//	if (head == NULL) {
//		// list is empty
//		head = ptr;
//		current = ptr;
//		size++;
//		return;
//	}
//
//	ptr->setNext(current->getNext());
//	current->setNext(ptr);
//	current = ptr;
//	size++;
//}
//
//template<class T>
//void SinglyLinkedList<T>::insertAtStart(T d) {
//	Node<T>* ptr = new Node<T>(d);
//	if (head == NULL) {
//		// list is empty
//		head = ptr;
//		current = ptr;
//		size++;
//		return;
//	}
//	ptr->setNext(head);
//	head = ptr;
//	current = ptr;
//	size++;
//}
//
//template<class T>
//void SinglyLinkedList<T>::showList()
//{
//	Node* temp = head;
//	while (temp != NULL)
//	{
//		temp->showData();
//		temp = temp->getNext();
//	}
//}
//
//template<class T>
//void SinglyLinkedList<T>::remove()
//{
//	Node<T>* temp = head;
//	if (current == head) {
//		if (size == 1) {
//			// last element is being deleted
//			head = NULL;
//			current = NULL;
//		}
//		else {
//			head = head->getNext();
//			current = head;
//		}
//		delete temp;
//		size--;
//		return;
//	}
//
//
//
//}
//
//template<class T>
//void SinglyLinkedList<T>::find(T d)
//{
//	Node* temp = head;
//	while (temp != NULL)
//	{
//		if (temp->getData() == d) {
//			cout << "Data Found" << endl;
//			break;
//		}
//		temp = temp->getNext();
//	}
//
//}
//
//template<class T>
//void SinglyLinkedList<T>::back()
//{
//	if (current != head) {
//		Node* temp = head;
//		while (temp != NULL)
//		{
//			if (temp->getNext() == current) {
//				break;
//			}
//			temp = temp->getNext();
//		}
//		current = temp;
//	}
//}
//
//template<class T>
//void SinglyLinkedList<T>::forward()
//{
//	if (current->getNext() != NULL)
//		current = current->getNext();
//}
//
//template<class T>
//class Stack {
//private:
//	int size;
//	SinglyLinkedList<T> list;
//public:
//	Stack();
//	T top();
//	T push(T);
//	T pop();
//};
//
//template<class T>
//Stack<T>::Stack() {
//	size = 0;
//}
//
//template<class T>
//T Stack<T>::top() {
//	if (size == 0) cout << "list is empty" << endl;
//	return size == 0 ? -1 : list.get();
//}
//
//template<class T>
//T Stack<T>::push(T d) {
//	list.insertAtStart(d);
//	size++;
//	return list.get();
//}
//
//template<class T>
//T Stack<T>::pop() {
//	if (size == 0) {
//		cout << "List is empty" << endl;
//		return -1;
//	}
//	int result = list.get();
//	size--;
//	list.remove();
//	return result;
//}
//
//
//
//int main() {
//	Stack<char> s;
//	cout << s.push('1') << endl;
//	cout << s.push('2') << endl;
//	cout << s.push('3') << endl;
//	cout << s.push('4') << endl;
//	cout << s.top() << endl;
//	cout << s.pop() << endl;
//	cout << s.pop() << endl;
//	cout << s.pop() << endl;
//	cout << s.pop() << endl;
//	cout << s.top() << endl;
//
//	return 0;
//}



 //=======================================
 //     POST FIX EVALUATION & infix to postfix
 //=======================================

#include<iostream>
using namespace std;
template<class T>
class Node {
private:
	T data;
	Node* next;
public:
	Node(T d);
	Node* getNext();
	void setNext(Node* ptr);
	T getData();
	void setData(T d);
	void showData();
};

template<class T>
Node<T>::Node(T d) {
	data = d;
	next = NULL;
}

template<class T>
Node<T>* Node<T>::getNext()
{
	return next;
}

template<class T>
void Node<T>::setNext(Node* ptr)
{
	next = ptr;
}

template<class T>
T Node<T>::getData()
{
	return data;
}

template<class T>
void Node<T>::setData(T d)
{
	data = d;
}


template<class T>
void Node<T>::showData()
{
	cout << data << endl;
}


template<class T>
class SinglyLinkedList {
private:
	Node<T>* head;
	Node<T>* current;
	int size;
public:
	SinglyLinkedList();
	void add(T d);
	void remove();
	T get();
	void find(T d);
	void back();
	void forward();
	void showList();
	void insertAtStart(T d);
};

template<class T>
SinglyLinkedList<T>::SinglyLinkedList()
{
	head = NULL;
	current = NULL;
	size = 0;
}

template<class T>
T SinglyLinkedList<T>::get() {
	return current->getData();
}

template<class T>
void SinglyLinkedList<T>::add(T d)
{
	Node<T>* ptr = new Node<T>(d);
	if (head == NULL) {
		// list is empty
		head = ptr;
		current = ptr;
		size++;
		return;
	}

	ptr->setNext(current->getNext());
	current->setNext(ptr);
	current = ptr;
	size++;
}

template<class T>
void SinglyLinkedList<T>::insertAtStart(T d) {
	Node<T>* ptr = new Node<T>(d);
	if (head == NULL) {
		// list is empty
		head = ptr;
		current = ptr;
		size++;
		return;
	}
	ptr->setNext(head);
	head = ptr;
	current = ptr;
	size++;
}

template<class T>
void SinglyLinkedList<T>::showList()
{
	Node* temp = head;
	while (temp != NULL)
	{
		temp->showData();
		temp = temp->getNext();
	}
}

template<class T>
void SinglyLinkedList<T>::remove()
{
	Node<T>* temp = head;
	if (current == head) {
		if (size == 1) {
			// last element is being deleted
			head = NULL;
			current = NULL;
		}
		else {
			head = head->getNext();
			current = head;
		}
		delete temp;
		size--;
		return;
	}



}

template<class T>
void SinglyLinkedList<T>::find(T d)
{
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->getData() == d) {
			cout << "Data Found" << endl;
			break;
		}
		temp = temp->getNext();
	}

}

template<class T>
void SinglyLinkedList<T>::back()
{
	if (current != head) {
		Node* temp = head;
		while (temp != NULL)
		{
			if (temp->getNext() == current) {
				break;
			}
			temp = temp->getNext();
		}
		current = temp;
	}
}

template<class T>
void SinglyLinkedList<T>::forward()
{
	if (current->getNext() != NULL)
		current = current->getNext();
}

template<class T>
class Stack {
private:
	int size;
	SinglyLinkedList<T> list;
public:
	Stack();
	T top();
	T push(T);
	T pop();
	bool isEmpty();
};

template<class T>
Stack<T>::Stack() {
	size = 0;
}

template<class T>
bool Stack<T>::isEmpty() {
	return size == 0;
}



template<class T>
T Stack<T>::top() {
	if (size == 0) cout << "list is empty" << endl;
	return size == 0 ? -1 : list.get();
}

template<class T>
T Stack<T>::push(T d) {
	list.insertAtStart(d);
	size++;
	return list.get();
}

template<class T>
T Stack<T>::pop() {
	if (size == 0) {
		cout << "List is empty" << endl;
		return -1;
	}
	T result = list.get();
	size--;
	list.remove();
	return result;
}


double postFixEvaluation(string expression) {
	Stack<double> s;
	int i = 0;
	while (expression[i] != '\0')
	{
		if (isdigit(expression[i])) {
			s.push(expression[i] - '0');
		}
		else {
			double opr1, opr2, result;
			opr2 = s.pop();
			opr1 = s.pop();
			switch (expression[i])
			{
			case '+':
				result = opr1 + opr2;
				break;
			case '*':
				result = opr1 * opr2;
				break;
			case '/':
				result = opr1 / opr2;
				break;
			case '-':
				result = opr1 - opr2;
				break;
			case '^':
				result = pow(opr1, opr2);
				break;
			default:
				result = 0;
				break;
			}
			s.push(result);

		}
		i++;
	}
	return s.top();
}

int precedence(char opr) {
	if (opr == '^') {
		return 3;
	}
	else if (opr == '/' || opr == '*') {
		return 2;
	}
	else if (opr == '+' || opr == '-') {
		return 1;
	}
	else {
		return 0;
	}
}

string infixToPostFix(string expression) {
	Stack<char> s;
	string result;
	int i = 0;

	while (expression[i] != '\0') {
		if ((expression[i] >= 'a' && expression[i] <= 'z') || (expression[i] >= 'A' && expression[i] <= 'Z')) {
			result += expression[i];
		}
		else if (expression[i] == '(') {
			s.push(expression[i]);
		}
		else if (expression[i] == ')') {
			while (!s.isEmpty() && s.top() != '(') {
				result += s.top();
				s.pop();
			}
			if (!s.isEmpty()) {
				s.pop();
			}
		}
		else {
			while (!s.isEmpty() && (precedence(s.top()) > precedence(expression[i])))
			{
				result += s.top();
				s.pop();
			}
			s.push(expression[i]);
		}
		i++;
	}
	while(!s.isEmpty())
	{
		result += s.top();
		s.pop();
	}
	return result;
}

//int main() {
//	string data = "82^";
//	double result = postFixEvaluation(data);
//	cout << result << endl;
//	string expression = "(A+B)*C";
//	cout<<infixToPostFix(expression);
//	return 0;
//}


//=======================================
 //     PRE FIX EVALUATION & infix to prefix
 //=======================================

//#include<iostream>
//using namespace std;
//template<class T>
//class Node {
//private:
//	T data;
//	Node* next;
//public:
//	Node(T d);
//	Node* getNext();
//	void setNext(Node* ptr);
//	T getData();
//	void setData(T d);
//	void showData();
//};
//
//template<class T>
//Node<T>::Node(T d) {
//	data = d;
//	next = NULL;
//}
//
//template<class T>
//Node<T>* Node<T>::getNext()
//{
//	return next;
//}
//
//template<class T>
//void Node<T>::setNext(Node* ptr)
//{
//	next = ptr;
//}
//
//template<class T>
//T Node<T>::getData()
//{
//	return data;
//}
//
//template<class T>
//void Node<T>::setData(T d)
//{
//	data = d;
//}
//
//
//template<class T>
//void Node<T>::showData()
//{
//	cout << data << endl;
//}
//
//
//template<class T>
//class SinglyLinkedList {
//private:
//	Node<T>* head;
//	Node<T>* current;
//	int size;
//public:
//	SinglyLinkedList();
//	void add(T d);
//	void remove();
//	T get();
//	void find(T d);
//	void back();
//	void forward();
//	void showList();
//	void insertAtStart(T d);
//};
//
//template<class T>
//SinglyLinkedList<T>::SinglyLinkedList()
//{
//	head = NULL;
//	current = NULL;
//	size = 0;
//}
//
//template<class T>
//T SinglyLinkedList<T>::get() {
//	return current->getData();
//}
//
//template<class T>
//void SinglyLinkedList<T>::add(T d)
//{
//	Node<T>* ptr = new Node<T>(d);
//	if (head == NULL) {
//		// list is empty
//		head = ptr;
//		current = ptr;
//		size++;
//		return;
//	}
//
//	ptr->setNext(current->getNext());
//	current->setNext(ptr);
//	current = ptr;
//	size++;
//}
//
//template<class T>
//void SinglyLinkedList<T>::insertAtStart(T d) {
//	Node<T>* ptr = new Node<T>(d);
//	if (head == NULL) {
//		// list is empty
//		head = ptr;
//		current = ptr;
//		size++;
//		return;
//	}
//	ptr->setNext(head);
//	head = ptr;
//	current = ptr;
//	size++;
//}
//
//template<class T>
//void SinglyLinkedList<T>::showList()
//{
//	Node* temp = head;
//	while (temp != NULL)
//	{
//		temp->showData();
//		temp = temp->getNext();
//	}
//}
//
//template<class T>
//void SinglyLinkedList<T>::remove()
//{
//	Node<T>* temp = head;
//	if (current == head) {
//		if (size == 1) {
//			// last element is being deleted
//			head = NULL;
//			current = NULL;
//		}
//		else {
//			head = head->getNext();
//			current = head;
//		}
//		delete temp;
//		size--;
//		return;
//	}
//
//
//
//}
//
//template<class T>
//void SinglyLinkedList<T>::find(T d)
//{
//	Node* temp = head;
//	while (temp != NULL)
//	{
//		if (temp->getData() == d) {
//			cout << "Data Found" << endl;
//			break;
//		}
//		temp = temp->getNext();
//	}
//
//}
//
//template<class T>
//void SinglyLinkedList<T>::back()
//{
//	if (current != head) {
//		Node* temp = head;
//		while (temp != NULL)
//		{
//			if (temp->getNext() == current) {
//				break;
//			}
//			temp = temp->getNext();
//		}
//		current = temp;
//	}
//}
//
//template<class T>
//void SinglyLinkedList<T>::forward()
//{
//	if (current->getNext() != NULL)
//		current = current->getNext();
//}
//
//template<class T>
//class Stack {
//private:
//	int size;
//	SinglyLinkedList<T> list;
//public:
//	Stack();
//	T top();
//	T push(T);
//	T pop();
//	bool isEmpty();
//};
//
//template<class T>
//Stack<T>::Stack() {
//	size = 0;
//}
//
//template<class T>
//bool Stack<T>::isEmpty() {
//	return size == 0;
//}
//
//
//
//template<class T>
//T Stack<T>::top() {
//	if (size == 0) cout << "list is empty" << endl;
//	return size == 0 ? -1 : list.get();
//}
//
//template<class T>
//T Stack<T>::push(T d) {
//	list.insertAtStart(d);
//	size++;
//	return list.get();
//}
//
//template<class T>
//T Stack<T>::pop() {
//	if (size == 0) {
//		cout << "List is empty" << endl;
//		return -1;
//	}
//	T result = list.get();
//	size--;
//	list.remove();
//	return result;
//}
//
//
//double preFixEvaluation(string expression) {
//	Stack<double> s;
//	int i = (int) expression.length();
//	i--;
//	while (i != -1)
//	{
//		if (isdigit(expression[i])) {
//			s.push(expression[i] - '0');
//		}
//		else {
//			double opr1, opr2, result;
//			opr1 = s.pop();
//			opr2 = s.pop();
//			switch (expression[i])
//			{
//			case '+':
//				result = opr1 + opr2;
//				break;
//			case '*':
//				result = opr1 * opr2;
//				break;
//			case '/':
//				result = opr1 / opr2;
//				break;
//			case '-':
//				result = opr1 - opr2;
//				break;
//			case '^':
//				result = pow(opr1, opr2);
//				break;
//			default:
//				result = 0;
//				break;
//			}
//			s.push(result);
//
//		}
//		i--;
//	}
//	return s.top();
//}
//
//int precedence(char opr) {
//	if (opr == '^') {
//		return 3;
//	}
//	else if (opr == '/' || opr == '*') {
//		return 2;
//	}
//	else if (opr == '+' || opr == '-') {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//string infixToPreFix(string expression) {
//	Stack<char> s;
//	string result;
//	int i = 0;
//	reverse(expression.begin(), expression.end());
//
//	while (expression[i] != '\0') {
//		if ((expression[i] >= 'a' && expression[i] <= 'z') || (expression[i] >= 'A' && expression[i] <= 'Z')) {
//			result += expression[i];
//		}
//		else if (expression[i] == '(') {
//			s.push(expression[i]);
//		}
//		else if (expression[i] == ')') {
//			while (!s.isEmpty() && s.top() != '(') {
//				result += s.top();
//				s.pop();
//			}
//			if (!s.isEmpty()) {
//				s.pop();
//			}
//		}
//		else {
//			while (!s.isEmpty() && (precedence(s.top()) > precedence(expression[i])))
//			{
//				result += s.top();
//				s.pop();
//			}
//			s.push(expression[i]);
//		}
//		i++;
//	}
//	while(!s.isEmpty())
//	{
//		result += s.top();
//		s.pop();
//	}
//	reverse(result.begin(), result.end());
//	return result;
//}
//
//int main() {
//	string data = "*22-23";
//	double result = preFixEvaluation(data);
//	cout << result << endl;
//
//	string expression = "A+B*C";
//	cout<<infixToPreFix(expression);
//}