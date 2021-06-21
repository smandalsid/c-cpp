#include<stdio.h>
#include<stdlib.h>

int add(int a, int b)
{
	return a+b;
}

int subtract(int a, int b)
{
	return a-b;
}

int multiply(int a, int b)
{
	return a*b;
}

float divide(float a, float b)
{
	float result;
	result=(float)a/b;
	return result;
}

void main()
{
	int ch,a,b,result;
	float res;
	float x,y;
	
	while(1)
	{
	printf("Arithmetic operations\n");
	printf("1) Addition\n");
	printf("2) Subtraction\n");
	printf("3) Multiplication\n");
	printf("4) Division\n");
	printf("5) Exit\n");
	printf("Enter choice:\n");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1:
		{
			printf("Enter value of a:\n");
			scanf("%d",&a);
			printf("Enter value of b:\n");
			scanf("%d",&b);
			result=add(a,b);
			printf("The addition is: %d\n",result);
			break;
		}
		case 2:
		{
			printf("Enter value of a:\n");
			scanf("%d",&a);
			printf("Enter value of b:\n");
			scanf("%d",&b);
			result=subtract(a,b);
			printf("The subtraction is: %d\n",result);
			break;
		}
		case 3:
		{
			printf("Enter value of a:\n");
			scanf("%d",&a);
			printf("Enter value of b:\n");
			scanf("%d",&b);
			result=multiply(a,b);
			printf("The multiplication is: %d\n",result);
			break;
		}
		case 4:
		{
			printf("Enter value of a:\n");
			scanf("%f",&x);
			printf("Enter value of b:\n");
			scanf("%f",&y);
			res=divide(x,y);
			printf("The division is: %f\n",res);
			break;
		}
		case 5:
		{
			exit(0);
		}
		default:
		{
			printf("Wrong choice\n");
			break;
		}
	}
	}
}
