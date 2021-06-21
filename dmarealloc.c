// realloc()
// using calloc we can allocate memory, but cant reallocate it

//using realloc we can do that
// increase or decrease size of array
//    void*          (void *ptr                        ,                                size_t)
//                     address of block to resize, generic pointer)              size of new block


#include<stdio.h>



int main()
{
	int capacity=5; *stack;
	stack=(int *)calloc(capacity, sizeof(int));
	
	// everytime we insert after capacity is full
	//do capacity ++
	// and then 
	// stack=(void *)realloc(stack,capacity*sizeof(int));
	
	return 0;
}
