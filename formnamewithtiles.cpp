// string=input()
// name=list(input())
// d={}
// pos=[]
// flag=1

// for x in name:
//     d[x]=name.count(x)

// for i in range(len(string)-len(name)+2):
//     for x in name:
//         if x not in string[i:i+len(name)]:
//             flag=0
//         elif d[x]!=string[i:i+len(name)].count(x):
//             flag=0
            
//     if flag==1:
//         pos.append(i+1)
//     else:
//         flag=1
        
// for x in pos:
//     print(x)



#include<iostream>
#include<string.h>
using namespace std;

int present(char *string, char c, int i, int lname)
{
    int j;
    int border=i+lname-1;
    for (j=i;j<=border;j++)
    {
        if (string[j]==c)
        {
            return 1;
        }
    }
    return 0;
}

int count(char *string, char c, int i, int lname)
{
    int counter=0,j;
    int border=i+lname-1;
    for (j=i;j<=border;j++)
    {
        if (string[j]==c)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    char string[100], name[50];
    cin>>string;
    cin>>name;
    
    int lstring, lname,i,j, flag=1;
    int pos[10],pindex=0;
    
    lstring=strlen(string);
    lname=strlen(name);
    
    for (i=0;i<lstring-lname+1;i++)
    {
        for (j=0;j<lname;j++)
        {
            if (present(string,name[j],i,lname)==0)
            {
                flag=0;
            }
            else if (count(string,name[j],i,lname)!=count(name,name[j],0,lname))
            {
                flag=0;
            }
        }
        
        if (flag==1)
        {
            pos[pindex++]=i+1;
        }
        else
        {
            flag=1;
        }
        
    }
    
    for (i=0;i<pindex;i++)
    {
        cout<<pos[i]<<"\n";
    }
    
    return 0;
}
