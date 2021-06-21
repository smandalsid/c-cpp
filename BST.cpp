#include<iostream>
using namespace std;

struct node // node of every element in tree
{
	int data; // stores data
	node *left; // stores address of left child
	node *right; // stores address of right child
};

node *root=NULL;

void addnode(node *nroot, int data) // add nodes in BST
{
	if (nroot->data==data) // if the data already exists
	{
		cout<<"Data exists\n";
	}
	else
	{
		if (nroot->data>data) // move to left subtree if root is greater than data
		{
			if (nroot->left!=NULL) // if left child exists
			{
				addnode(nroot->left, data); // recursive call addnode on leftsubtree
			}
			else
			{
				nroot->left=new node; // if left child does not exist
				(nroot->left)->left=NULL; // left child address as NULL
				(nroot->left)->data=data; // store node data 
				(nroot->left)->right=NULL; // right child address as NULL
				cout<<"Data inserted on left\n";
			}
		}
		else 
		{
			if (nroot->right!=NULL) // if right child exists
			{
				addnode(nroot->right, data); // recursive call addnode on right subtree
			}
			else
			{
				nroot->right=new node; // if right child does not exist
				(nroot->right)->left=NULL; // left child address as NULL
				(nroot->right)->data=data; // store node data 
				(nroot->right)->right=NULL; // right child address as NULL
				cout<<"Data inserted on right\n";
			}
		}
	}
}

void preorder(node *nroot) // preorder traversal
{
	if (nroot==NULL)
		return;
	cout<<nroot->data<<" "; // root
	preorder(nroot->left); // left
	preorder(nroot->right); // right
}

void postorder(node *nroot) // postorder traversal
{
	if (nroot==NULL)
		return ;
	postorder(nroot->left); // left
	postorder(nroot->right); // right
	cout<<nroot->data<<" "; // root
}

void inorder(node *nroot)
{
	if (nroot == NULL)
		return ;
		
	inorder(nroot->left); // left
	cout<<nroot->data<<" "; // root
	inorder(nroot->right); // right
}

node* search(node *nroot, int data) // to search a node
{
	if (nroot->data==data) // when root is the element to search
	{
		return nroot;
	}
	else
	{
		if (nroot->data>data) // if data to be searched is smaller than root move to left subtree
		{
			if (nroot->left!=NULL)
				return search(nroot->left, data);
		}
		else
		{
			if (nroot->right!=NULL) // if data to be searched is greater than root move to right subtree
				return search(nroot->right, data);
		}
	}
	return NULL;
}

int lowestfromrightsubtree(node *nroot) // find lowest node from the left subtree
{
	int minvalue=nroot->data;
	
	while (nroot->left!=NULL) // till the left child is not NULL
	{
		minvalue=(nroot->left)->data; // take minvalue as the left child's data
		nroot=nroot->left;
	}
	return minvalue;
}

node* deletenode(node *nroot, int data) // delete a node
{
	if (nroot==NULL) // if tree is empty
		return nroot;
	
	if (nroot->data>data) // move to left child if data is less than node
	{
		nroot->left=deletenode(nroot->left, data);
	}
	else if(nroot->data<data) // move to right child if data is more than node
	{
		nroot->right=deletenode(nroot->right, data);
	}
	else
	{
		if (nroot->left==NULL) // if the left child is the node to be deleted
		{
			node *temp=nroot->right;
			free(nroot);
			return temp;
		}
		else if(nroot->right==NULL) // if the right child is the node to be deleted
		{
			node *temp=nroot->left;
			free(nroot);
			return temp;
		}
		
		nroot->data=lowestfromrightsubtree(nroot->right); // get the lowest node from the right subtree
		
		nroot->right=deletenode(nroot->right, nroot->data);
	}
	return nroot;
}

int main()
{
	int ch, data;
	
	while (1)
	{
		cout<<"\nBST operations:\n";
		cout<<"1) Insert data\n";
		cout<<"2) Inorder\n";
		cout<<"3) Preorder\n";
		cout<<"4) Postorder\n";
		cout<<"5) Search\n";
		cout<<"6) Delete\n";
		cout<<"7) Exit\n";
		
		cin>>ch;
		
		switch(ch)
		{
			case 1: // inserting data into BST
				cout<<"Enter data\n";
				cin>>data;
				if (root==NULL)
				{
					root = new node;
					root->data=data;
					root->left=NULL;
					root->right=NULL;
					cout<<"Root added\n";
				}
				else
				{
					addnode(root,data);
				}
				break;
			case 2: // inorder traversal of BST
				cout<<"Inorder:\n";
				inorder(root);
				break;
			case 3: // preorder traversal of BST
				cout<<"Preorder:\n";
				preorder(root);
				break;
			case 4: // postorder traversal of BST
				cout<<"Postorder:\n";
				postorder(root);
				break;
			case 5: // search element in BST
				cout<<"Enter data you want to search:\n";
				cin>>data;
				node *temp;
				temp=search(root, data);
				if (temp!=NULL)
				{
					cout<<"Data found\n";
				}
				else
				{
					cout<<"Data not found\n";
				}
				break;
			case 6: // delete node from BST
				cout<<"Enter element to delete:\n";
				cin>>data;
				deletenode(root,data);
				break;
			case 7: // exit from program
				exit(0);
			default:
				break;
		}
	}
	return 0;
}
