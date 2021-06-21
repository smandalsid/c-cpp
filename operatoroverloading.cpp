#include<iostream>
using namespace std;

class complex
{
	int real;
	int imag;
	
	/*friend void operator++()
	{
		++real;
		++imag;
	}
	
	friend complex operator+(const complex &pass)
	{
		complex temp;
		temp.real=this->real+pass.real;
		temp.imag=this->imag+pass.imag;
		return temp;
	}*/
	
	public:
	
	complex()
	{
		real=0;
		imag=0;
	}
	
	complex(int real, int imag)
	{
		this->real=real;
		this->imag=imag;
	}
	
	void operator++()
	{
		++real;
		++imag;
	}
	
	void operator--()
	{
		--real;
		--imag;
	}
	
	complex operator+(const complex &pass)
	{
		complex temp;
		temp.real=this->real+pass.real;
		temp.imag=this->imag+pass.imag;
		return temp;
	}
	
	complex operator-(const complex &pass)
	{
		complex temp;
		temp.real=this->real-pass.real;
		temp.imag=this->imag-pass.imag;
		return temp;
	}
	
	void display()
	{
		cout<<real<<" "<<imag<<"\n";
	}
	
	void displayascomplex()
	{
		cout<<real<<"+"<<imag<<"i\n";
	}
	
};

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	complex c1(a,b),c2(c,d),c3;
	
	--c1;
	c1.display();
	c3=c1-c2;
	c3.displayascomplex();
	++c2;
	c2.display();
	c3=c1+c2;
	c3.displayascomplex();
	
	return 0;
}
