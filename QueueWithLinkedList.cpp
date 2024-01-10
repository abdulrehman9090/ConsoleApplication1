#include <iostream>
#include <stdexcept>

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
class Queue {
private:
    Node<T>* front;
    Node<T>* rear;

public:
    Queue();
    ~Queue();
    void enqueue(T data);
    void dequeue();
    T frontElement() const;
    bool isEmpty() const;
};

template <typename T>
Queue<T>::Queue() : front(nullptr), rear(nullptr) {}

template <typename T>
Queue<T>::~Queue() {
    while (!isEmpty()) {
        dequeue();
    }
}

template <typename T>
void Queue<T>::enqueue(T data) {
    Node<T>* newNode = new Node<T>(data);
    if (isEmpty()) {
        front = rear = newNode;
    }
    else {
        rear->setNext(newNode);
        rear = newNode;
    }
}

template <typename T>
void Queue<T>::dequeue() {
    if (isEmpty()) {
        throw std::underflow_error("Queue underflow");
    }

    Node<T>* temp = front;
    front = front->getNext();
    delete temp;

    if (front == nullptr) {
        rear = nullptr; // Reset rear when the last element is dequeued
    }
}

template <typename T>
T Queue<T>::frontElement() const {
    if (isEmpty()) {
        throw std::underflow_error("Queue is empty");
    }
    return front->getData();
}

template <typename T>
bool Queue<T>::isEmpty() const {
    return front == nullptr;
}

int main() {
    using namespace std;

    // Demonstrate usage with integers
    Queue<int> intQueue;
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);

    cout << "Front element of intQueue: " << intQueue.frontElement() << endl;

    intQueue.dequeue();
    cout << "Front element after dequeue: " << intQueue.frontElement() << endl;

    // Demonstrate usage with strings
    Queue<string> stringQueue;
    stringQueue.enqueue("Hello");
    stringQueue.enqueue("World");
    stringQueue.enqueue("!");

    cout << "Front element of stringQueue: " << stringQueue.frontElement() << endl;

    stringQueue.dequeue();
    cout << "Front element after dequeue: " << stringQueue.frontElement() << endl;

    return 0;
}


//#include <iostream>
//#include <string>
//
//class TreeNode {
//public:
//    std::string word;
//    std::string meaning;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode(const std::string& w, const std::string& m)
//        : word(w), meaning(m), left(nullptr), right(nullptr) {}
//};
//
//class DictionaryTree {
//private:
//    TreeNode* root;
//
//    TreeNode* insert(TreeNode* node, const std::string& word, const std::string& meaning) {
//        if (!node) {
//            return new TreeNode(word, meaning);
//        }
//
//        if (word < node->word) {
//            node->left = insert(node->left, word, meaning);
//        }
//        else if (word > node->word) {
//            node->right = insert(node->right, word, meaning);
//        }
//
//        return node;
//    }
//
//    void displayTree(TreeNode* node, int level = 0) {
//        if (node) {
//            for (int i = 0; i < level; ++i) {
//                std::cout << "  "; // Indentation for better visualization
//            }
//
//            std::cout << node->word << ": " << node->meaning << std::endl;
//
//            displayTree(node->left, level + 1);
//            displayTree(node->right, level + 1);
//        }
//    }
//
//public:
//    DictionaryTree() : root(nullptr) {}
//
//    void addWord(const std::string& word, const std::string& meaning) {
//        root = insert(root, word, meaning);
//    }
//
//    void displayDictionary() {
//        std::cout << "Dictionary Tree:" << std::endl;
//        displayTree(root);
//    }
//
//    ~DictionaryTree() {
//        
//    }
//};
//
//int main() {
//    DictionaryTree dictionary;
//
//    // Adding words and meanings
//    dictionary.addWord("apple", "a round fruit with red or green skin and a whitish interior");
//    dictionary.addWord("car", "a four-wheeled motor vehicle used for transportation");
//
//    // Displaying the dictionary tree
//    dictionary.displayDictionary();
//
//    return 0;
//}

