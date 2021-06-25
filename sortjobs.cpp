#include<iostream>
#include<string.h>
using namespace std;

class Job
{
    public:
        char jobname[20];
        char jobid[20];
        int tame;
        int mamory;
        void get(char jn[], char jid[], int tame, int mamory)
        {
            strcpy(jobname,jn);
            strcpy(jobid,jid);
            this->tame=tame;
            this->mamory=mamory;
        }
};

class SubJob
{
    public:
        int n;
        void getn(int x)
        {
            this->n=x;
        }
        Job jobs[10];
        virtual void sort()
        {

        }        
};

class Time: public SubJob
{
    public:
        int i,j;
        Job temp;
        void sort()
        {
            for (i=0;i<n;i++)
            {
                for (j=0;j<n-1-i;j++)
                {
                    if (jobs[j].tame>jobs[j+1].tame)
                    {
                        temp=jobs[j];
                        jobs[j]=jobs[j+1];
                        jobs[j+1]=temp;
                    }
                }
            }
        }
        void display()
        {
            for (int i=0;i<n;i++)
            {
                cout<<jobs[i].jobname<<"\n";
                cout<<jobs[i].jobid<<"\n";
                cout<<jobs[i].tame<<"\n";
                cout<<jobs[i].mamory<<"\n";
            }
        }
};

class Memory: public SubJob
{
    public:
        int i,j;
        Job temp;
        void sort()
        {
            for (i=0;i<n;i++)
            {
                for (j=0;j<n-1-i;j++)
                {
                    if (jobs[j].mamory>jobs[j+1].mamory)
                    {
                        temp=jobs[j];
                        jobs[j]=jobs[j+1];
                        jobs[j+1]=temp;
                    }
                }
            }
        }
        void display()
        {
            for (int i=0;i<n;i++)
            {
                cout<<jobs[i].jobname<<"\n";
                cout<<jobs[i].jobid<<"\n";
                cout<<jobs[i].tame<<"\n";
                cout<<jobs[i].mamory<<"\n";
            }
        }
};

int main()
{
    int n;
    cin>>n;
    SubJob *ptr;
    Time t;
    Memory m;
    char tempn[20], tempid[20];
    int temptame,tempmamory;
    t.getn(n);
    m.getn(n);

    for (int i=0;i<n;i++)
    {
        cin>>tempn;
        cin>>tempid;
        cin>>temptame;
        cin>>tempmamory;
        t.jobs[i].get(tempn,tempid,temptame,tempmamory);
        m.jobs[i].get(tempn,tempid,temptame,tempmamory);
    }
    int ch;
    cin>>ch;
    if (ch==1)
    {
        ptr=&t;
        ptr->sort();
        t.display();
    }
    else
    {
        ptr=&m;
        ptr->sort();
        m.display();
    }
    return 0;
}

// 3
// a
// j1
// 56
// 78
// b
// j2
// 34
// 56
// c
// j3
// 28
// 68
// 1