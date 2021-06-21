#include<iostream>
using namespace std;

class test
{
	int x,y;
	public:
	test(int x=0, int y=0)
	{
		this->x=a;
		this->y=b;
	}
	test &setx(int a)
	{
		x=a;
		return *this;
	}
	test &sety(int b)
	{
		y=b;
		return *this;
	}
	void print()
	{
		cout<<"x="<<x<<" y="<<y<<endl;
	}
};

int main()
{
	test obj(5,5);
	//obj.setx(10).sety(20);
	obj.print();
	return 0;
}
