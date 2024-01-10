//#include <iostream>
//#include <string>
//using namespace std;
//class List {
//public:
//    List(int);
//    List();
//    ~List();
//    void printList();
//    void add(int);
//    void next();
//    void back();
//    void tail();
//    void update(int, int);
//    void remove(int);
//    void clear();
//    void insert(int, int);
//    int lengthFunction();
//    int get(int);
//    void find(int);
//    void copyList(const List&);
//private:
//    int* p;
//    int size;
//    int length;
//    int current;
//};
//
//
//
//List::List() {
//    //default constructor
//}
//List::List(int l) {
//    if (l > 0) {
//        length = l + 1;
//        size = 0;
//        current = 0;
//        p = new int[length];
//    }
//    else {
//        cout << "List length should be greater than 1" << endl;
//    }
//
//}
//
//int List::lengthFunction() {
//    return length - 1;
//}
//
//
//
//void List::copyList(const List& passingList) {
//    this->length = passingList.length;
//    this->size = passingList.size;
//    this->p = new int[passingList.length];
//    for (int i = 1; i <= size; i++) {
//        this->p[i] = passingList.p[i];
//    }
//    this->current = size;
//}
//
//
//
//void List::update(int newValue, int position) {
//    if (position > 0 && position <= size) {
//        p[position] = newValue;
//        return;
//    }
//
//    cout << "Index is out of range 1..." << size;
//}
//
//
//void List::find(int value) {
//    for (int i = 1; i <= size; i++)
//    {
//        if (p[i] == value) {
//            cout << "Value found at index : " << i << endl;
//            return;
//        }
//    }
//    cout << "Value not found " << endl;
//    return;
//
//}
//
//void List::remove(int index) {
//    if (index > 0 && index <= size) {
//        if (index == size) {
//            size--;
//            p[index] = -1;
//        }
//        else {
//            current = index;
//            int loopCount = size - current;
//            this->next();
//
//            for (int i = 0; i <= loopCount; i++) {
//                p[current - 1] = p[current];
//                this->next();
//            }
//            size--;
//
//        }
//
//
//
//
//        return;
//    }
//    cout << "Index is out of range 1..." << size << endl;
//}
//
//
//int List::get(int index) {
//    if (index > 0 && index <= size) {
//        return p[index];
//    }
//    return -1;
//}
//
//void List::insert(int index, int value) {
//    if (index > 0 && index <= size) {
//        if (size < length - 1) {
//            this->tail();
//            int loopCount = (size - index) + 1;
//            for (int i = 0; i <= loopCount; i++) {
//                p[current + 1] = p[current];
//                this->back();
//            }
//
//            p[index] = value;
//            size++;
//        }
//        else {
//            cout << "List is full" << endl;
//        }
//        return;
//    }
//    cout << "Index is out of range 1..." << size << endl;
//}
//
//void List::clear() {
//    current = 0;
//    size = 0;
//    for (int i = 1; i <= size; i++) {
//        p[i] = -1;
//    }
//}
//void List::next() {
//    if (current < length) {
//        current++;
//    }
//}
//
//void List::tail() {
//    current = size;
//}
//
//void List::back() {
//    if (current > 0) {
//        current--;
//    }
//}
//void List::add(int element) {
//    if (size == length - 1) {
//        cout << "List is full" << endl;
//        return;
//    }
//
//    if (current == size) {
//        this->next();
//    }
//    else {
//        this->tail();
//        current++;
//    }
//
//
//    p[current] = element;
//    size++;
//
//}
//
//
//
//
//
//
//
//
//List::~List() {
//
//    delete[] p;
//}
//void List::printList() {
//    if (size == 0) {
//        cout << "List is empty" << endl;
//        return;
//    }
//
//    for (int i = 1; i <= size; i++)
//        cout << this->p[i] << " ";
//    cout << endl;
//}
//
//int main() {
//    List list(4), l2(4);
//
//    list.add(10);
//    list.add(130);
//    list.add(160);
//    list.printList();
//
//
//    l2.add(3);
//    l2.add(4);
//    l2.add(5);
//    l2.printList();
//
//
//    l2.copyList(list);
//    l2.printList();
//    list.printList();
//
//    return 0;
//}