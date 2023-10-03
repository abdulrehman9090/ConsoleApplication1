#include<iostream>
#include<string>
#include<ctype.h>
#include<math.h>
using namespace std;


class Node {
private:
	int data;
	Node* next;
public:
	Node(int d);
	Node* getNext();
	void setNext(Node* ptr);
	int getData();
	void setData(int d);
	void showData();
};


Node::Node(int d)
{
	data = d;
	next = NULL;
}

Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* ptr)
{
	next = ptr;
}

int Node::getData()
{
	return data;
}

void Node::setData(int d)
{
	data = d;
}

void Node::showData()
{
	cout << data << endl;
}



class Stack {
private:
    Node* head;
public:
    Stack();
    int push(int);
    int pop();
    int top();
    bool isEmpty();
};

Stack::Stack() {
    head = NULL;
   
}
int Stack::push(int d) {
    Node* ptr = new Node(d);
    ptr->setNext(head);
    head = ptr;
    return head->getData();
}

bool Stack::isEmpty() {
    return head == NULL;
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "List is empty" << endl;
        return -1;
    }
    int data = head->getData();
    Node* temp = head;
    head = head->getNext();
    delete temp;
    
    return data;
}

int Stack::top() {
    if (isEmpty()) {
        cout << "List is empty" << endl;
        return -1;
    }

    return head->getData();
}


int evaluatePostFix(string expression) {
    Stack s;
    int i = 0;
    while (expression[i] != '\0')
    {
        if (isdigit(expression[i])) {
            s.push((expression[i] - '0'));
            
        }
        else {
            double opr2 = s.pop();
            double opr1 = s.pop();
            double result;
            switch (expression[i])
            {
            case '+':
                result = opr1 + opr2;
                break;
            case '-':
                result = opr1 - opr2;
                break;
            case '*':
                result = opr1 * opr2;
                break;
            case '/':
                result = opr1 / opr2;
                break;
            case '^':
                result = pow(opr1, opr2);
                break;
            default:
                
                break;
            }
            s.push(result);
        }
        i++;
    }
    return s.pop();
}


int main() {
     string data = "623+-382/+*2^3+";
     double result = evaluatePostFix(data);
     cout << result;
	

	return 0;
}