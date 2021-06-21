
	// STRING CONCATENATE

#include<iostream>
#include<string.h>
using namespace std;
class stri{
private:
    char str[20];
public:
    void input(){
        cin.getline(str,20);
    }
    stri operator + (stri s){
        stri temp;
        strcat(str," ");
        strcat(str,s.str);
        strcpy(temp.str,str);
        return temp;
    }
    void output(){
        cout<<str;
    }
};
int main(){
    stri s1,s2,s3;
    s1.input();
    s2.input();
    s3=s1+s2;
    s3.output();
}
