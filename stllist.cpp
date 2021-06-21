#include<iostream>
#include<list>
using namespace std;

void display(list<int> l)
{
    list<int>::iterator iter;
    for (iter=l.begin();iter!=l.end();iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<"\n";
    cout<<"\n";
}

bool odd(const int &x)
{
    if (x%2!=0)
        return true;
    else
        return false;
}

bool prime(const int &x)
{
    int i;
    for (i=2;i<x/2;i++)
    {
        if (x%i==0)
        return false;
    }
    return true;

}

int main()
{
    list<int> l1;
    // l1.assign(5,10);
    // display(l1);

    for (int i=5;i>=1;i--)
    {
        l1.push_back(i);
    }

    // display(l1);

    // l1.sort();
    // display(l1);

    // l1.reverse();
    // display(l1);

    // l1.pop_front();
    // l1.pop_back();
    // display(l1);

    list<int> l2;
    
    for (int i=1;i<=10;i++)
    {
        l2.push_back(i);
        // l2.push_back(i);
    }
    
    display(l2);

    // l2.remove(2);
    // display(l2);

    // l2.unique();

    // display(l2);

    // list::swap() in C++ STL– This function is used to swap the contents of one list with another list of same type and size.
    // list merge() function in C++ STL– Merges two sorted lists into one
    // list::clear() in C++ STL– clear() function is used to remove all the elements of the list container, thus making it size 0.

    // l2.remove_if(odd);
    // display(l2);

    l2.remove_if(prime);
    display(l2);

    return 0;
}