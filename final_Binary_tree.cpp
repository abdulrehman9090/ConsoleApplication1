//#include<iostream>
//using namespace std;
//
//
//// queue start 
//
//
//#include <iostream>
//using namespace std;
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
//Node<T>::Node(T d) : data(d), next(nullptr) {}
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
//    std::cout << data << " ";
//}
//
//
//template <typename T>
//class QueueWithLinkedList {
//private:
//    Node<T>* front;
//    Node<T>* rear;
//public:
//    QueueWithLinkedList();
//    void Enqueue(T data);
//    T Dequeue();
//    bool isEmpty();
//    T front_element();
//};
//
//template<typename T>
//QueueWithLinkedList<T>::QueueWithLinkedList()
//{
//    front = rear = NULL;
//}
//
//template<typename T>
//void QueueWithLinkedList<T>::Enqueue(T data)
//{
//    Node<T>* temp = new Node<T>(data);
//
//    if (isEmpty()) {
//        front = rear = temp;
//        return;
//    }
//
//    rear->setNext(temp);
//    rear = temp;
//}
//
//template<typename T>
//T QueueWithLinkedList<T>::Dequeue()
//{
//    if (isEmpty()) {
//        cout << "Cannot Dequeue. Empty" << endl;
//        return T();
//    }
//
//    Node<T>* temp = front;
//    T data = temp->getData();
//    front = front->getNext();
//    delete temp;
//    return data;
//}
//
//template<typename T>
//bool QueueWithLinkedList<T>::isEmpty()
//{
//    return front == NULL;
//}
//
//template<typename T>
//T QueueWithLinkedList<T>::front_element()
//{
//    return front->getData();
//}
//
//
//
//
//
//
//// queue end
//template<class T>
//class TreeNode {
//private:
//	TreeNode* leftChild;
//	TreeNode* rightChild;
//	T* data;
//public:
//	TreeNode();
//	TreeNode(T *data);
//	TreeNode* getLeft();
//	TreeNode* getRight();
//	T* getData();
//	void setLeft(TreeNode* node);
//	void setRight(TreeNode* node);
//	void setData(T* data);
//};
//
//template<class T>
//TreeNode<T>::TreeNode() {
//	 this->leftChild = this->rightChild = NULL;
//	 this->data = NULL;
//	
//}
//
//template<class T>
//TreeNode<T>::TreeNode(T *data) {
//	 this->leftChild = this->rightChild = NULL;
//	 this->data = data;
//}
//
//template<class T>
//TreeNode<T>* TreeNode<T>::getLeft() {
//	return this->leftChild;
//}
//
//
//template<class T>
//TreeNode<T>* TreeNode<T>::getRight() {
//	return this->rightChild;
//}
//
//
//template<class T>
//T* TreeNode<T>::getData() {
//	return this->data;
//}
//
//
//template<class T>
//void TreeNode<T>::setLeft(TreeNode* node) {
//	this->leftChild = node;
//}
//
//
//template<class T>
//void TreeNode<T>::setRight(TreeNode* node) {
//	this->rightChild = node;
//}
//
//
//template<class T>
//void TreeNode<T>::setData(T* data) {
//	this->data = data;
//}
//
//void insert(TreeNode<int>* root, int* info) // info is point to data
//{
//	TreeNode<int>* node = new TreeNode<int>(info);
//	TreeNode<int> *p, *q;
//
//	p = q = root;
//
//	while (q != NULL && *info != *(p->getData())) // q will be NULL when it is at bottom (leaf)
//	{
//		p = q;
//		if (*info < *(p->getData())) {
//			q = p->getLeft();
//		}
//		else {
//			q = p->getRight();
//		}
//	}
//
//
//	if (*info == *(p->getData())) {
//		cout << "attemp to insert dublicate" << endl;
//		delete node;
//	}
//	else if (*info < *(p->getData())) {
//		p->setLeft(node);
//	}
//	else {
//		p->setRight(node);
//	}
//
//}
//
//void inorderTraversal(TreeNode<int>* root) {
//	if (root) {
//		inorderTraversal(root->getLeft());
//		cout <<* root->getData() << " ";
//		inorderTraversal(root->getLeft());
//	}
//}
//
//
//void levelOrderTraversal(TreeNode<int>* treeNode) {
//	QueueWithLinkedList< TreeNode<int>*> queue;
//	if (treeNode == NULL) return;
//
//	queue.Enqueue(treeNode);
//
//	while (!queue.isEmpty())
//	{
//		treeNode = queue.Dequeue();
//
//		cout << *(treeNode->getData()) << " ";
//
//		if (treeNode->getLeft() != NULL) {
//			queue.Enqueue(treeNode->getLeft());
//		}
//		if (treeNode->getRight() != NULL) {
//			queue.Enqueue(treeNode->getRight());
//		}
//		cout << endl;
//	}
//}
//
//
//TreeNode<int>* findMin(TreeNode<int>* tree)
//{
//	if (tree == NULL)
//		return NULL;
//	if (tree->getLeft() == NULL)
//		return tree; // this is it.
//	return findMin(tree->getLeft());
//}
//
//
//TreeNode<int>* remove(TreeNode<int>* tree, int info)
//{
//	TreeNode<int>* t;
//	int cmp = info - *(tree->getData());
//
//	// If the value to be deleted is smaller, go to the left subtree
//	if (cmp < 0) {
//		t = remove(tree->getLeft(), info);
//		tree->setLeft(t);
//	}
//	// If the value to be deleted is larger, go to the right subtree
//	else if (cmp > 0) {
//		t = remove(tree->getRight(), info);
//		tree->setRight(t);
//	}
//	else {
//		// Case 1: Node with only one child or no child
//		if (tree->getLeft() == NULL) {
//			TreeNode<int>* nodeToDelete = tree;
//			tree = tree->getRight();
//			delete nodeToDelete;
//		}
//		else if (tree->getRight() == NULL) {
//			TreeNode<int>* nodeToDelete = tree;
//			tree = tree->getLeft();
//			delete nodeToDelete;
//		}
//		// Case 2: Node with two children, replace with inorder successor
//		else {
//			TreeNode<int>* minNode;
//			minNode = findMin(tree->getRight());
//			tree->setData(minNode->getData());
//			t = remove(tree->getRight(), *(minNode->getData()));
//			tree->setRight(t);
//		}
//	}
//
//	return tree;
//}
//
//
//int main() {
//
//	TreeNode<int>* root = new TreeNode<int>();
//	int x[16] = { 14, 15, 4, 11, -1 };
//
//	root->setData(&x[0]);
//
//	// x[i] > 0 condition because there is no array.length method so we put -1 in end of array
//	for (int i = 1; x[i] > 0; i++)
//	{
//		insert(root, &x[i]);
//	}
//
//	/*   14
//		/ \
//		4   15
//		/
//		11
//		
//		*/
//
//
//
//
//	levelOrderTraversal(root); // 14, 4, 15, 11
//
//
//	remove(root, 11);
//
//
//	/*   14
//		/ \
//		4   15
//		
//
//		*/
//
//	levelOrderTraversal(root); // 14, 4, 15
//
//
//
//	
//
//	return 0;
//}