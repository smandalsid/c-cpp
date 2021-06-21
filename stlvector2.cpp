#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int i;
    for (i=1;i<4;i++)
    {
        v.push_back(i);
    }

    // for (auto iter1=v.begin();iter1!=v.end();iter1++)
    // {
    //     cout<<*iter1<<"\n";
    // }
    // for (auto iter2=v.rbegin();iter2!=v.rend();iter2++)
    // {
    //     cout<<*iter2<<"\n";
    // }

    // cout<<v.size()<<"\n";
    // cout<<v.capacity()<<"\n";
    // cout<<v.max_size()<<"\n";
    // v.resize(3);
    // cout<<v.capacity()<<"\n";


    // cout<<v.front()<<"\n";
    // cout<<v.back()<<"\n";

    // cout<<v[1];

    vector<int> v2;
    v2.assign(5,10);

    // for (auto i=v2.begin();i!=v2.end();i++)
    // {
    //     cout<<*i<<"\n";
    // }

    // vector<int>::iterator iter;
    // iter=v2.end();
    // v2.insert(iter,50);
    // v2.pop_back();
    // for (auto i=v2.begin();i!=v2.end();i++)
    // {
    //     cout<<*i<<"\n";
    // }

    v.swap(v2);

    // for (auto i=v.begin();i!=v.end();i++)
    // {
    //     cout<<*i<<"\n";
    // }

    // for (auto i=v2.begin();i!=v2.end();i++)
    // {
    //     cout<<*i<<"\n";
    // }

    v2.erase(v2.begin());

    // for (auto i=v2.begin();i!=v2.end();i++)
    // {
    //     cout<<*i<<"\n";
    // }

    v2.clear();

    for (auto i=v2.begin();i!=v2.end();i++)
    {
        cout<<*i<<"\n";
    }

    return 0;
}