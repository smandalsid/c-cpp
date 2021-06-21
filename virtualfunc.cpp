// EXAMPLE 1

// #include<iostream>
// using namespace std;

// class base
// {
//     public:
//         void show()
//         {
//             cout<<"Base class show\n";
//         }

//         virtual void print()
//         {
//             cout<<"Base class print\n";
//         }

// };

// class derived: public base
// {
//     public:
//         void show()
//         {
//             cout<<"Derived class show\n";
//         }
//         void print()
//         {
//             cout<<"Derived class print\n";
//         }
// };

// int main()
// {
//     base *ptr;
//     derived obj;
//     ptr=&obj;
//     ptr->show();
//     ptr->print();
//     return 0;
// }

// EXAMPLE 2

#include<iostream>
using namespace std;

class animal
{
    public:
        virtual void print()
        {
            cout<<"I eat food\n";
        }
};

class dog: public animal
{
    public:
        void print()
        {
            cout<<"I eat kibble\n";
        }
};

class cat: public animal
{
    public:
        void print()
        {
            cout<<"I eat shit\n";
        }
};

int main()
{
    animal *ptr;
    dog mishti;
    cat poop;

    ptr=&mishti;

    ptr->print();

    ptr=&poop;
    ptr->print();

    return 0;
}