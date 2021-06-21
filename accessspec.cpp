#include<iostream>
using namespace std;

class base
{
    public:
        int x;
        base()
        {
            x=0;
            y=0;
            z=0;
        }
        void print()
        {
            cout<<"y: "<<y<<"\n";
        }
    protected:
        int y;
    private:
        int z;
};

class derived: public base
{
    
};

void function(base obj)
{
    cout<<"x: "<<obj.x<<"\n";
    // cout<<"y: "<<obj.y<<"\n";
    obj.print();
    // cout<<"z: "<<obj.z<<"\n";
}

int main()
{
    base obj1;
    function(obj1);
    return 0;
}