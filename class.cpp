#include<iostream>
#include<string.h>
using namespace std;

class array
{
	int ar[10]={0,1,2,3,4,5,6,7,8,9};
	int l=0;
	public:
	
		array()
		{
			int i;
			for (i=0;i<10;i++)
			{
				insert(i,i);
			}
			display();
			
		}
			
		void insert(int m, int n)
		{
			for(int i=l;i>=m;i--)
			{
				ar[i]=ar[i-1];
			}
			ar[m]=n;
			if (l<10)
			{	
				l++;
			}
		}
		
		void display()
		{
			for (int i=0;i<10;i++)
			{
				cout<<ar[i]<<" ";
			}
			cout<<"\n";
		}
		
};

int main()
{
	array a;
	
	int m,n;
	
	cout<<"Enter m:\n";
	cin>>m;
	
	cout<<"Enter n:\n";
	cin>>n;
	
	a.insert(m,n);
	a.display();
	
	return 0;
}
