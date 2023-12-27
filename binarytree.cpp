//#include <iostream>
//
//template <typename T>
//class TreeNode {
//public:
//    T data;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode(T value) : data(value), left(nullptr), right(nullptr) {}
//};
//
//template <typename T>
//class BinaryTree {
//private:
//    TreeNode<T>* root;
//
//    // Helper functions
//    void destroyTree(TreeNode<T>* node);
//    void insertHelper(TreeNode<T>*& node, T value);
//    void inOrderTraversal(TreeNode<T>* node);
//    void preOrderTraversal(TreeNode<T>* node);
//    void postOrderTraversal(TreeNode<T>* node);
//
//public:
//    BinaryTree();
//    ~BinaryTree();
//
//    // Public methods
//    void insert(T value);
//    void remove(T value);  // Additional method for removing a value
//    void inOrder();
//    void preOrder();
//    void postOrder();
//   
//    bool isEmpty();
//};
//
//// Constructor
//template <typename T>
//BinaryTree<T>::BinaryTree() : root(nullptr) {}
//
//// Destructor
//template <typename T>
//BinaryTree<T>::~BinaryTree() {
//    destroyTree(root);
//}
//
//// Recursive helper function to destroy the tree
//template <typename T>
//void BinaryTree<T>::destroyTree(TreeNode<T>* node) {
//    if (node != nullptr) {
//        destroyTree(node->left);
//        destroyTree(node->right);
//        delete node;
//    }
//}
//
//// Public method to insert a value into the binary tree
//template <typename T>
//void BinaryTree<T>::insert(T value) {
//    insertHelper(root, value);
//}
//
//// Recursive helper function to insert a value into the binary tree
//template <typename T>
//void BinaryTree<T>::insertHelper(TreeNode<T>*& node, T value) {
//    if (node == nullptr) {
//        node = new TreeNode<T>(value);
//    }
//    else {
//        if (value < node->data) {
//            insertHelper(node->left, value);
//        }
//        else {
//            insertHelper(node->right, value);
//        }
//    }
//}
//
//// Public method to remove a value from the binary tree
//template <typename T>
//void BinaryTree<T>::remove(T value) {
//    // Implementation of removal is not provided in this basic example.
//    // It involves finding the node, handling cases with 0, 1, or 2 children, and adjusting the tree structure.
//    // Depending on the case, the node may be replaced with its in-order predecessor or successor.
//    // It's a more complex operation and requires careful handling of various cases.
//    // Implementing it is beyond the scope of this simple example.
//    // If you need removal, you might want to explore more advanced tree structures, such as AVL trees or red-black trees.
//    // These structures maintain balance during insertion and removal, ensuring efficient operations in various scenarios.
//    std::cout << "Removal not implemented in this example." << std::endl;
//}
//
//// Public method for in-order traversal
//template <typename T>
//void BinaryTree<T>::inOrder() {
//    inOrderTraversal(root);
//    std::cout << std::endl;
//}
//
//// Recursive helper function for in-order traversal
//template <typename T>
//void BinaryTree<T>::inOrderTraversal(TreeNode<T>* node) {
//    if (node != nullptr) {
//        inOrderTraversal(node->left);
//        std::cout << node->data << " ";
//        inOrderTraversal(node->right);
//    }
//}
//
//// Public method for pre-order traversal
//template <typename T>
//void BinaryTree<T>::preOrder() {
//    preOrderTraversal(root);
//    std::cout << std::endl;
//}
//
//// Recursive helper function for pre-order traversal
//template <typename T>
//void BinaryTree<T>::preOrderTraversal(TreeNode<T>* node) {
//    if (node != nullptr) {
//        std::cout << node->data << " ";
//        preOrderTraversal(node->left);
//        preOrderTraversal(node->right);
//    }
//}
//
//// Public method for post-order traversal
//template <typename T>
//void BinaryTree<T>::postOrder() {
//    postOrderTraversal(root);
//    std::cout << std::endl;
//}
//
//// Recursive helper function for post-order traversal
//template <typename T>
//void BinaryTree<T>::postOrderTraversal(TreeNode<T>* node) {
//    if (node != nullptr) {
//        postOrderTraversal(node->left);
//        postOrderTraversal(node->right);
//        std::cout << node->data << " ";
//    }
//}
//
//
//
//
//
//// Public method to check if the binary tree is empty
//template <typename T>
//bool BinaryTree<T>::isEmpty() {
//    return root == nullptr;
//}
//
//class Student {
//private:
//    std::string name;
//    int rollNumber;
//
//public:
//    // Constructor
//    Student(const std::string& studentName, int studentRollNumber) : name(studentName), rollNumber(studentRollNumber) {}
//
//    // Getter functions
//    std::string getName() const {
//        return name;
//    }
//
//    int getRollNumber() const {
//        return rollNumber;
//    }
//
//    // Setter functions (optional)
//    void setName(const std::string& studentName) {
//        name = studentName;
//    }
//
//    void setRollNumber(int studentRollNumber) {
//        rollNumber = studentRollNumber;
//    }
//};
//
//
//int main() {
//    BinaryTree<int> intTree;
//    intTree.insert(50);
//    intTree.insert(30);
//    intTree.insert(70);
//    intTree.insert(20);
//    intTree.insert(40);
//    intTree.insert(60);
//    intTree.insert(80);
//
//    std::cout << "In-order traversal: ";
//    intTree.inOrder();
//
//    std::cout << "Pre-order traversal: ";
//    intTree.preOrder();
//
//    std::cout << "Post-order traversal: ";
//    intTree.postOrder();
//
//
//
//    
//
//    return 0;
//}
