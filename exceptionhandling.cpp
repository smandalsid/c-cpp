#include<iostream>
using namespace std;

int main()
{
    int n,d;
    cout<<"Enter numerator and denominator:\n";
    cin>>n>>d;
    try
    {
        if (d==0)
        {
            throw d;
        }
        cout<<"Division: "<<n/d<<"\n"; // exception will happen here so we have to add try here
    }
    catch(int t)
    {
        cout<<"Divide by zero is not allowed\n";
    }
    
    
    return 0;
}