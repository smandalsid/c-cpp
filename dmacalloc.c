//               caloc()
// void *                  calloc(size_of   n,      size_of     size)
//retrurn type                    size of array      size of each element of array
// on success return address of allocated memory block
// on failure returns NULL

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, *arr,i;
	printf("Enter size:\n");
	scanf("%d",&n);
	arr=(int *)calloc(n,sizeof(int));
	if (arr==NULL)
	{
		printf("Overflow\n");
	}
	else
	{
		printf("ELements:\n");
		for (i=0;i<n;i++)
		{
			printf("%d",*(arr+i));
		}
	}
	return 0;
}
