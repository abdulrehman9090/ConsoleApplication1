//#include<iostream>
//using namespace std;
//
//
//template<class T>
//class TreeNode {
//private:
//	TreeNode* leftChild;
//	TreeNode* rightChild;
//	T* data;
//public:
//	TreeNode();
//	TreeNode(T* data);
//	TreeNode* getLeft();
//	TreeNode* getRight();
//	T* getData();
//	void setLeft(TreeNode* node);
//	void setRight(TreeNode* node);
//	void setData(const T* data);
//};
//
//template<class T>
//TreeNode<T>::TreeNode() {
//	this->leftChild = this->rightChild = NULL;
//	this->data = NULL;
//
//}
//
//template<class T>
//TreeNode<T>::TreeNode(T* data) {
//	this->leftChild = this->rightChild = NULL;
//	this->data = data;
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
//void TreeNode<T>::setData(const T* data) {
//	this->data = data;
//}
//
//
//
//
//void insert(const char* info, TreeNode<const char>* root) // info is point to data
//{
//	TreeNode<const char>* node = new TreeNode<const char>(info);
//	TreeNode<const char>* p, * q;
//
//	p = q = root;
//
//	while (q != NULL && strcmp(info, p->getData()) != 0) // q will be NULL when it is at bottom (leaf)
//	{
//		p = q;
//		if (strcmp(info, p->getData()) < 0) {
//			q = p->getLeft();
//		}
//		else {
//			q = p->getRight();
//		}
//	}
//
//
//	if (strcmp(info, p->getData()) == 0) {
//		cout << "attemp to insert dublicate" << endl;
//		delete node;
//	}
//	else if (strcmp(info, p->getData()) < 0) {
//		p->setLeft(node);
//	}
//	else {
//		p->setRight(node);
//	}
//
//}
//
//void inorderTraversal(TreeNode<const char>* root) {
//	if (root) {
//		inorderTraversal(root->getLeft());
//		cout << root->getData() << " ";
//		inorderTraversal(root->getRight());
//	}
//}
//
//
//
//
//int main() {
//
//
//	//int x[6] = { 14, 15, 4, 9, 7, -1 };
//	const char* word[] = { "babble", "fable", "jacket",
//"backup", "eagle","daily","gain","bandit","abandon",
//  "abash","accuse","economy","adhere","advise","cease",
//  "debunk","feeder","genius","fetch","chain", NULL };
//	TreeNode<const char>* root = new TreeNode<const char>();
//	root->setData(word[0]);
//
//	// x[i] > 0 condition because there is no array.length method so we put -1 in end of array
//	for (int i = 1; word[i] != NULL; i++)
//	{
//		insert(word[i], root);
//	}
//
//	inorderTraversal(root);
//
//
//
//
//
//
//
//	return 0;
//}