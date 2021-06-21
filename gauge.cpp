
//      GAUGE

#include<iostream>
using namespace std;

class coach
{
    int gauge;

    public:

    friend istream& operator >> (istream &in, coach &obj);
    friend class train;

};

istream& operator >> (istream &in, coach &obj)
{
    in>>obj.gauge;
    return in;
}

class train
{
    int gauge;

    public:

    friend istream& operator >> (istream &in, train &obj);

    void numberofcoaches(coach c[])
    {
        int n=0;
        for (int i=0;i<3;i++)
        {
            if (c[i].gauge==gauge)
            {
                n++;
            }
        }
        cout<<"Number of coaches are: "<<n<<"\n";
    }

};

istream& operator >> (istream &in, train &obj)
{
    in>>obj.gauge;
    return in;
}

int main()
{
    coach c[3];
    train t;
    int i;

    cout<<"Enter gauge of 3 coaches:\n";
    for (i=0;i<3;i++)
    {
        cin>>c[i];
    }

    cout<<"Enter gauge of train:\n";
    cin>>t;

    t.numberofcoaches(c);

    return 0;
}