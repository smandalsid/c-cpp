#include<iostream>
using namespace std;

class base
{
    public:
        void print()
        {
            cout<<"Hello1\n";
        }
};

class derived: public base
{
    public:
        void print()
        {
            cout<<"Hello2\n";
        }

};

int main()
{
    derived obj;
    obj.base::print();
    return 0;
}