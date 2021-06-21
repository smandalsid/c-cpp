#include<stdio.h>

//const int max=4;

double get_average(int *arr,int size)
{
	int i, sum=0;
	double avg;
	for (i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	avg=(double)sum/size;
	return avg;
}

void main()
{
	/*int var=20;
	int *p;
	p=&var;
	printf("%p\n",&var);
	printf("%p\n",p);
	printf("%d",*p);*/
	
	/*int *ptr=NULL;
	printf("Value: %p",&ptr);
	printf("Value: %p",ptr);*/
	
	/*int a[5]={10,20,30,40,50};
	int i, *ptr;
	ptr=a;
	
	for (i=0;i<max;i++)
	{
		printf("Address of var[%d] = %p\n",i,ptr);
		printf("value of var[%d] = %d\n",i,*ptr);
		ptr++;
	}*/
	
	/*char *names[]={"Siddharth Mandal","Somit Jain","Shobhit Agrawal","Varun Vishwanathan"};
	//char *ptr=names;
	int i=0;
	for (i=0;i<max;i++)
	{
		printf("The value of names[%d]: %s\n",i,names[i]);
		//ptr++;
	}*/
	
	/*int a;
	int *b;
	int **c;
	
	a=10;
	b=&a;
	c=&b;
	
	printf("%d\n",a);
	printf("%d\n",*b);
	printf("%d\n",**c);*/
	
	int a[5]={1,2,3,4,5};
	double avg;
	
	avg=get_average(a,5);
	
	printf("Average: %f",avg);
	
	
}
