#include<iostream>
#include<vector>
#include<utility>
#include<math.h>
using namespace std;

int presentinx(int ys[],int item, int l)
{
    for (int i=0;i<l;i++)
    {
        if (ys[i]==item)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<pair<int,int>> points;
    pair<int,int> point;
    int i,j,n;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>point.first;
        cin>>point.second;
        points.push_back(point);
    }

    int count[n]={0};
    int xs[n];

    int yslength=0;

    for (auto iter=points.begin(); iter!=points.end(); iter++)
    {
        if (presentinx(xs,iter->first,yslength)!=-1)
        {
            count[presentinx(xs,iter->first,yslength)]++;
        }
        else
        {
            xs[yslength]=iter->first;
            count[yslength]++;
            yslength++;
        }
    }

    int temp;
    for (i=0;i<yslength;i++)
    {
        for (j=0;j<yslength-1-i;j++)
        {
            if (count[j]<count[j+1])
            {
                temp=count[j];
                count[j]=count[j+1];
                count[j+1]=temp;
                temp=xs[j];
                xs[j]=xs[j+1];
                xs[j+1]=temp;
            }
        }
    }

    // for (i=0;i<yslength;i++)
    // {
    //     cout<<xs[i]<<" "<<count[i]<<"\n";
    // }

    // cout<<"\n";

    int maxx=count[0];

    int verticalx[n];
    int verticaly[n];
    int niggax,niggay;
    int verticalpos=0;
    i=0;
    int distance=0,x1,y1,x2,y2;
    int finalx1,finalx2,finaly1,finaly2;

    while(count[i]==maxx)
    {
        for (auto iter=points.begin();iter!=points.end();iter++)
        {
            if (iter->first==xs[i])
            {
                verticalx[verticalpos]=iter->first;
                verticaly[verticalpos]=iter->second;
                verticalpos++;
            }
        }

        for (i=0;i<verticalpos;i++)
        {
            for (j=0;j<verticalpos-1-i;j++)
            {
                if (verticaly[j]>verticaly[j+1])
                {
                    temp=verticalx[j];
                    verticalx[j]=verticalx[j+1];
                    verticalx[j+1]=temp;
                    temp=verticaly[j];
                    verticaly[j]=verticaly[j+1];
                    verticaly[j+1]=temp;
                }
            }
        }

        x1=verticalx[0];
        y1=verticaly[0];
        x2=verticalx[verticalpos-1];
        y2=verticaly[verticalpos-1];

        if (distance<pow(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)),.5))
        {
            // cout<<"\n\n";
            // cout<<x1<<"\n";
            // cout<<y1<<"\n";
            // cout<<x2<<"\n";
            // cout<<y2<<"\n";
            finalx1=x1;
            finalx2=x2;
            finaly1=y1;
            finaly2=y2;
            distance=pow(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)),.5);
        }
        i++;
        verticalpos=0;
    }

    cout<<"\n\n";
    cout<<finalx1<<"\n";
    cout<<finaly1<<"\n";
    cout<<finalx2<<"\n";
    cout<<finaly2<<"\n";

    return 0;
}

// 11
// 3
// 5
// 3
// 12
// 3
// 15
// 14
// 15
// 3
// 85
// 4
// 11
// 4
// 150
// 2
// 2
// 4
// 70
// 4
// 72
// 3
// 115

// 10
// 3
// 5
// 3
// 10
// 3
// 15
// 14
// 15
// 3
// 85
// 4
// 11
// 4
// 15
// 2
// 2
// 4
// 70
// 4
// 72