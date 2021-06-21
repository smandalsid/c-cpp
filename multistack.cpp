#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *stacks[10];



void push()
{
	
}

int main()
{
	int i, nstacks;
	
	cout<<"How many stacks do you want to create in a stack:\n";
	cin>>nstacks;
	
	for (i=0;i<nstacks;i++)
	{
		stacks[i]=new node;
		stacks[i]->next=NULL;
	}
	
	int ch;
	
	while(1)
	{
		cout<<"Multistack operations:\n";
		cout<<"1) Push\n";
		cout<<"2) Pop\n";
		cout<<"3) Display\n";
		cout<<"4) Delete a stack\n";
		cout<<"4) Exit\n";
		
		cin>>ch;
		
	}
}
