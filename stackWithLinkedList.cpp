//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename T>
//class Node {
//private:
//    T data;
//    Node* next;
//
//public:
//    Node(T d);
//    Node* getNext();
//    void setNext(Node* ptr);
//    T getData();
//    void setData(T d);
//    void showData();
//};
//
//template <typename T>
//Node<T>::Node(T d) {
//    data = d;
//    next = nullptr;
//}
//
//template <typename T>
//Node<T>* Node<T>::getNext() {
//    return next;
//}
//
//template <typename T>
//void Node<T>::setNext(Node* ptr) {
//    next = ptr;
//}
//
//template <typename T>
//T Node<T>::getData() {
//    return data;
//}
//
//template <typename T>
//void Node<T>::setData(T d) {
//    data = d;
//}
//
//template <typename T>
//void Node<T>::showData() {
//    cout << data << endl;
//}
//
//template <typename T>
//class Stack {
//private:
//    Node<T>* head;
//
//public:
//    Stack();
//    T push(T);
//    T pop();
//    T top();
//    bool isEmpty();
//};
//
//template <typename T>
//Stack<T>::Stack() {
//    head = nullptr;
//}
//
//template <typename T>
//T Stack<T>::push(T d) {
//    Node<T>* ptr = new Node<T>(d);
//    ptr->setNext(head);
//    head = ptr;
//    return head->getData();
//}
//
//template <typename T>
//bool Stack<T>::isEmpty() {
//    return head == nullptr;
//}
//
//template <typename T>
//T Stack<T>::pop() {
//    if (isEmpty()) {
//        cout << "Stack is empty" << endl;
//        return T(); // Return default value for the type T
//    }
//    T data = head->getData();
//    Node<T>* temp = head;
//    head = head->getNext();
//    delete temp;
//    return data;
//}
//
//template <typename T>
//T Stack<T>::top() {
//    if (isEmpty()) {
//        cout << "Stack is empty" << endl;
//        return T(); // Return default value for the type T
//    }
//    return head->getData();
//}
//
//int main() {
//    Stack<int> intStack;
//    cout << intStack.push(10) << endl;
//    cout << intStack.push(20) << endl;
//    cout << intStack.push(30) << endl;
//    cout << intStack.push(40) << endl;
//
//    cout << intStack.top() << endl;
//
//    cout << intStack.pop() << endl;
//    cout << intStack.pop() << endl;
//    cout << intStack.pop() << endl;
//    cout << intStack.pop() << endl;
//
//    
//
//    return 0;
//}
//
//





#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
private:
    Node* root;

public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(int value) {
        root = insertRecursive(root, value);
    }

    void remove(int value) {
        root = removeRecursive(root, value);
    }

    void inorderTraversal() {
        inorderTraversalRecursive(root);
        std::cout << std::endl;
    }

private:
    Node* insertRecursive(Node* current, int value) {
        if (current == nullptr) {
            return new Node(value);
        }

        if (value < current->data) {
            current->left = insertRecursive(current->left, value);
        }
        else if (value > current->data) {
            current->right = insertRecursive(current->right, value);
        }

        return current;
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

 

    Node* removeRecursive(Node* current, int value) {
        if (current == nullptr) {
            return nullptr;
        }

        if (value < current->data) {
            current->left = removeRecursive(current->left, value);
        }
        else if (value > current->data) {
            current->right = removeRecursive(current->right, value);
        }
        else {
            // Node with only one child or no child
            if (current->left == nullptr) {
                Node* temp = current->right;
                delete current;
                return temp;
            }
            else if (current->right == nullptr) {
                Node* temp = current->left;
                delete current;
                return temp;
            }

            // Node with two children, get the inorder successor
            Node* temp = findMin(current->right);

            // Copy the inorder successor's content to this node
            current->data = temp->data;

            // Delete the inorder successor
            current->right = removeRecursive(current->right, temp->data);
        }

        return current;
    }

    void inorderTraversalRecursive(Node* current) {
        if (current != nullptr) {
            inorderTraversalRecursive(current->left);
            std::cout << current->data << " ";
            inorderTraversalRecursive(current->right);
        }
    }
};

//int main() {
//    BinaryTree tree;
//
//    tree.insert(50);
//    tree.insert(30);
//    tree.insert(20);
//    tree.insert(40);
//    tree.insert(70);
//    tree.insert(60);
//    tree.insert(80);
//
//    std::cout << "Inorder Traversal: ";
//    tree.inorderTraversal();
//
//    tree.remove(30);
//
//    std::cout << "Inorder Traversal after removing 30: ";
//    tree.inorderTraversal();
//
//    return 0;
//}

