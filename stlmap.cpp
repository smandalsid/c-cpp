#include<iostream>
#include<map>

using namespace std;

void display(map<int,int> &m)
{
    map<int,int>::iterator iter;
    cout<<"Key\telement:\n";
    for (iter=m.begin();iter!=m.end();iter++)
    {
        cout<<iter->first<<"\t"<<iter->second<<"\n";
    }
}

int main()
{
    map<int,int> map1;
    map1.insert(pair<int,int>(1,10));
    map1.insert(pair<int,int>(2,20));
    map1.insert(pair<int,int>(3,20));
    map1.insert(pair<int,int>(4,20));
    display(map1);

    // map<int,int> map2(map1.begin(), map1.end());

    // display(map2);

    // map2.erase(map2.begin(),map2.find(3));
    // display(map2);

    // map2.erase(4);
    // display(map2);

    cout<<"Key\tElement:\n";
    cout<<map1.lower_bound(4)->first<<"\t";
    cout<<map1.lower_bound(4)->second<<"\n";
    cout<<"Key\tElement:\n";
    cout<<map1.upper_bound(4)->first<<"\t";
    cout<<map1.upper_bound(4)->second<<"\n";
    
    return 0;
}