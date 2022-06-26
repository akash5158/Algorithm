#include<iostream>
using namespace std;
struct Node{
	int d;
	struct Node *left, *right;
};
Node* newNode(int d){
	Node* temp = new Node;
	temp->d = d;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void postorder(struct Node* node)
{
	if (node == NULL)
		return;
	postorder(node->left);
	postorder(node->right);
	cout<<node->d<< " ";
}
void inorder(struct Node* node)
{
	if (node==NULL)
		return;
	inorder(node->left);
	cout<<node->d << " ";
	inorder(node->right);
}
void preorder(struct Node* node)
{
	if (node == NULL)
		return;
	cout<<node->d<< " ";
	preorder(node->left);
	preorder(node->right);
}
int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout<<"\nPreorder traversal of binary tree is \n";
	preorder(root);

	cout<<"\nInorder traversal of binary tree is \n";
	inorder(root);

	cout<<"\nPostorder traversal of binary tree is \n";
    postorder(root);
	return 0;
}
