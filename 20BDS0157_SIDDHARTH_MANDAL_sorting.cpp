#include<iostream>
using namespace std;

void bubble(int ar[], int n)									//bubble sort
{
	int i,j,temp;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)									
		{
			if (ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
}

void display(int ar[], int n)									//display sorted array
{
	int i;
	for (i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<"\n";
}

void merge(int ar[], int le, int mid, int re, int n)			//to merge arrays in sorted order
{
	int i,j, k;
	i=le;
	j=mid+1;
	k=le;
	int b[n];
	while (i<=mid && j<=re)										//till i and j don't reach ends of the partitioned arrays, loop will store element into temporary array from whichever array has the smallest array
	{
		if (ar[i]<=ar[j])
		{
			b[k]=ar[i];
			i++;
			k++;
		}
		else
		{
			b[k]=ar[j];
			j++;
			k++;
		}
	}
	
	if (i<=mid)													//if the first array still has elements
	{
		while (i<=mid)
		{
			b[k]=ar[i];
			i++;
			k++;
		}
	}
	else if (j<=re)												//if the second array still has elements
	{
		while (j<=re)
		{
			b[k]=ar[j];
			j++;
			k++;
		}
	}
	
	for (k=le;k<=re;k++)										//modify the original array
	{
		ar[k]=b[k];
	}
	
}

void mergesort(int ar[], int le, int re, int n)					//to break the array from middle recursively and call merge function to sort and join it back
{
	int mid;
	if (le<re)
	{
		mid=(le+re)/2;
		mergesort(ar,le,mid,n);
		mergesort(ar,mid+1,re,n);
		merge(ar,le,mid,re,n);
	}
}

int partitioning(int ar[], int le, int re)						//to create partitions of the array
{
	int pivot=ar[le];											//taking the starting element as the pivot element
	int start=le, end=re,temp;									//start and end are to point to array elements
	
	while (start<end)
	{
		while (ar[start]<=pivot)								//till the array element is lesser than or equal to start increment start
		{
			start++;
		}
		while (ar[end]>pivot)									//till the array element from end is bigger than pivot decrement end
		{
			end--;
		}
		if (start<end)											//if position of start is less than end, swap array elements at start and end
		{
			temp=ar[start];
			ar[start]=ar[end];
			ar[end]=temp;
		}
	}
	temp=ar[le];
	ar[le]=ar[end];
	ar[end]=temp;
	return end;
}

void quicksort(int ar[], int le, int re)						//to partition the array and applying quicksort recursively
{
	int dis;
	if (le<re)
	{
		dis=partitioning(ar,le,re);
		quicksort(ar,le,dis-1);
		quicksort(ar,dis+1,re);
	}
}

int main()														// main function
{
	int n,ch,i;
	cout<<"Enter number of elements in array:\n";
	cin>>n;
	int ar[n];
	cout<<"Enter elements of array:\n";
	for (i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"Options:\n";
	cout<<"1) Bubble sort\n";
	cout<<"2) Merge sort\n";
	cout<<"3) Quick sort\n";
	cout<<"4) Exit\n";
		
	cin>>ch;
		
	switch(ch)
	{
		case 1:													// bubble sort array and display
			bubble(ar,n);
			display(ar,n);
			break;
			
		case 2:
			mergesort(ar,0,n-1,n);								//merge sort array and display
			display(ar,n);
			break;
			
		case 3:
			quicksort(ar,0,n-1);								//quicksort array and display
			display(ar,n);
			break;
				
		case 4:
			exit(0);											//exit program
			
		default:
			break;
	}

	return 0;
}
