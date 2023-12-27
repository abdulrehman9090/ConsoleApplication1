//#include <iostream>
//#include <string>
//using namespace std;
//
//
//
//
//class Stack {
//private:
//    int* p;
//    int size;
//    int length;
//    int current;
//public:
//    Stack(int);
//    int push(int);
//    int pop();
//    int top();
//    bool isEmpty();
//    bool isFull();
//};
//
//Stack::Stack(int l) {
//    if (l > 0) {
//        length = l;
//        size = 0;
//        current = -1;
//        p = new int[length];
//    }
//    else {
//        cout << "List length should be greater than 1" << endl;
//    }
//}
//
//bool Stack::isEmpty() {
//    return size == 0;
//}
//
//bool Stack::isFull() {
//    return size == length;
//}
//
//int Stack::push(int d) {
//    if (isFull()) {
//        cout << "List is full" << endl;
//        return -1;
//    }
//    p[++current] = d;
//    size++;
//    return d;
//}
//
//int Stack::pop() {
//    if (isEmpty()) {
//        cout << "List is empty" << endl;
//        return -1;
//    }
//    size--;
//    return p[current--];
//}
//
//int Stack::top() {
//    if (isEmpty()) {
//        cout << "List is empty" << endl;
//        return -1;
//    }
//
//    return p[current];
//}
//
//
//
//int main() {
//    Stack* s = new Stack(4);
//    cout << s->push(5) << endl;
//    cout << s->push(10) << endl;
//    cout << s->push(15) << endl;
//    cout << s->push(20) << endl;
//    cout << s->push(25) << endl;
//    cout << s->pop() << endl;
//    cout << s->pop() << endl;
//    cout << s->push(30) << endl;
//    cout << s->top() << endl;
//
//    return 0;
//}