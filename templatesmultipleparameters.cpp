#include<iostream>
using namespace std;

// helps to use templates with more than one parameters woth different data types
// template<class t1, class T2, ..... n number of data types can be passed>

template <class T1, class T2>
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
            cout<<x<<y<<"\n";
        }
};

int main()
{
    test<int,char> obj1(1,'a');
    obj1.display();
    test<char,char> obj2('x','y');
    obj2.display();
    return 0;
}