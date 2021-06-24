#include<iostream>
using namespace std;

class line
{
    public:
        int sx,sy,ex,ey;
        int T_Tx,T_Ty;
        void get()
        {
            cin>>sx>>sy>>ex>>ey;
        }
};

class T_T
{
    public:
        int x,y;
        int count=0;
        int lines[10];
        int linelength=0;
        int isthere(int x)
        {
            for (int i=0;i<linelength;i++)
            {
                if (x==lines[i])
                return 0;
            }
            return 1;
        }
};

int present_in_T_T(T_T tts[], int x, int y, int length_of_T_T)
{
    int i;

    for (i=0;i<length_of_T_T;i++)
    {
        if (tts[i].x==x && tts[i].y==y)
        {
            return i;
        }
    }
    return -1;

}

void display(T_T tts[], int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<tts[i].linelength;j++)
        cout<<tts[i].lines[j]+1<<" ";
        cout<<"\n";
        cout<<tts[i].x<<","<<tts[i].y<<":\t"<<tts[i].count<<"\n";
    }
}

int main()
{
    int n,i,j;
    cin>>n;
    line l[n];

    T_T tts[n];
    int length_of_T_T=0;

    for (i=0;i<n;i++)
    {
        l[i].get();
    }

    int x1,x2,y1,y2;

    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            x1=(2*l[i].ex+1*l[i].sx)/3;
            y1=(2*l[i].ey+1*l[i].sy)/3;
            x2=(2*l[j].ex+1*l[j].sx)/3;
            y2=(2*l[j].ey+1*l[j].sy)/3;

            if (x1==x2 && y1==y2)
            {
                // cout<<l[i].sx<<","<<l[i].sy<<"\t"<<l[i].ex<<","<<l[i].ey<<"\n";
                // cout<<l[j].sx<<","<<l[j].sy<<"\t"<<l[j].ex<<","<<l[j].ey<<"\n\n";
                if (present_in_T_T(tts,x1,y1,length_of_T_T)==-1)
                {
                    tts[length_of_T_T].x=x1;
                    tts[length_of_T_T].y=y1;
                    tts[length_of_T_T].count=1;
                    if (tts[length_of_T_T].isthere(i)==1)
                    tts[length_of_T_T].lines[tts[length_of_T_T].linelength++]=i;
                    if (tts[length_of_T_T].isthere(j)==1)
                    tts[length_of_T_T].lines[tts[length_of_T_T].linelength++]=j;
                    length_of_T_T++;
                    l[i].T_Tx=x1;
                    l[i].T_Ty=y1;
                }
                else
                {
                    tts[present_in_T_T(tts,x1,y1,length_of_T_T)].count++;
                    if (tts[present_in_T_T(tts,x1,y1,length_of_T_T)].isthere(j)==1)
                    tts[present_in_T_T(tts,x1,y1,length_of_T_T)].lines[tts[present_in_T_T(tts,x1,y1,length_of_T_T)].linelength++]=j;
                }
            }

        }
    }

    for (i=0;i<length_of_T_T;i++)
    {
        if (tts[i].count==1)
        {
            tts[i].count++;
        }
    }

    T_T temp;
    for (i=0;i<length_of_T_T;i++)
    {
        for (j=0;j<length_of_T_T-i-1;j++)
        {
            if (tts[j].count>tts[j+1].count)
            {
                temp=tts[j];
                tts[j]=tts[j+1];
                tts[j+1]=temp;
            }
        }
    }

    display(tts,length_of_T_T);

    return 0;
}



// 5
// 0
// 0
// 3
// 3
// 0
// 2
// 3
// 2
// 2
// 0
// 2
// 3
// 2
// 0
// 5
// 0
// 4
// 2
// 4
// -1