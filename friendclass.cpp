
        // FRIEND CLASS

#include<iostream>
using namespace std;

class numbers
{
    int a,b;
    
    public:

    numbers()
    {
        cout<<"Enter a:\n";
        cin>>a;
        cout<<"Enter b:\n";
        cin>>b;
    }

    friend class operations;

};

class operations
{

    int temp;

    public:

    void add(numbers &);
    void subtract(numbers &);
    void multiply(numbers &);
    void divide(numbers &);

    void display();

};

void operations::add(numbers &n)
{
    temp=n.a+n.b;
}

void operations::subtract(numbers &n)
{
    temp=n.a-n.b;
}

void operations::multiply(numbers &n)
{
    temp=n.a*n.b;
}

void operations::divide(numbers &n)
{
    temp=n.a/n.b;
}

void operations::display()
{
    cout<<temp;
}

int main()
{
    numbers n;
    operations o;

    o.add(n);
    o.display();
    o.subtract(n);
    o.display();
    o.multiply(n);
    o.display();
    o.divide(n);
    o.display();

    return 0;
}