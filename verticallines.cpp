#include<iostream>
#include<utility>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    pair<int,int> start[n];
    pair<int,int> end[n];
    for (i=0;i<n;i++)
    {
        cin>>start[i].first;
        cin>>start[i].second;
        cin>>end[i].first;
        cin>>end[i].second;
    }

    int flag1,flag2,count=0;
    for (i=0;i<n;i++)
    {
        flag1=0,flag2=0;
        for (j=0;j<n;j++)
        {
            if (start[i].first==start[j].first && start[i].second==start[j].second && i!=j && start[i].first==end[i].first)
            {
                flag1=1;
            }
            if (end[i].first==start[j].first && end[i].second==start[j].second)
            {
                flag2=1;
            }
        }
        if (flag1==1 && flag2==1)
        {
            count++;
            // cout<<"\n"<<i<<"\n";
            cout<<start[i].first<<","<<start[i].second<<"\t"<<end[i].first<<","<<end[i].second<<"\n";
        }
    }

    for (i=0;i<n;i++)
    {
        flag1=0,flag2=0;
        for (j=0;j<n;j++)
        {
            if (start[i].first==end[j].first && start[i].second==end[j].second && i!=j && start[i].first==end[i].first)
            {
                flag1=1;
            }
            if (end[i].first==end[j].first && end[i].second==end[j].second && i!=j)
            {
                flag2=1;
            }
        }
        if (flag1==1 && flag2==1)
        {
            count++;
            // cout<<"\n"<<i<<"\n";
            cout<<start[i].first<<","<<start[i].second<<"\t"<<end[i].first<<","<<end[i].second<<"\n";
        }
    }

    for (i=0;i<n;i++)
    {
        flag1=0,flag2=0;
        for (j=0;j<n;j++)
        {
            if (start[i].first==end[j].first && start[i].second==end[j].second && i!=j && start[i].first==end[i].first)
            {
                flag1=1;
            }
        }
        for (j=0;j<n;j++)
        {
            if (end[i].first==start[j].first && end[i].second==start[j].second && i!=j && start[i].first==end[i].first)
            {
                flag2=1;
            }
        }
        if (flag1==1 && flag2==1)
        {
            count++;
            cout<<start[i].first<<","<<start[i].second<<"\t"<<end[i].first<<","<<end[i].second<<"\n";
        }
    }

    for (i=0;i<n;i++)
    {
        flag1=0,flag2=0;
        for (j=0;j<n;j++)
        {
            if (start[i].first==start[j].first && start[i].second==start[j].second && i!=j && start[i].first==end[i].first)
            {
                flag1=1;
            }
        }
        for (j=0;j<n;j++)
        {
            if (end[i].first==end[j].first && end[i].second==end[j].second && i!=j && start[i].first==end[i].first)
            {
                flag2=1;
            }
        }
        if (flag1==1 && flag2==1)
        {
            count++;
        }
    }

    cout<<count;

    return 0;
}

// 8
// 3
// 70
// 10
// 70
// 4
// 5
// 14
// 15
// 10
// 60
// 10
// 70
// 20
// 60
// 10
// 60
// 20
// 50
// 30
// 50
// 20
// 60
// 20
// 50
// 30
// 50
// 30
// 40
// 40
// 40
// 30
// 40

// 9
// 3
// 70
// 10
// 70
// 2
// 20
// 2
// 40
// 4
// 5
// 14
// 15
// 10
// 60
// 10
// 70
// 20
// 60
// 10
// 60
// 20
// 50
// 30
// 50
// 20
// 60
// 20
// 50
// 30
// 50
// 30
// 40
// 40
// 40
// 30
// 40