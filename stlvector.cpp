// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int> &v)
// {
//     for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
//     {
//         cout<<*i<<" ";
//     }
//     cout<<"\n";
    
// }

// int main()
// {
//     vector<int> a;
//     int i;
//     int ele,size;
//     cout<<"Enter size:\n";
//     cin>>size;
//     for ( i = 0; i < size; i++)
//     {
//         cout<<"Enter element:\n";
//         cin>>ele;
//         a.push_back(ele);
//     }
//     display(a);
//     a.pop_back();
//     display(a);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    vector<int>::iterator iter;
    for (iter=v.begin();iter!=v.end();iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v; // creates a zero length vector
    vector<int> v2(3); // creates a vector of size 3
    vector<char> v3(3);
    vector<double> v4(3);
    vector<char> v5(v3); // create a copy of v3
    vector<int> v6(3,10); // has 3 10's

    

    vector<int>::iterator iter;
    int size;
    cout<<"Enter size:\n";
    cin>>size;
    for (int i=0;i<size;i++)
    {
        v.push_back(i);
    }
    display(v);

    iter=v.begin();
    // v.insert(iter,100); // to insert element(100) at iter
    // display(v);

    v.insert(iter+1,10,100); // to insert 100 10 times at iter=1
    display(v);

    return 0;
}