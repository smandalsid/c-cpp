// #include<iostream>
// using namespace std;

// class stu
// {
//     protected:
//         int id;
//         char name[20];
//     public:
//         void getstu();
// };

// void stu::getstu()
// {
//     cout<<"Enter ID:\n";
//     cin>>id;
//     cout<<"Enter name:\n";
//     cin>>name;
// }

// class sports
// {
//     protected:
//         int spmarks;
//     public:
//         void getsports();
// };

// void sports::getsports()
// {
//     cout<<"Enter marks in sports:\n";
//     cin>>spmarks;
// }

// class marks: public stu
// {

//     public:
//         int x,y,z;
//         void getmarks();
// };

// void marks::getmarks()
// {
//     cout<<"Enter marks of subjects x,y and z:\n";
//     cin>>x>>y>>z;
// }

// class result: public marks, public sports
// {
//     public:
//         int tot,avg;
//         void calc();
//         void show()
//         {
//             calc();
//             cout<<"Studend ID:\n";
//             cout<<id<<"\n";
//             cout<<"Student name:\n";
//             cout<<name<<"\n";
//             cout<<"Total marks for 3 subjects:\n";
//             cout<<tot<<"\n";
//             cout<<"Average+sports marks:\n";
//             cout<<avg+spmarks<<"\n";
//         }
// };

// void result::calc()
// {
//     tot=x+y+z;
//     avg=tot/3;
// }

// int main()
// {
//     result r;
//     r.getstu();
//     r.getmarks();
//     r.getsports();
//     r.show();
//     return 0;
// }

#include<iostream>
using namespace std;

class GST
{
    public:
        double value;
        void get_data();
        virtual void display()
        {
            // idhar kuch bhi dalo nahi use hoga
        }
};

void GST::get_data()
{
    cout<<"Enter cost:\n";
    cin>>value;
}

class Solar_heater: public GST
{
    public:
        void display();
};

void Solar_heater::display()
{
    cout<<"Price of solar heater is:\n";
    cout<<value+value*.05<<"\n";
}

class Electric_vehicle: public GST
{
    public:
        void display();
};

void Electric_vehicle::display()
{
    cout<<"Price of electric vehicle is:\n";
    cout<<value+.12*value<<"\n";
}

int main()
{
    GST *ptr;
    Solar_heater s;
    Electric_vehicle e;
    ptr=&s;
    ptr->get_data();
    ptr->display();
    ptr=&e;
    ptr->get_data();
    ptr->display();
    return 0;
}