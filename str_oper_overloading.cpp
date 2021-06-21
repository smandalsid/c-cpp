#include<iostream>
#include<string.h>
using namespace std;

class overloadstr
{

    public:

    char str[20];
    int l;

    void input()
    {
        cout<<"Enter string\n";
        cin.getline(str,20,'\n');
    }

    overloadstr operator+(overloadstr addstr)
    {
        overloadstr obj;
        // strcat
        strcat(str,addstr.str);
        strcpy(obj.str,str);
        return obj;
    }

    // void display()
    // {
    //     int i;

    //     for (i=0;i<l;i++)
    //     {
    //         cout<<str[i];
    //     }

    // }

};

int main()
{
    overloadstr s1,s2,s3;

    s1.input();
    s2.input();
    // strcmp(s3.str,' ');

    s3=s1+s2;

    int l;
    l=strlen(s3.str);
    
    for (int i=0;i<l;i++)
    {
        cout<<s3.str[i];
    }

    return 0;
}