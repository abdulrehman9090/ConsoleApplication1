#include<iostream>
using namespace std;

template<class T>
class TreeNode {
private:
	TreeNode* leftChild;
	TreeNode* rightChild;
	T* data;
public:
	TreeNode();
	TreeNode(T *data);
	TreeNode* getLeft();
	TreeNode* getRight();
	T* getData();
	void setLeft(TreeNode* node);
	void setRight(TreeNode* node);
	void setData(T* data);
};

template<class T>
TreeNode<T>::TreeNode() {
	 this->leftChild = this->rightChild = NULL;
	 this->data = NULL;
	
}

template<class T>
TreeNode<T>::TreeNode(T *data) {
	 this->leftChild = this->rightChild = NULL;
	 this->data = data;
}

template<class T>
TreeNode<T>* TreeNode<T>::getLeft() {
	return this->leftChild;
}


template<class T>
TreeNode<T>* TreeNode<T>::getRight() {
	return this->rightChild;
}


template<class T>
T* TreeNode<T>::getData() {
	return this->data;
}


template<class T>
void TreeNode<T>::setLeft(TreeNode* node) {
	this->leftChild = node;
}


template<class T>
void TreeNode<T>::setRight(TreeNode* node) {
	this->rightChild = node;
}


template<class T>
void TreeNode<T>::setData(T* data) {
	this->data = data;
}

void insert(TreeNode<int>* root, int* info) // info is point to data
{
	TreeNode<int>* node = new TreeNode<int>(info);
	TreeNode<int> *p, *q;

	p = q = root;

	while (q != NULL && *info != *(p->getData())) // q will be NULL when it is at bottom (leaf)
	{
		p = q;
		if (*info < *(p->getData())) {
			q = p->getLeft();
		}
		else {
			q = p->getRight();
		}
	}


	if (*info == *(p->getData())) {
		cout << "attemp to insert dublicate" << endl;
		delete node;
	}
	else if (*info < *(p->getData())) {
		p->setLeft(node);
	}
	else {
		p->setRight(node);
	}

}

void inorderTraversal(TreeNode<int>* root) {
	if (root) {
		inorderTraversal(root->getLeft());
		cout <<* root->getData() << " ";
		inorderTraversal(root->getLeft());
	}
}

int main() {

	TreeNode<int>* root = new TreeNode<int>();
	int x[16] = { 14, 15, 4, 9, 7, 18, 3, 5, 16,4, 20, 17, 9,14,5,-1 };

	root->setData(&x[0]);

	// x[i] > 0 condition because there is no array.length method so we put -1 in end of array
	for (int i = 1; x[i] > 0; i++)
	{
		insert(root, &x[i]);
	}

	

	return 0;
}