#include <iostream>
#include <stdlib.h>
using namespace std;

struct stud // structure to store roll numbers of students, to store data dynamically
{
	int roll;
	stud *next; // self refential pointer to store the address of the data to create a link
};

stud *start, *temp, *ptr; // pointers of user defined data type stud

void addbeg() // to add data in the beginning
{
	ptr = new stud;
	if (ptr == NULL) // when memory is exhausted
	{
		cout << "Overflow\n";
	}
	else
	{
		cout << "Enter roll number:\n";
		cin >> ptr->roll;
		ptr->next = NULL; // takes data and marks next as NULL
		if (start == NULL)
		{
			start = ptr;
		}
		else
		{
			ptr->next = start;
			start = ptr;
		} // the if else loop stores new data, if start was NULL, ptr becomes start or else ptr becomes the new start
	}
}

void addmid() // function to add in the middle
{
	ptr = new stud;		  // allocating memory
	int pos, counter = 0; // to take position to enter
	temp = start;
	if (ptr == NULL) // when list is empty
	{
		cout << "Overflow\n";
	}
	else
	{
		cout << "Enter position where you want to enter:\n";
		cin >> pos;
		while (counter != pos - 1)
		{
			temp = temp->next; // travel to previous node of position
			counter += 1;
		}
		cout << "Enter data:\n";
		cin >> ptr->roll;		// take input of data
		ptr->next = temp->next; // map node existing currently to new node
		temp->next = ptr;		// map ptr to previous node
	}
}

void addend() // add new node at the end
{
	stud *pos;
	pos = start;
	while (pos->next != NULL)
	{
		pos = pos->next; // to get to the address marked to the last element
	}
	ptr = new stud;
	if (ptr == NULL) // memory exhausted
	{
		cout << "Overflow\n";
	}
	else
	{
		cout << "Enter roll:\n";
		cin >> ptr->roll;
		ptr->next = NULL;
		pos->next = ptr; // taking the roll number, mapping the next pointer to the new node and mapping the next pointer of the new node to NULL
	}
}

void del() // deleting node
{
	int pos, counter = 0;
	stud *prev, *aft; //prev and aft will be the nodes previous and after the node we are deleting
	prev = start;
	if (start == NULL)
		cout << "Underflow\n";
	else
	{
		cout << "Enter position to delete:\n";
		cout << "CAREFULL ENTER POSITION NUMBER CORRECTLY!!\n";
		cin >> pos;
		if (pos == 0 && start->next == NULL) // when the position to delete is zero and the list has only one element, it prevents segmenation error
		{
			start = NULL; // start=NULL indicates an empty list
		}
		else if (pos == 0) // if position to delete is the first element but list has more elements
		{
			start = start->next; // it will move the start to the next element
		}
		else
		{
			while (counter != (pos - 1)) // to move previous and after to the node we want to delete
			{
				prev = prev->next;
				counter += 1;
			}
			prev->next = prev->next->next; // mapping the next pointer of the prev node to the next pointer of the aft node which was mapping the node after the node to be deleted
		}
	}
}

void display() // to display the linked list
{
	if (start == NULL) // empty list
		cout << "Underflow\n";
	else
	{
		stud *pos;
		for (pos = start; pos != NULL; pos = pos->next) // loop will run from the start till the address mapped to the next pointer of a node is NULL
		{
			cout << pos->roll << "\t";
		}
		cout << "\n";
	}
}

void search() // search elements in the list
{
	int s, position = 0, flag = 0;
	stud *pos;
	cout << "Enter element to search:\n";
	cin >> s;
	for (pos = start; pos != NULL; pos = pos->next) // loop will run from the start till the address mapped to the next pointer of a node is NULL
	{
		if (pos->roll == s)
		{
			cout << "Element found at position: " << position << "\n"; // print the position of the element in the list
			flag = 1;
		}
		position++;
	}
	if (flag == 0)
	{
		cout << "Element not found\n"; // when element is not found
	}
}

int main() // main function
{
	int ch;
	while (1) // an infinite loop to display the operations to perform with an exit option
	{
		cout << "Operations on pointer based implementation of list:\n";
		cout << "1) Add at the beginning\n";
		cout << "2) Add in middle\n";
		cout << "3) Add at the end\n";
		cout << "4) Delete\n";
		cout << "5) Display\n";
		cout << "6) Search\n";
		cout << "7) Exit\n";
		cin >> ch;

		switch (ch)
		{
		case 1: // to add element at the beginning, calling addbeg() and display()
			addbeg();
			display();
			break;
		case 2: // to add element somewhere in the middle calling addmid() and display()
			addmid();
			display();
			break;
		case 3:
			addend(); // to add element at the end calling addend() and display()
			display();
			break;
		case 4:
			del(); // to delete element from the list and display()
			display();
			break;
		case 5:
			display(); // to display the linked list
			break;
		case 6:
			search(); // to search for an element in the linked list
			break;
		case 7:
			exit(0); // to exit from the program
		default:
			cout << "Wrong choice\n";
			break;
		}
	}
	return 0;
}
