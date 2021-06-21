#include <iostream>
using namespace std;

int queue[10];	// queue array
int front = -1; // position of front
int rear = -1;	// position of rear

void enqueue(int val) // to insert element in queue
{
	if (rear == 9) // when queue is full
	{
		cout << "Overflow\n";
	}
	else if (rear == -1) // when queue is empty
	{
		front = rear = 0; // front and rear are both same at 0
		queue[rear] = val; // storing the value
	}
	else
	{
		queue[++rear] = val; // increment rear and store the value
	}
}

void dequeue() // to delete element from queue
{
	int i;
	if (front == -1) // when queue is empty
	{
		cout << "underflow\n";
	}
	else
	{
		cout << "Deleted item: " << queue[front] << "\n"; // print the front element to be deleted
		for (i = 0; i < rear; i++) // decrement the position of element in queue by 1
		{
			queue[i] = queue[i + 1];
		}
		rear -= 1; // decrement rear
	}
}

void display() // display the queue
{
	int i;
	if (front == -1) //when queue is empty
	{
		cout << "Underflow\n";
	}
	else
	{
		cout << "QUEUE:\n";
		cout<<"Index\tElement\n";
		for (i = front; i <= rear; i++)
		{
			cout << i<<")\t"<<queue[i]<<"\n";
		}
	}
}

int main()
{
	int ch;

	while (1) // print options till 4 is entered
	{
		cout << "\nEnter choice:\n";
		cout << "1) Insert\n";
		cout << "2) Delete\n";
		cout << "3) Display\n";
		cout << "4) Exit\n";

		cin >> ch;

		switch (ch)
		{
		case 1: // enter element in the queue and display
		{
			int val;
			cout << "Enter element to insert:\n";
			cin >> val;
			enqueue(val);
			display();
			break;
		}

		case 2:
		{
			dequeue(); // to delete element from queue and display
			display();
			break;
		}

		case 3:
		{
			display(); // to display queue
			break;
		}

		case 4: // to exit from program
		{
			exit(0);
		}

		default: // default output
		{
			cout << "Wrong choice\n";
			break;
		}
		}
	}
	return 0;
}
