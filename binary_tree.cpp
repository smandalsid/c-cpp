// Binary Tree in C++

#include <stdlib.h>

#include <iostream>

using namespace std;

/*struct node {
  int data;
  struct node *left;
  struct node *right;
};

// New node creation
struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}

// Traverse Preorder
void traversePreOrder(struct node *temp) {
  if (temp != NULL) {
    cout << " " << temp->data;
    traversePreOrder(temp->left);
    traversePreOrder(temp->right);
  }
}

// Traverse Inorder
void traverseInOrder(struct node *temp) {
  if (temp != NULL) {
    traverseInOrder(temp->left);
    cout << " " << temp->data;
    traverseInOrder(temp->right);
  }
}

// Traverse Postorder
void traversePostOrder(struct node *temp) {
  if (temp != NULL) {
    traversePostOrder(temp->left);
    traversePostOrder(temp->right);
    cout << " " << temp->data;
  }
}

int main() {
  struct node *root = newNode(1);
  root->left = newNode(12);
  root->right = newNode(9);
  root->left->left = newNode(5);
  root->left->right = newNode(6);

  cout << "preorder traversal: ";
  traversePreOrder(root);
  cout << "\nInorder traversal: ";
  traverseInOrder(root);
  cout << "\nPostorder traversal: ";
  traversePostOrder(root);
}*/


struct node
{
	int data;
	node *left;
	node *right;
};

struct node *newNode(int data)
{
	node *node = (struct node*)malloc(sizeof(node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

void preorder(node *node)
{
	if (node==NULL)
		return;
	cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}

void postorder(node *node)
{
	if (node==NULL)
		return ;
	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<" ";
}

void inorder(node *node)
{
	if (node == NULL)
		return ;
		
	inorder(node->left);
	cout<<node->data<<" ";
	inorder(node->right);
}

int main()
{
	node *root=newNode(1);
	root->left=newNode(12);
	root->right=newNode(9);
	root->left->left=newNode(5);
	root->left->right=newNode(6);
	
	preorder(root);
	cout<<"\n";
	inorder(root);
	cout<<"\n";
	postorder(root);
	cout<<"\n";
	
	return 0;	
}
