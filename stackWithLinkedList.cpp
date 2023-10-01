//#include <iostream>
//#include <string>
//using namespace std;
//
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
//class Stack {
//private:
//    Node* head;
//public:
//    Stack();
//    int push(int);
//    int pop();
//    int top();
//    bool isEmpty();
//};
//
//Stack::Stack() {
//    head = NULL;
//   
//}
//int Stack::push(int d) {
//    Node* ptr = new Node(d);
//    ptr->setNext(head);
//    head = ptr;
//    return head->getData();
//}
//
//bool Stack::isEmpty() {
//    return head == NULL;
//}
//
//int Stack::pop() {
//    if (isEmpty()) {
//        cout << "List is empty" << endl;
//        return -1;
//    }
//    int data = head->getData();
//    Node* temp = head;
//    head = head->getNext();
//    delete temp;
//    
//    return data;
//}
//
//int Stack::top() {
//    if (isEmpty()) {
//        cout << "List is empty" << endl;
//        return -1;
//    }
//
//    return head->getData();
//}
//
//
//
//int main() {
//    Stack stack;
//    cout << stack.push(10) << endl;
//    cout<< stack.push(20)<<endl;
//    cout<< stack.push(30)<<endl;
//    cout << stack.push(40) << endl;
//
//    cout << stack.top() << endl;
//    
//    cout << stack.pop() << endl;
//    cout << stack.pop() << endl;
//    cout << stack.pop() << endl;
//    cout << stack.pop() << endl;
//
//    stack.pop();
//
//   stack.top();
//
//    return 0;
//}