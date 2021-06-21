#include <iostream>
using namespace std;

struct node // structure of every node of stack
{
	int data;	// data
	node *next; // self referential pointer to store the address of the next node
};

node *top, *ptr;

void push() // to push element in the stack
{
	int d;
	ptr = new node;
	if (ptr == NULL) // if memory is full
	{
		cout << "Underflow\n";
	}
	else
	{
		cout << "Enter data:\n"; // take input of data
		cin >> ptr->data;
		ptr->next = NULL;
		if (top == NULL) // if stack is empty make ptr as top
		{
			top = ptr;
		}
		else
		{
			ptr->next = top; // mapt top to ptr's next
			top = ptr; // make ptr the new top
		}
	}
}

void pop() // pop elements from the stack
{
	if (top == NULL) // 
	{
		cout << "underflow\n";
	}
	else if (top->next == NULL)
	{
		top = NULL;
	}
	else
	{
		top = top->next;
	}
}

void display()
{
	node *q;
	if (top == NULL)
	{
		cout << "Underflow\n";
	}
	else
	{
		for (q = top; q != NULL; q = q->next)
		{
			cout << q->data << " ";
		}
	}
	cout << "\n";
}

int main()
{
	int ch;
	while (1)
	{
		cout << "Stack operations:\n";
		cout << "1) Push\n";
		cout << "2) Pop\n";
		cout << "3) Display\n";
		cout << "4) Exit\n";
		cout << "Enter choice:\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			push();
			display();
			break;
		case 2:
			pop();
			display();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			cout << "Empty\n";
			break;
		}
	}
	return 0;
}
