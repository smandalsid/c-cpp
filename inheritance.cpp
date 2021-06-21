#include<iostream>
using namespace std;

class shape
{
    protected:
        int width;
        int height;
    public:
        void setwidth(int w)
        {
            width=w;
        }
        void setheight(int h)
        {
            height=h;
        }
};

class rectangle: public shape
{
    public:
        int area()
        {
            return width*height;
        }
};

int main()
{
    rectangle r;
    r.setwidth(5);
    r.setheight(10);

    cout<<"Area: "<<r.area()<<"\n";

    return 0;
}