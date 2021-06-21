#include<iostream>
using namespace std;

template <class T>
class vector
{
    public:
        T *arr;
        int size;
        vector(int x)
        {
            size=x;
            arr=new T[size];
        }
        T dot(vector &v)
        {
            T d=0;
            for (int i = 0; i < size; i++)
            {
                d+=this->arr[i]*v.arr[i];
            }
            return d;
        }
};

int main()
{
    vector<int> v1(3);
    v1.arr[0]=1;
    v1.arr[1]=2;
    v1.arr[2]=3;
    
    vector<int> v2(3);
    v2.arr[0]=3;
    v2.arr[1]=2;
    v2.arr[2]=1;
    int x;
    x=v1.dot(v2);
    cout<<x<<"\n";
    
    vector<float> v3(3);
    v3.arr[0]=1.2;
    v3.arr[1]=2.3;
    v3.arr[2]=3.4;
    
    vector<float> v4(3);
    v4.arr[0]=3.4;
    v4.arr[1]=2.3;
    v4.arr[2]=1.2;
    float y;
    y=v3.dot(v4);
    cout<<y<<"\n";
    return 0;
}