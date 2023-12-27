//#include <iostream>
//using namespace std;
//template <typename T>
//class CircularQueue {
//private:
//	T rear, front;
//	int size, noOfElements;
//	int* p;
//public:
//	CircularQueue(int);
//	bool isFull();
//	bool isEmpty();
//	void enqueue(T data);
//	T deQueue();
//};
//
//template <typename T>
//CircularQueue<T>::CircularQueue<T>(int s)
//{
//	if (s <= 0) {
//		cout << "Size must be greater than 0" << endl;
//	}
//	else {
//		front = rear = -1;
//		p = new int[s];
//		size = s;
//		noOfElements = 0;
//	}
//}
//
//template <typename T>
//bool CircularQueue<T>::isFull() {
//	return size == noOfElements;
//}
//
//template <typename T>
//bool CircularQueue<T>::isEmpty() {
//	return noOfElements == 0;
//}
//
//
//template <typename T>
//void CircularQueue<T>::enqueue(T data) {
//	if (isFull()) {
//		cout << "Queue is Full" << endl;
//		return;
//	}
//
//	if (isEmpty()) {
//		rear = front = 0;
//	}
//	else {
//		rear = (rear + 1) % size;
//	}
//	p[rear] = data;
//	noOfElements++;
//}
//
//
//template <typename T>
//T CircularQueue<T>::deQueue() {
//	if (isEmpty()) {
//		cout << "Queue is empty" << endl;
//		return T();
//	}
//	T temp = p[front];
//	
//	if (rear == front) {
//		front = rear = -1;// reseting to instial state
//	}
//	else {
//		front = (front + 1) % size;
//	}
//	noOfElements--;
//	return temp;
//}
//
//
//int main() {
//
//	CircularQueue<int> queue(3);
//	queue.enqueue(10);
//	queue.enqueue(20);
//	cout << queue.deQueue() << endl;
//	cout << queue.deQueue() << endl;
//	queue.enqueue(30);
//	queue.enqueue(40);
//	cout << queue.deQueue() << endl;
//	cout << queue.deQueue() << endl;
//	return 0;
//}