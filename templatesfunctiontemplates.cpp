#include<iostream>
using namespace std;

// make functions of different data types using templates

template<class T1, class T2>
float avg(T1 x, T2 y)
{
    float val;
    val=(x+y)/2;
    return val;
}

template<class T>
void swapp(T &x,T &y)
{
    T temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    float ans;
    ans=avg(2.0,7.0);
    cout<<ans;

    int x, y;
    x=5;
    y=10;

    swapp(x,y);

    cout<<x<<" "<<y<<"\n";

    return 0;
}