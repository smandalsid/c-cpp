#include <iostream>
using namespace std;

class shape
{
    public:
        virtual void getarea()=0; // pure virtual function
};

class rectangle: public shape
{
    public:
        int l,b;
        void getarea()
        {
            cout<<"Enter length and breadth:\n";
            cin>>l>>b;
            cout<<"Area of the rectangle is:"<<l*b<<"\n";
        }
};

class circle: public shape
{
    public:
        int rad;
        void getarea()
        {
            cout<<"Enter circle radius:\n";
            cin>>rad;
            cout<<"The area of the circle is: "<<3.14*rad*rad<<"\n";
        }
};

int main()
{
    circle c;
    rectangle r;
    shape *ptr;
    ptr=&c;
    ptr->getarea();
    // c.getarea();
    // r.getarea();
    return 0;
}