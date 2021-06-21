#include<iostream>
using namespace std;

struct node									//structure for every node of the queue
{
	int data;								//stores the data
	node *next;								// maps to next element
};

node *front=NULL;
node *rear=NULL;							// initialise front and rear as NULL

void enqueue()								//enter elements in queue
{
	node *q;
	q=new node;
	if (q==NULL)
		cout<<"Overflow\n";					// memory exhausted
	else
	{
		cout<<"Enter data:\n";
		cin>>q->data;						// take data to store
		if (front==NULL)
		{
			//q->next=NULL;					// make q both front and rear
			front=q;
			rear=q;
		}
		else								//make q the new rear and map it to NULL
		{
			rear->next=q;
			rear=q;
			rear->next=NULL;
		}
	}
	
}

void dequeue()								// delete elements from queue
{
	node *loop;
	loop=front;
	if (rear==NULL)							// empty
	{
		cout<<"Underflow\n";
	}
	else if (front==rear)					// when only one element is there
	{
		front=NULL;
		rear=NULL;
	}
	else
	{
		cout<<"Deleted data: "<<front->data<<"\n";			// print deleted data and move front to the next element
		front=front->next;
	}
}

void display()								// display the queue
{
	node *p;
	for (p=front;p!=NULL;p=p->next)
	{
		cout<<p->data<<" ";
	}
	cout<<"\n";
}

int main()									// main function
{
	int ch;
	while (1)								// show list of operations
	{
		cout<<"Stack operations:\n";
		cout<<"1) Insert in queue\n";
		cout<<"2) Delete from queue\n";
		cout<<"3) Display\n";
		cout<<"4) Exit\n";
		cout<<"Enter choice:\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				enqueue();					// enter elements in queue
				display();
				break;
			case 2:
				dequeue();					// delete elements from queue
				display();
				break;
			case 3:
				display();					// display elements from
				break;
			case 4:
				exit(0);					// exit the program
			default:
				cout<<"Wrong choice\n";
				break;
		}
	}
	return 0;
}

/*#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void ennode(){
	struct node *ptr = new node;
	int d;
	cout<<"Enter the element to be inserted in the node"<<endl;
	cin>>d;
	ptr->data = d;
	ptr->next = NULL;
	if(front==NULL && rear==NULL){
		front = rear = ptr;
	}else{
		rear->next = ptr;
		rear = ptr;
	}
}
void denode(){
	if(front==NULL && rear==NULL){
		cout<<"node is empty"<<endl;
	}else{
		struct node *ptr = front;
		front = front->next;
		cout<<"The denoded element is "<<ptr->data<<endl;
	}
}
void display(){
	if(front==NULL && rear == NULL){
		cout<<"node is empty"<<endl;
	}else{
		cout<<"Elements of node are: "<<endl;
		struct node *ptr = front;
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr = ptr->next;
		}
		cout<<endl;
	}
}
int main(){
	int choice , value;
	do{
		cout<<"*************"<<endl;
		cout<<"___node OPERATIONS___"<<endl;
		cout<<"1. Ennode"<<endl;
		cout<<"2. Denode"<<endl;
		cout<<"3. Display elements"<<endl;
		cout<<"0. Exit...."<<endl;
		cout<<"*************"<<endl;
		cout<<"Enter your choice....."<<endl;
		cin>>choice;
		switch(choice){
			case 1:{
				ennode();
				break;
			}
			case 2:{
				denode();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 0:{
				break;
			}
			default:{
				cout<<"Entered the wrong choice!!!"<<endl;
				break;
			}
			}
		}while(choice);
	return 0;
}*/
