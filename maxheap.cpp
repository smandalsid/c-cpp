#include <iostream>
using namespace std;

#define maxsize 100
int heapsize;
int heap[maxsize]; // heap

void changetomaxheap() // changin array to maxheap
{
    int i=1, temp;

    while (i<=heapsize/2) // till position is less not more than position of last node which is also a parent
    {
        if (2 * i + 1 <= heapsize) // if it has two childs in the heap
        {
            if (heap[2 * i] > heap[2 * i + 1]) // if left child is bigger than the right child
            {
                if (heap[i] < heap[i * 2]) // if the parent is lesser than the left child
                {
                    temp = heap[i]; // swap
                    heap[i] = heap[i * 2];
                    heap[2 * i] = temp;
                }
            }
            else
            {
                if (heap[i] < heap[2 * i + 1]) // if parent is lesser than right child
                {
                    temp = heap[i]; // swap
                    heap[i] = heap[2 * i + 1];
                    heap[2 * i + 1] = temp;
                }
            }
        }
        else
        {
            if (heap[i] < heap[2 * i]) // if only left child exists and is greater than parent
            {
                temp = heap[i];
                heap[i] = heap[2 * i];
                heap[2 * i] = temp;
            }
        }
        i++;
    }
}

void initialise() // initialise the heap with values
{
    int i;

    cout << "How many elements do you want to insert in heap:\n";
    cin >> heapsize; // take size of heap as input

    cout << "Enter elements:\n"; // take elements of the heap
    for (i = 1; i <= heapsize; i++)
    {
        cin >> heap[i];
    }

    for (i=1;i<=heapsize/2;i++) // call changetomaxheap size/2 number of times
        changetomaxheap();
}

void insert() // insert element in the maxheap
{
    int x,i;
    int parent;

    if (heapsize == maxsize) // full heap condition
    {
        cout << "Heap is full\n";
    }
    else
    {
        cout << "Enter element:\n";
        cin >> x;

        heap[++heapsize] = x; // store the element according to a balanced tree


        for (i=1;i<=heapsize/2;i++) // call changetomaxheap size/2 number of times
            changetomaxheap();
    }
}

void deletemax() // deleting the maximum element
{
    heap[1] = heap[heapsize--];
    changetomaxheap();
}

void display() // display the elements of the heap
{
    int i;
    cout << "Index\tElement\n";

    for (i = 1; i <= heapsize; i++)
    {
        cout << i << "\t" << heap[i] << "\n";
    }
}

void displaymax() // display the maximum element of the heap
{
    cout<<"The maximum element is: "<<heap[1]<<"\n";
}

int main()
{
    int ch;

    while (1)
    {
        cout << "Max Heap operations:\n";
        cout << "1) Buildheap\n";
        cout << "2) Insert\n";
        cout << "3) Display\n";
        cout << "4) Show maximum element\n";
        cout << "5) Delete maximum element\n";
        cout << "6) Exit\n";

        cin >> ch;

        switch (ch)
        {
        case 1:
            initialise(); // initialise the heap
            break;
        case 2:
            insert(); // insert an element in the heap
            break;
        case 3:
            display(); // display the heap
            break;
        case 4:
            displaymax(); // display the maximum value
            break;
        case 5:
            deletemax(); // delete the maximum value
            break;
        case 6:
            exit(0); // exit the program
            break;
        default:
            cout << "Wrong choice\n";
            break;
        }
    }

    return 0;
}

// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// #define Max 100
// class Heap
// {
// 	int heap[Max];
// 	int c_size;

// public:
// 	void initialization();
// 	void insert(int x);
// 	void buildheap();
// 	void percolatedown(int empty);
// 	void delmax(int &max);
// 	int findmax();
// 	void display();
// 	void swap(int x, int y);
// };
// void Heap::initialization()
// {
// 	cout << "Array size of array" << endl;
// 	cin >> c_size;
// 	cout << "Enter all " << c_size << " elements" << endl;
// 	int i;
// 	for (i = 1; i <= c_size; i++)
// 	{
// 		cin >> heap[i];
// 	}
// 	for (i = c_size / 2; i > 0; i--)
// 	{
// 		percolatedown(i);
// 	}
// }
// void Heap::percolatedown(int empty)
// {
// 	while (empty * 2 <= c_size)
// 	{
// 		if (heap[empty * 2] > heap[empty * 2 + 1])
// 		{
// 			if (heap[empty] < heap[empty * 2])
// 			{
// 				int t;
// 				t = heap[empty];
// 				heap[empty] = heap[empty * 2];
// 				heap[empty * 2] = t;
// 			}
// 			empty = empty * 2;
// 		}
// 		else
// 		{
// 			if (heap[empty] < heap[empty * 2 + 1])
// 			{
// 				int t;
// 				t = heap[empty];
// 				heap[empty] = heap[empty * 2 + 1];
// 				heap[empty * 2 + 1] = t;
// 			}
// 			empty = empty * 2 + 1;
// 		}
// 	}
// }
// void Heap::insert(int x)
// {
// 	if (c_size == Max)
// 	{
// 		cout << "Array is full" << endl;
// 	}
// 	else
// 	{
// 		int temp = ++c_size;
// 		heap[temp] = x;
// 		while (temp > 1)
// 		{
// 			int parent = temp / 2;
// 			if (heap[parent] < heap[temp])
// 			{
// 				int t;
// 				t = heap[parent];
// 				heap[parent] = heap[temp];
// 				heap[temp] = t;
// 				temp = parent;
// 			}
// 			else
// 			{
// 				return;
// 			}
// 		}
// 	}
// }
// void Heap::delmax(int &max)
// {
// 	if (c_size == 0)
// 	{
// 		cout << "Empty Array" << endl;
// 	}
// 	else
// 	{
// 		max = heap[1];
// 		heap[1] = heap[c_size--];
// 		display();
// 		percolatedown(1);
// 	}
// }
// int Heap::findmax()
// {
// 	return heap[1];
// }
// void Heap::display()
// {
// 	int i;
// 	cout << "The elements of heap are:" << endl;
// 	for (i = 1; i <= c_size; i++)
// 	{
// 		cout << i << "." << heap[i] << " ";
// 	}
// 	cout << endl;
// }
// int main()
// {
// 	int op, data, max = 0;
// 	cout << "   MAX HEAP   " << endl;
// 	Heap h1;
// 	while (1)
// 	{
// 		cout << "1.Buildheap" << endl;
// 		cout << "2.Insert" << endl;
// 		cout << "3.DeleteMax" << endl;
// 		cout << "4.Display" << endl;
// 		cout << "5.Findmax" << endl;
// 		cout << "6.Exit" << endl;
// 		cout << "Enter your option:" << endl;
// 		cin >> op;
// 		switch (op)
// 		{
// 		case 1:
// 			h1.initialization();
// 			break;
// 		case 2:
// 			cout << "Enter data to be inserted:" << endl;
// 			cin >> data;
// 			h1.insert(data);
// 			break;
// 		case 3:
// 			h1.delmax(max);
// 			cout << "The deleted element is: " << max << endl;
// 			break;
// 		case 4:
// 			h1.display();
// 			break;
// 		case 5:
// 			h1.findmax();
// 			break;
// 		case 6:
// 			exit(0);
// 		default:
// 			cout << "Wrong option entered" << endl;
// 		}
// 	}
// }