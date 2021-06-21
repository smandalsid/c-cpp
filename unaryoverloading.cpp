
//      UNARY OVERLOADING

#include<iostream>
using namespace std;

class number
{
    int n;

    public:

    number()
    {
        n=0;
    }

    number(int n)
    {
        this->n=n;
    }

    // void operator++()
    // {
    //     n++;
    // }

    number operator++()
    {
        number temp;
        temp.n=++n;
        return temp;
    }

    // void operator++(int)
    // {
    //     n++;
    // }

    number operator++(int)
    {
        number temp;
        temp.n=n++;
        return temp;
    }

    // void operator--()
    // {
    //     --n;
    // }

    number operator--()
    {
        number temp;
        temp.n=--n;
        return temp;
    }

    // void operator--(int)
    // {
    //     n--;
    // }

    number operator--(int)
    {
        number temp;
        temp.n=n--;
        return temp;
    }

    void display()
    {
        cout<<"x: "<<n<<"\n";
    }

};

int main()
{
    number n1(10);

    number n2;

    n2=n1++;
    n1.display();
    n2.display();

    return 0;
}