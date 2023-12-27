//#include<iostream>
//#include<string>
//#include<ctype.h>
//#include<math.h>
//using namespace std;
//
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
//int evaluatePostFix(string expression) {
//    Stack s;
//    int i = 0;
//    while (expression[i] != '\0')
//    {
//        if (isdigit(expression[i])) {
//            s.push((expression[i] - '0'));
//            
//        }
//        else {
//            double opr2 = s.pop();
//            double opr1 = s.pop();
//            double result;
//            switch (expression[i])
//            {
//            case '+':
//                result = opr1 + opr2;
//                break;
//            case '-':
//                result = opr1 - opr2;
//                break;
//            case '*':
//                result = opr1 * opr2;
//                break;
//            case '/':
//                result = opr1 / opr2;
//                break;
//            case '^':
//                result = pow(opr1, opr2);
//                break;
//            default:
//                
//                break;
//            }
//            s.push(result);
//        }
//        i++;
//    }
//    return s.pop();
//}
//
//
//int main() {                                       
//	
//     std::string postfixExpression;
//     std::cout << "Enter a postfix expression: ";
//     std::getline(std::cin, postfixExpression);
//
//     double result = evaluatePostFix(postfixExpression);
//
//     if (!std::isnan(result)) {
//         std::cout << "Result: " << result << std::endl;
//     }
//	return 0;
//}

//#include <iostream>
//
//class Node {
//public:
//    int data;
//    Node* left;
//    Node* right;
//
//    Node(int value) {
//        data = value;
//        left = nullptr;
//        right = nullptr;
//    }
//};
//
//class BinaryTree {
//private:
//    Node* root;
//
//public:
//    BinaryTree() {
//        root = nullptr;
//    }
//
//    void insert(int value) {
//        root = insertRecursive(root, value);
//    }
//
//    void remove(int value) {
//        root = removeRecursive(root, value);
//    }
//
//    void inorderTraversal() {
//        std::cout << "Inorder Traversal: ";
//        inorderTraversalRecursive(root);
//        std::cout << std::endl;
//    }
//
//private:
//    Node* insertRecursive(Node* current, int value) {
//        if (current == nullptr) {
//            return new Node(value);
//        }
//
//        if (value < current->data) {
//            current->left = insertRecursive(current->left, value);
//        }
//        else if (value > current->data) {
//            current->right = insertRecursive(current->right, value);
//        }
//
//        return current;
//    }
//
//    Node* findMin(Node* node) {
//        while (node->left != nullptr) {
//            node = node->left;
//        }
//        return node;
//    }
//
//    Node* removeRecursive(Node* current, int value) {
//        if (current == nullptr) {
//            return nullptr;
//        }
//
//        if (value < current->data) {
//            current->left = removeRecursive(current->left, value);
//        }
//        else if (value > current->data) {
//            current->right = removeRecursive(current->right, value);
//        }
//        else {
//            if (current->left == nullptr) {
//                Node* temp = current->right;
//                delete current;
//                return temp;
//            }
//            else if (current->right == nullptr) {
//                Node* temp = current->left;
//                delete current;
//                return temp;
//            }
//
//            Node* temp = findMin(current->right);
//            current->data = temp->data;
//            current->right = removeRecursive(current->right, temp->data);
//        }
//
//        return current;
//    }
//
//    void inorderTraversalRecursive(Node* current) {
//        if (current != nullptr) {
//            inorderTraversalRecursive(current->left);
//            std::cout << current->data << " ";
//            inorderTraversalRecursive(current->right);
//        }
//    }
//};
//
//int main() {
//    BinaryTree tree;
//
//    // Insert nodes into the tree
//    tree.insert(50);
//    tree.insert(30);
//    tree.insert(20);
//    tree.insert(40);
//    tree.insert(70);
//    tree.insert(60);
//    tree.insert(80);
//
//    // Perform inorder traversal
//    tree.inorderTraversal();
//
//    // Remove a node and perform inorder traversal again
//    tree.remove(30);
//    tree.inorderTraversal();
//
//    return 0;
//}