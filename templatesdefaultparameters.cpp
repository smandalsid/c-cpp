#include<iostream>
using namespace std;

// this will get data types by default and when they are mentioned they will be taken what they are mentioned
// template<class T1=int, class T2=float, class T3=char, ....... n number of members with different data types>

template<class T1=int, class T2=float>
class test
{
    public:
        T1 x;
        T2 y;
        test(T1 x, T2 y)
        {
            this->x=x;
            this->y=y;
        }
        void display()
        {
            cout<<x<<"\n"<<y<<"\n";
        }
};

int main()
{
    test<> t(4,6.4);
    t.display();
    test<float,char> t2(4.56,'a');
    t2.display();
    return 0;
}