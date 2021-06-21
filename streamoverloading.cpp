
//      STREAM OVERLOADING

#include<iostream>
using namespace std;

class display
{
    int x;

    public:

    // int x;

    display()
    {
        x=0;
    }

    display(int x)
    {
        this->x=x;
    }

    friend istream& operator >> (istream &in, display &obj);
    friend ostream& operator << (ostream &out, display &obj);

};

istream& operator >> (istream &in, display &obj)
{
    in>>obj.x;
    return in;
}

ostream& operator << (ostream &out, display &obj)
{
    out<<obj.x<<"\n";
    return out;
}

int main()
{
    display d;

    cin>>d;
    cout<<d;

    // int x;

    // cin>>x;
    // cout<<x;

    return 0;
}