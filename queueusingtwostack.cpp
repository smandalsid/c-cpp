#include<iostream>
using namespace std;
#define size 5
int a,b;
int stack1[size],stack2[size],top1=-1,top2=-1,count=0;
void push1(int value){
	if(top1 >= size-1){
		cout<<"Stack is full"<<endl;
	}else{
		top1++;
		stack1[top1] = value;
	}
}
int pop1(){
	if(top1<=-1){
		cout<<"Stack is empty"<<endl;
	}else{
		return stack1[top1--];
	}
}
void push2(int value){
	if(top2 >= size-1){
		cout<<"Stack is full"<<endl;
	}else{
		top2++;
		stack2[top2] = value;
	}
}
int pop2(){
	if(top2<=-1){
		cout<<"Stack is empty"<<endl;
	}else{
		return stack2[top2--];
	}
}
void enqueue(int x){
	push1(x);
	count++;
}
void dequeue(){
	int i;
	if(top1==-1 && top2==-1){
		cout<<"Queue is empty"<<endl;
	}
	else{
		for(i=0;i<count;i++){
			a = pop1();
			push2(a);
		}
		int b = pop2();
		cout<<"The dequeued element is "<<b<<endl;
		count--;
		for(i=0;i<count;i++){
			 a = pop2();
			push1(a);
		}
	}
}
void display(){
	int i;
	cout<<"The elements of queue are: "<<endl;
	for(i=0;i<=top1;i++){
		cout<<stack1[i]<<" ";
	}
}
int main(){
	enqueue(5);
	enqueue(-1);
	enqueue(2);
	dequeue();
	dequeue();
	dequeue();
	enqueue(1);
	enqueue(2);
	enqueue(3);
	display();
	
}