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
//	Student();
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
//	cout << "ID : ";
//	cout << data.getId() << endl;
//	cout << "NAME : ";
//	cout << data.getName() << endl;
//	cout << "GENDER : ";
//	cout << data.getGender() << endl;
//	cout << endl;
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
//	int malesCount;
//	int femalesCount;
//public:
//	LinkedList();
//	void add(Student d);
//	void showList();
//	void remove();
//	void get();
//	void forward();
//	void insertAtStart(Student d);
//	void backward();
//	void find(int);
//	int getLength();
//	void start();
//	int getFemaleCount();
//	int getMaleCount();
//	Student findByGender(char d);
//	Node* getCurrent();
//
//
//};
//
//
//
//LinkedList::LinkedList() {
//	size = 0;
//	length = 0;
//	femalesCount = 0;
//	malesCount = 0;
//	current = NULL;
//	head = NULL;
//}
//
//Node* LinkedList::getCurrent() {
//	return current;
//}
//
//
//
//int LinkedList::getFemaleCount() {
//	return femalesCount;
//}
//int LinkedList::getMaleCount() {
//	return malesCount;
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
//void LinkedList::add(Student d)
//{
//	Node* ptr = new Node(d);
//	// its first entry in the list
//	if (head == NULL) {
//		head = ptr;
//		current = ptr;
//		current->setNext(ptr);
//
//	}
//	else {
//		ptr->setNext(current->getNext());
//		current->setNext(ptr);
//		current = ptr;
//	}
//
//	if (d.getGender() == 'M') {
//		malesCount++;
//	}
//	else {
//		femalesCount++;
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
//	do {
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
//	Node* ptr = head;
//	Node* temp = current;
//	do {
//		if (ptr->getNext() == current) {
//			break;
//		}
//		ptr = ptr->getNext();
//
//	} while (ptr != head);
//
//	if (current->getData().getGender() == 'M') {
//		malesCount--;
//	}
//	else {
//		femalesCount--;
//	}
//	ptr->setNext(current->getNext());
//	current = ptr->getNext();
//	delete temp;
//
//
//	size--;
//
//}
//
//void LinkedList::get()
//{
//	if (size == 0)
//	{
//		cout << "List is empty" << endl;
//		return;
//	}
//
//	current->showData();
//}
//
//void LinkedList::forward()
//{
//	if (head != NULL)
//		current = current->getNext();
//}
//
//void LinkedList::insertAtStart(Student d)
//{
//	if (size == 0) {
//		cout << "Atleast one Node should be present" << endl;
//		return;
//	}
//
//	Node* temp = head;
//	do {
//		// we are trying to break just one node before the current Node
//		if (temp->getNext() == head) {
//			break;
//		}
//		temp = temp->getNext();
//
//	} while (temp != head);
//	current = temp;
//	Node* ptr = new Node(d);
//	current->setNext(ptr);
//	ptr->setNext(head);
//	head = ptr;
//	size++;
//}
//
//void LinkedList::backward()
//{
//	if (size == 0) {
//		cout << "List is empty Can't go backward" << endl;
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
//		if (ptr->getData().getId() == d) {
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
//
//Student LinkedList::findByGender(char d) {
//	Student result;
//	if (size == 0) {
//		cout << "List is empty" << endl;
//		return Student(-1, "", '\0');
//	}
//	bool found = false;
//	Node* ptr = head;
//	do
//	{
//		if (ptr->getData().getGender() == d) {
//			//cout << "Value found" << endl;
//
//			found = true;
//			result = ptr->getData();
//			break;
//		}
//
//		ptr = ptr->getNext();
//
//
//	} while (ptr != head);
//
//
//	return result;
//
//
//}
//
//
//void displayCrAndGr(Student cr, Student gr);
//
//
//
//
//
//int main() {
//	LinkedList list;
//	int M = 3;
//
//	Student cr, gr;
//	list.add(Student(1, "Umar", 'M'));
//	list.add(Student(2, "Ali", 'M'));
//	list.add(Student(3, "Fatima", 'F'));
//	list.add(Student(4, "Noor", 'F'));
//	list.add(Student(5, "Ahmad", 'M'));
//	list.add(Student(6, "Sana", 'F'));
//	list.add(Student(7, "Rarwa", 'F'));
//	list.add(Student(8, "Jannat	", 'F'));
//	list.add(Student(9, "Sonia", 'F'));
//	list.add(Student(10, "Abdulrehman", 'M'));
//
//
//
//
//
//	if (list.getFemaleCount() == 0 || list.getMaleCount() == 0) {
//		cout << "Atleast one male and one Female is required" << endl;
//		exit(0);
//	}
//	else {
//
//		list.start();
//		while (list.getLength() != 0)
//		{
//
//			for (int i = 1; i <= M; i++)
//			{
//				list.forward();
//			}
//
//			if (list.getFemaleCount() == 1) {
//				gr = list.findByGender('F');
//			}
//			if (list.getMaleCount() == 1) {
//				cr = list.findByGender('M');
//			}
//
//			list.remove();
//
//
//
//
//		}
//
//
//		displayCrAndGr(cr, gr);
//
//
//	}
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}
//
//void displayCrAndGr(Student cr, Student gr) {
//	cout << endl;
//	cout << "Cr and Gr are" << endl;
//
//
//
//	cout << "----------------------------" << endl;
//	cout << "ID : ";
//	cout << cr.getId() << endl;
//	cout << "NAME : ";
//	cout << cr.getName() << endl;
//	cout << "GENDER : ";
//	cout << cr.getGender() << endl;
//	cout << endl;
//
//
//	cout << "----------------------------" << endl;
//	cout << "ID : ";
//	cout << gr.getId() << endl;
//	cout << "NAME : ";
//	cout << gr.getName() << endl;
//	cout << "GENDER : ";
//	cout << gr.getGender() << endl;
//	cout << endl;
//}
