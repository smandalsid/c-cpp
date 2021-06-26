#include <iostream>
#include <stdlib.h>
using namespace std;

#define MAX_SIZE 100
int stack[MAX_SIZE]; // declaring the stack
int top = -1;		 // stores index of the top element

void push(int val) // to enter item in stack
{
	if (top == 9)
		cout << "Overflow\n"; // to check if stack is full
	else
	{
		stack[++top] = val; // store the value
	}
}

int pop() // to delete item from stack
{
	if (top == -1) // check is stack is empty
		return -1;
	else
	{
		top--;				   //decrement the top
		return stack[top + 1]; // return the value
	}
}

void display()
{
	int i;
	if (top == -1) //to check if stack is empty
	{
		cout << "Underflow\n";
	}
	else
	{
		cout << "Stack:\n";
		cout << "Index"
			 << "\t"
			 << "Element\n";
		for (i = top; i >= 0; i--) // display elements of the stack
		{
			cout << i << "	" << stack[i] << "\n";
		}
	}
}

int main()
{
	int ch;

	while (1) //to display operations to perform on stack untill 4 is entered
	{
		cout << "\nEnter choice in stack operations:\n";
		cout << "1) Push\n";
		cout << "2) Pop\n";
		cout << "3) Display\n";
		cout << "4) Exit\n";

		cin >> ch; // take choice

		switch (ch)
		{
		case 1: // push item in stack and display
		{
			int val;
			cout << "Enter element to push:\n";
			cin >> val;
			push(val);
			display();
			break;
		}

		case 2: // pop item from stack and display
		{
			int popped;
			popped = pop();
			if (popped == -1)
			{
				cout << "Stack is empty\n";
			}
			else
			{
				cout << "Popped element: " << popped << "\n";
				display();
			}
			break;
		}

		case 3: // display the stack
		{
			display();
			break;
		}

		case 4: // exit from program
		{
			exit(0);
		}

		default: // default option
		{
			cout << "Wrong choice\n";
			break;
		}
		}
	}
	return 0;
}
