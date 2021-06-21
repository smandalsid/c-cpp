#include <iostream>
using namespace std;

struct node // structure of every node of doubly linked list
{
	int data;	 // data
	node *prev;	 // self referential pointer to store address of previous node
	node *after; // self referential pointer to store address of next node
};

node *head;

void isempty() // check if the doubly linked list is empty
{
	if (head == NULL) // empty condition
	{
		cout << "The doubly linked is empty\n";
	}
	else
	{
		cout << "The doubly linked list is not empty\n";
	}
}

void insertatbeginning(int data) // insert element at the beginning of the doubly linked list
{
	node *ptr = new node;
	if (ptr == NULL) // memory error
	{
		cout << "Underflow\n";
	}
	else
	{
		ptr->data = data;  // stores the data
		ptr->prev = NULL;  // maps previous as NULL
		ptr->after = NULL; // maps after as NULL
		if (head == NULL)  // empty condition
		{
			head = ptr; // ptr becomes head
		}
		else
		{
			ptr->after = head; // current head goes after ptr
			head->prev = ptr;  // mapping new head (ptr) to previous head
			head = ptr;		   // ptr becomes head
		}
	}
}

void insertatend(int data) // insert element at end of doubly linked list
{
	node *ptr = new node, *pos = head;
	if (ptr == NULL) // memory error
	{
		cout << "Underflow\n";
	}
	else
	{
		while (pos->after != NULL) //to go to the last node
		{
			pos = pos->after;
		}
		ptr->data = data;  // store data in ptr
		ptr->after = NULL; // ptr's after get NULL
		ptr->prev = pos;   // ptr's prev get the address of the node that was previously the last node
		pos->after = ptr;  // previously last node gets address of the new last node
	}
}

void Delete(int data) // deleting and element or node
{
	int found = 0; // to keep track if element actually exists
	node *pos = head;
	if (head == NULL) // empty condition
	{
		cout << "Undeflow\n";
	}
	else
	{
		if (data == head->data && head->after == NULL) //when head is the only node and the node to be deleted
		{
			head = NULL; // head becomes NULL
			found = 1;
		}
		else if (data == head->data) // many nodes are there and node to be deleted is the head node
		{
			head = head->after;
			head->prev = NULL;
			found = 1;
		}
		else
		{
			while (pos->data != data and pos->after != NULL) // to travle to the node to be deleted
			{
				pos = pos->after;
			}
			if (pos->after == NULL and pos->data == data) // if it is the last node
			{
				pos->prev->after = NULL;
				found = 1;
			}
			else if (pos->data == data) // if it is some node in between
			{
				pos->prev->after = pos->after;
				pos->after->prev = pos->prev;
				found = 1;
			}
		}
	}
	if (found == 0) // if element to be deleted is not found in the doubly linked list
	{
		cout << "Not found\n";
	}
}

void display() // display the doubly linked list
{
	node *pos;
	cout << "\nDoubly linked list:\n";
	for (pos = head; pos != NULL; pos = pos->after) // traverse from head to NULL(mapped address of the last element)
	{
		cout << pos->data << "\t";
	}
	cout << "\n\n";
}

void search(int data) // search given element in doubly linked list
{
	int counter = 0, found = 0; // check the position of element (starting 0) and if element exists
	node *pos = head;
	if (head == NULL)
	{
		cout << "Overflow\n";
	}
	else
	{
		while (pos != NULL) //  till node is not the required element
		{
			if (pos->data == data) // when element is found
			{
				cout << "Element found at: " << counter << "\n";
				found = 1;
				break;
			}
			pos = pos->after; // or else keep moving forward
			counter += 1;
		}
	}
	if (found == 0) // when element is not found in the doubly linked list
		cout << "Not found\n";
}

int main()
{
	int ch, data; // to take input of choice every time
	while (1)
	{
		cout << "Doubly linked list:\n";
		cout << "1) Check if doubly linked list is empty\n";
		cout << "2) Insert at beginning\n";
		cout << "3) Insert at the end\n";
		cout << "4) Delete\n";
		cout << "5) Display\n";
		cout << "6) Search\n";
		cout << "7) Exit\n";

		cin >> ch;

		switch (ch) // execute codes according to input
		{
		case 1:
			isempty(); // check if doubly linked list is empty
			break;
		case 2:
			cout << "Enter data:\n";
			cin >> data;
			insertatbeginning(data); // insert element at beginning
			display();				 // display the doubly linked list
			break;
		case 3:
			cout << "Enter data:\n";
			cin >> data;
			insertatend(data); // insert element at end
			display();		   // display the doubly linked list
			break;
		case 4:
			cout << "Enter element to delete:\n";
			cin >> data;
			Delete(data); // delete element
			display();	  // display the doubly linked list
			break;
		case 5:
			display(); // display the doubly linked list
			break;
		case 6:
			cout << "Enter element to search\n";
			cin >> data;
			search(data); // search the element in doubly linked list
			break;
		case 7:
			exit(0); // exit from the program
		default:
			cout << "Wrong choice\n"; // wrong input
			break;
		}
	}
	return 0;
}
