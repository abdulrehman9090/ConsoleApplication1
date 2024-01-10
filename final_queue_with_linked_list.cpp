#include <iostream>
using namespace std;
template <typename T>
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

template <typename T>
Node<T>::Node(T d) : data(d), next(nullptr) {}

template <typename T>
Node<T>* Node<T>::getNext() {
    return next;
}

template <typename T>
void Node<T>::setNext(Node* ptr) {
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
    std::cout << data << " ";
}


template <typename T>
class QueueWithLinkedList {
private:
    Node<T>* front;
    Node<T>* rear;
public:
    QueueWithLinkedList();
    void Enqueue(T data);
    T Dequeue();
    bool isEmpty();
    T front_element();
};

template<typename T>
QueueWithLinkedList<T>::QueueWithLinkedList()
{
    front = rear = NULL;
}

template<typename T>
void QueueWithLinkedList<T>::Enqueue(T data)
{
    Node<T>* temp = new Node<T>(data);

    if (isEmpty()) {
        front = rear = temp;
        return;
    }

    rear->setNext(temp);
    rear = temp;
}

template<typename T>
T QueueWithLinkedList<T>::Dequeue()
{
    if (isEmpty()) {
        cout << "Cannot Dequeue. Empty" << endl;
        return T();
    }

    Node<T>* temp = front;
    T data = temp->getData();
    front = front->getNext();
    delete temp;
    return data;
}

template<typename T>
bool QueueWithLinkedList<T>::isEmpty()
{
    return front == NULL;
}

template<typename T>
T QueueWithLinkedList<T>::front_element()
{
    return front->getData();
}


int main() {
    QueueWithLinkedList<int> data;
    data.Enqueue(10);
    data.Enqueue(20);
    data.Enqueue(30);
    cout << data.Dequeue();
    cout << data.front_element();
    cout << data.Dequeue();
    cout << data.front_element();
    cout << data.Dequeue();
 
    
    return 0;
}
