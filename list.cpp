#include <iostream>
#include <stdlib.h>
using namespace std;

int list[10];  // initialising list
int last = -1; //ending position of list

void insertbeg(int data) // to insert at the beginning
{
	if (last == 10) // when list is full
	{
		cout << "Overflow\n";
	}
	else if (last == -1) // when list is full
	{
		list[last + 1] = data; // store the data in the list
		last++;				   // increase the position of last
	}
	else
	{
		for (int i = last + 1; i > 0; i--) // increment the positions of all elements by one
		{
			list[i] = list[i - 1];
		}
		list[0] = data; // store the data
		last++;			// increment list
	}
}

void insertend(int data) // insert element at the end of the list
{
	if (last == 10) // if the list is full
	{
		cout << "Overflow\n";
	}
	else
	{
		list[last + 1] = data; // store the data
		last++;				   // increment the value of last
	}
}

void insertbet(int pos, int data) // insert data in between the list
{
	int i;
	if (last == 10) // if list is full
	{
		cout << "Overflow\n";
	}
	else
	{
		for (i = last; i >= pos; i--) // increment postition of elements before the position of the element to be inserted
		{
			list[i + 1] = list[i];
		}
		list[pos] = data; // store the data in the position
		last++;			  // increment position of last
	}
}

void deletion(int pos) // for deleting an element
{
	int i;
	if (last == -1)
	{
		cout << "Underflow\n";
	}
	else
	{
		for (i = pos; i <= last; i++) // decrement the position of elements by one after the position of deleted element
		{
			list[i] = list[i + 1];
		}
		last--;
	}
}

void search(int data) // search if element exists in the list
{
	int i, flag = 0, found;
	for (i = 0; i <= last; i++) // traverse throughout the list
	{
		if (list[i] == data)
		{
			flag = 1;
			cout << "Found at: " << i << "\n";
		}
	}
	if (flag != 1) // if the element is not found
	{
		cout << "Not Found\n";
	}
}

void display() // display the list
{
	int i;
	if (last == -1) // list is empty
	{
		cout << "Underflow\n";
	}
	else
	{
		for (i = 0; i <= last; i++) // print elements of the list
		{
			cout << i << ") " << list[i] << "\n";
		}
	}
}

int main()
{
	int ch;

	while (1) // display the list of operations
	{
		cout << "What operation do you want to perform on list:\n";
		cout << "1) Insert at beginning\n";
		cout << "2) Insertion in between\n";
		cout << "3) Insertion at end\n";
		cout << "4) Deletion\n";
		cout << "5) Search\n";
		cout << "6) Display\n";
		cout << "7) Exit\n";
		cin >> ch;
		switch (ch)
		{
		case 1: // insert at the beginning of the list
			int data;
			cout << "Enter data:\n";
			cin >> data;
			insertbeg(data);
			display();
			break;

		case 2: // insert in between the list
			int pos, x;
			cout << "Enter position to enter:\n";
			cin >> pos;
			cout << "Enter data:\n";
			cin >> x;
			insertbet(pos, x);
			display();
			break;

		case 3: // insert data at the end of the last
			int val;
			cout << "Enter data:\n";
			cin >> val;
			insertend(val);
			display();
			break;

		case 4: // enter position to be deleted
			int y;
			cout << "Enter position to be deleted:\n";
			cin >> y;
			deletion(y);
			display();
			break;

		case 5: // enter element to search
			int m;
			cout << "Enter element to search:\n";
			cin >> m;
			search(m);
			break;

		case 6: // display the list
			display();
			break;

		case 7: // exit the program
			exit(0);

		default:
			break;
		}
	}
	return 0;
}
