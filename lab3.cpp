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
//    bool push(int);
//    int pop();
//    int top();
//    bool isEmpty();
//    bool isFull();
//    int totalElement();
//    ~Stack();
//    void display();
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
//Stack::~Stack() {
//    delete p;
//}
//
//void Stack::display() {
//    cout << "Stack : ";
//    for (int i = 0; i < size; i++) {
//        cout << p[i] << "   ";
//    }
//}
//
//bool Stack::isEmpty() {
//    return size == 0;
//}
//
//
//int Stack::totalElement() {
//    return this->size;
//}
//
//
//bool Stack::isFull() {
//    return size == length;
//}
//
//bool Stack::push(int d) {
//    if (isFull()) {
//        return 0;
//    }
//    p[++current] = d;
//    size++;
//    return 1;
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
//    Stack* s = new Stack(3);
//    cout << s->push(5) << endl;
//    cout << s->push(10) << endl;
//    cout << s->push(15) << endl;
//    cout << s->push(20) << endl;
//    cout << s->push(25) << endl;
//    cout << s->pop() << endl;
//    cout << s->pop() << endl;
//    cout << s->push(30) << endl;
//    cout << s->top() << endl;
//    cout << s->totalElement() << endl;
//    s->display();
//
//    return 0;
//}