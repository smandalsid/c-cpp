#include<iostream>
#include<stdlib.h>
using namespace std;

int cqueue[10];		//declaration of stack
int front=-1;		
int rear=-1;		//declaration of front and rear

void insertcq(int val)								//fiunction to insert elements from circular queue
{
	if ((front==0 && rear==9)||(front==rear+1))		//full condition
		cout<<"Overflow\n";
	else if (rear==-1)								//empty condition
	{
		front=rear=0;								//changing values of both front and rear to 0
		cqueue[rear]=val;
	}
	else if(rear==9)
	{
		rear=0;										//if the end is full and the front is empty
		cqueue[rear]=val;
	}
	else
	{
		rear++;
		cqueue[rear]=val;							//normal case where rear is less than size
	}
}

int delcq()											// function to delete elements fron circular queue
{	
	int ret;
	if (front==-1)									//empty condition
	{
		cout<<"Underflow\n";
	}
	else
	{
		ret=cqueue[front];
		if (front==rear)
		{
			front=rear=-1;							//when front=rear=0
		}
		else if (front==9)
		{
			front=0;  								//wrap around
		}
		else
		{
			front++;								//normal case of incrementing front
		}
	}
	return ret;
}

void displaycq()									//function to display elements of circuar queue
{
	int i;
	cout<<"\nCircular queue is: \n"<<"(Front shown as >>>, rear as <<< and free space as -)\n";
	if (front==-1)									// empty condition
		cout<<"Underflow\n";
	else if (rear>=front)								// when rear lies after front
	{
		for (i=0;i<front;i++)
		{
			cout<<"-";								// mark the free spaces as -
		}
		cout<<">>>";								// mark starting of queue
		for(i=front;i<rear;i++)
		{
			cout<<cqueue[i]<<"<-";					// display the elements
		}
		cout<<cqueue[rear]<<"<<<\n";				//mark of ending of queue
	}
	else
	{
		for (i=0;i<rear;i++)
		{
			cout<<cqueue[i]<<"<-";					// when rear lies before front, printing the elements
		}
		cout<<cqueue[rear]<<"<<<";					// mark ending of queue
		for (i=rear+1;i<front;i++)					// for printing the empty spaces between front and rear
		{
			cout<<"-";
		}
		cout<<">>>";								// print front of the circular queue
		for (i=front;i<10;i++)						// the wrap around condition
		{
			cout<<cqueue[i]<<"<-";					// print elements of queue
		}
		cout<<"\t...Wrap around\n";
	}
	
}

int main()
{
	int ch;
	
	while (1)										// run the loop till option 4 is selected
	{
		cout<<"\nCircular queue:\n";				// show list of action to perform on the circular queue
		cout<<"1) Insert\n";
		cout<<"2) Delete\n";
		cout<<"3) Display\n";
		cout<<"4) Exit\n";
		cout<<"Enter choice\n";
		cin>>ch;
		switch(ch)
		{
			int val;
			case 1:									// to insert and display in circular queue
			{
				cout<<"Enter value:\n";
				cin>>val;
				insertcq(val);
				displaycq();
				break;
			}
			
			case 2:									// to delete and display element anf circular queue
			{
				int ret;
				ret=delcq();
				cout<<"Deleted item:";
				cout<<ret<<"\n";
				displaycq();
				break;
			}
			
			case 3:									// display circular queue
			{	
				displaycq();
				break;
			}
			
			case 4:									// exit the loop					
			{	
				exit(0);
			}
			default:								// indicate wrong choice
			{
				cout<<"Wrong choice\n";
				break;
			}
						
		}
	}
}
