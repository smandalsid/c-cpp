// #include<iostream>
// using namespace std;

// template<class T>
// class test
// {
//     public:
//         T x;
//         test(T x)
//         {
//             this->x=x;
//         }
//         void display();
// };

// template <class T>
// void test<T>::display()
// {
//     cout<<x<<"\n";
// }

// int main()
// {
//     test<char> obj('a');
//     obj.display();
//     return 0;
// }

#include<iostream>
using namespace std;

void func(int a) // though both the parameterised function and templatised function can be matched but exact match gets more priority in this kind of funtion overloading
{
    cout<<"First\n";
    cout<<a<<"\n";
}

template <class T>
void func(T a)
{
    cout<<"Second\n";
    cout<<a<<"\n";
}

int main()
{
    func(4.5);
    return 0;
}