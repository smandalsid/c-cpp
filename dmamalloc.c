//DYNAMIC MEMORY ALLOCATION

//#include<stdlib.h>
//malloc()-> to allocate memory to structures
// calloc()-> to allocate memory to arrays
// realloc()-> used to increase or decrease size of array
// free()-> to delete the memory

// 				malloc()

//     void *          malloc(size_t) 
// return type              takes unsigned int as argument
// the return type void pointer is ageneric pointer and can be mapped to anything like int, char, etc.
// on success it returns base address of memory block
// on failure it return NULL pointer

#include<stdio.h>
#include<stdlib.h>

struct emp
{
	int eno;
	char ename[20];
	float esal;
};

void show(struct emp *ptr)
{
	printf("%d",ptr->eno);
	printf("%s",ptr->ename);
	printf("%f",ptr->esal);
}

int main()
{
	struct emp *ptr;
	ptr=(struct emp*)malloc(sizeof(struct emp));
	if (ptr==NULL)
	{
		printf("Overflow\n");
	}
	else
	{
		printf("Enter eno:\n");
		scanf("%d",&ptr->eno);
//		fgets(ptr->ename, 20, stdin);
		scanf("%s",ptr->ename);
		scanf("%f",&ptr->esal);
	}
	show(ptr);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct doj
{
	int dd;
	int mm;
	int yyyy;
};

struct emp
{
	int emp;
	char name[40];
	long int num;
	struct doj date;
	struct emp *next;
};

struct emp *top;

int main()
{
	int n,i;
	printf("Enter number of employees:\n");
	scanf("%d",&n);
	struct emp *ptr;
	ptr->next=NULL;
	for (i=0;i<n;i++)
	{
		ptr=(struct emp*)malloc(sizeof(struct emp));
		if (ptr==NULL)
		{
			printf("underflow\n");
		}
		else
		{
			printf("Employee: %d\n",i+1);
			printf("Enter emp no.:\n");
			scanf("%d",&ptr->emp);
			printf("Enter name:\n");
			scanf("%s",ptr->name);
			printf("Date of joining:\n");
			printf("dd:\n");
			scanf("%d",&ptr->date.dd);
			printf("mm:\n");
			scanf("%d",&ptr->date.mm);
			printf("yyyy:\n");
			scanf("%d",&ptr->date.yyyy);
			printf("Phone number:\n");
			scanf("%ld", &ptr->num);
			ptr->next=NULL;
			if (top==NULL)
			{
				top=ptr;
			}
			else
			{
				ptr->next=top;
				top=ptr;
			}
		}
	}
	
	for (ptr=top;ptr!=NULL;ptr=ptr->next)
	{
		if (((ptr->date.dd<01 && ptr->date.mm<01 && ptr->date.yyyy<2010)||(ptr->date.yyyy<2010)||(ptr->date.mm<01 && ptr->date.yyyy<2010)) && ptr->emp%5==0)
		{
			printf("%s\n",ptr->name);
			printf("%ld\n",ptr->num);
		}
	}
	
	return 0;
}
