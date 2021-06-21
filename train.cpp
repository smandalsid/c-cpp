
//      TRAIN

#include<iostream>
#include<string.h>
using namespace std;

class trains
{
    int no;
    char name[10];

    public:

    friend class railways;
    friend istream& operator >> (istream &in, trains &obj);

};

istream& operator >> (istream &in, trains &obj)
{
    cout<<"Enter train number:\n";
    in>>obj.no;
    cout<<"Enter train name:\n";
    in>>obj.name;
    return in;
}

class railways
{
    trains t[3];
    
    public:

    void input()
    {
        for (int i=0;i<3;i++)
        {
            cin>>t[i];
        }
    }

    void search(int number)
    {
        for (int i=0;i<3;i++)
        {
            if (t[i].no==number)
            {
                cout<<t[i].no<<"\t"<<t[i].name<<"\n";
            }
        }
    }

    void search(char *sname)
    {
        for (int i=0;i<3;i++)
        {
            if (strcmp(sname, t[i].name)==0)
            {
                cout<<t[i].no<<"\t"<<t[i].name<<"\n";
            }
        }
    }

};

int main()
{
    railways r;
    r.input();

    int ch;

    cout<<"Search trains with name of number?\n";
    cout<<"1) Name\n";
    cout<<"2) Number\n";

    cin>>ch;

    if (ch==1)
    {
        char name[10];
        cout<<"Enter name:\n";
        cin>>name;
        r.search(name);
    }
    else
    {
        int number;
        cout<<"Enter number:\n";
        cin>>number;
        r.search(number);
    }

    return 0;
}