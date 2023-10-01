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
//    Stack stack(4);
//    cout << stack.push(10) << endl;
//    cout<< stack.push(20)<<endl;
//    cout<< stack.push(30)<<endl;
//    cout << stack.push(40) << endl;
//    stack.push(12);
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