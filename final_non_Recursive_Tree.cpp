#include<iostream.h>
#include<conio.h>

template <class T>
class node
{
public:
	node(T d);
	void setData(T d);
	T getData();
	void setNext(node<T>* n);
	node<T>* getNext();
private:
	T data;
	node<T>* next;
};
template <class T>
node<T>::node(T d)
{
	data = d;
	next = NULL;
}
template <class T>
void node<T>::setData(T d)
{
	data = d;
}
template <class T>
T node<T>::getData()
{
	return data;
}
template <class T>
void node<T>::setNext(node<T>* n)
{
	next = n;
}
template <class T>
node<T>* node<T>::getNext()
{
	return next;
}//End of Class Node

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class stack
{
public:
	stack();
	void push(T);
	T pop();
	T top();
	int is_Empty();
	void show();
private:
	node<T>* head;
};
template <class T>
stack<T>::stack()
{
	head = NULL;
}
template <class T>
void stack<T>::push(T val)
{
	node<T>* ptr = new node<T>(val);
	ptr->setNext(head);
	head = ptr;
}
template <class T>
T stack<T>::pop()
{
	node<T>* ptr = head;
	T val = head->getData();
	head = head->getNext();
	delete ptr;
	return val;
}
template <class T>
T stack<T>::top()
{
	return head->getData();
}
template <class T>
int stack<T>::is_Empty()
{
	if (head == NULL)
		return true;
	else
		return false;
}
template <class T>
void stack <T>::show()
{
	while (head != NULL)
	{
		cout << pop();
		cout << endl;
	}
}//End of Class Stack

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
class TreeNode
{
public:
	TreeNode(T);
	void setData(T);
	T getData();

	void setleft(TreeNode<T>*);
	TreeNode<T>* getLeft();

	void setRight(TreeNode<T>*);
	TreeNode<T>* getRight();

	int isLeaf();
private:
	T data;
	TreeNode<T>* left;
	TreeNode<T>* right;
};
template <class T>
TreeNode<T>::TreeNode(T d)
{
	data = d;
	left = NULL;
	right = NULL;
}
template <class T>
void TreeNode<T>::setData(T d)

{
	data = d;
}
template <class T>
T TreeNode<T>::getData()
{
	return data;
}
template <class T>
void TreeNode<T>::setleft(TreeNode<T>* l)
{
	left = l;
}
template <class T>
TreeNode<T>* TreeNode<T>::getLeft()
{
	return left;
}
template <class T>
void TreeNode<T>::setRight(TreeNode<T>* r)
{
	right = r;
}
template <class T>
TreeNode<T>* TreeNode<T>::getRight()
{
	return right;
}
template <class T>
int TreeNode<T>::isLeaf()
{
	if (this->left == NULL && this->right == NULL)
		return 1;
	return 0;
}// End of TreeNode Class
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

								//Global fn of insert
template <class T>
void insert(TreeNode<T>* root, T d)
{
	TreeNode<T>* node = new TreeNode<T>(d);
	TreeNode<T>* p, * q;
	p = q = root;
	while (d != p->getData() && q != NULL)
	{
		p = q;
		if (d < p->getData())
			q = p->getLeft();
		else
			q = p->getRight();
	}
	if (d == p->getData())
	{
		cout << "\nAttempt to Insert Duplicate : " << d << endl;
		delete node;
	}
	else if (d < p->getData())
		p->setleft(node);
	else
		p->setRight(node);
}//End Of Insert fn

////////////////////////////////////////////////////////////////////////////////////////////////////////////////				

							//Global fn of preorder
template <class T>
void preorder(TreeNode<T>* node)
{
	stack <TreeNode<T>*> s;
	TreeNode<T>* p;
	p = node;
	do
	{
		while (p != NULL)
		{
			cout << p->getData() << " ";
			s.push(p);
			p = p->getLeft();
		}
		if (!s.is_Empty())
		{
			p = s.pop();
			p = p->getRight();
		}
	} while (p != NULL || !(s.is_Empty()));
}//End of fn preorder							
////////////////////////////////////////////////////////////////////////////////////////////////////////////////				

							//Global fn of inorder
template <class T>
void inorder(TreeNode<T>* node)
{
	stack<TreeNode<T>*> s;
	TreeNode<T>* p;
	p = node;
	do
	{
		while (p != NULL)
		{
			s.push(p);
			p = p->getLeft();
		}
		if (!s.is_Empty())
		{
			p = s.pop();
			cout << p->getData() << " ";
			p = p->getRight();
		}
	} while (p != NULL || !(s.is_Empty()));
}//End of fn inorder
////////////////////////////////////////////////////////////////////////////////////////////////////////////////				

							//Global fn of postorder
template <class T>
void postorder(TreeNode<T>* node)
{
	stack<TreeNode<T>*> s;
	stack<TreeNode<T>*> output;
	s.push(node);  										//1.Push the root node to the first stack.
	while (!s.is_Empty()) 							   //2.Pop a node from the first stack, and push it to the second stack.
	{    										  //3.Then push its left child followed by its right child to the first stack.	
		TreeNode<T>* curr = s.top();    		 //4.Repeat step 2) and 3) until the first stack is empty.
		output.push(curr);    					//5.Once done, the second stack would have all the nodes ready to be traversed in post-order. 
		s.pop();    						   //   Pop off the nodes from the second stack one by one and you�re done.
		if (curr->getLeft())
			s.push(curr->getLeft());
		if (curr->getRight())
			s.push(curr->getRight());
	}
	while (!output.is_Empty())
	{
		cout << output.top()->getData() << " ";
		output.pop();
	}

}// End of fn postorder
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void main()
{
	clrscr();
	int x[] = { 14,4,3,9,16,15,18,-1 };
	TreeNode<int>* root = new TreeNode<int>(14);
	for (int i = 1; x[i] != -1; i++)
	{
		insert(root, x[i]);
	}
	cout << "\nPreorder  : ";
	preorder(root);

	cout << "\nInorder   : ";
	inorder(root);

	cout << "\nPostorder : ";
	postorder(root);

	getch();
}