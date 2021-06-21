#include<iostream>
using namespace std;

void root(int tree[], int r)
{
	if ()
	tree[1]=r;
}

void lci(int tree[], int r, int c)
{
	tree[2*r]=c;
}

void rci(int tree[], int r, int c)
{
	tree[2*r+1]=c;
}

int main()
{

	int tree[8],i,r,lc,rc, parent;
	
	for (i=0;i<8;i++)
	{
		
	}
	
	cout<<"Enter tree's root\n";
	cin>>r;
	root(tree,r);
	for (i=1;i<8;i++)
	{
		if ((i*2+1)<8)
		{
			cout<<"Enter left child of "<<tree[i]<<":\n";
			cin>>lc;
			lci(tree,i,lc);
			cout<<"Enter right child "<<tree[i]<<":\n";
			cin>>rc;
			rci(tree,i,rc);
		}
		else if (i<8)
		{
			
		}
	}
	
	for (i=1;i<8;i++)
	cout<<tree[i]<<" ";
	
	return 0;
}
