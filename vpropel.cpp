// #include <iostream>
// #include <math.h>
// using namespace std;

// int prime(int n)
// {
//     int i;
//     for (i = 2; i < n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int d = 0, i, j, flag = 0;
//     long long int n, temp, num;
//     cin >> n;
//     temp = n;
//     while (temp > 0)
//     {
//         d++;
//         temp = temp / 10;
//     }
//     // cout<<d;

//     int ar[d];
//     temp = n;

//     for (i = d - 1; i >= 0; i--)
//     {
//         ar[i] = temp % 10;
//         temp = temp / 10;
//     }
//     int power = d - 1;

//     for (i = 0; i < d; i++)
//     {
//         temp = ar[0];
//         for (j = 0; j < d; j++)
//         {
//             ar[j] = ar[j + 1];
//         }
//         ar[d - 1] = temp;
//         num = 0;
//         for (j = 0; j < d; j++)
//         {
//             // cout<<ar[j];
//             num = num + ar[j] * pow(10, power--);
//         }
//         power = d - 1;
//         flag = prime(num);
//         // cout<<num<<" "<<flag<<"\n";

//         if (flag == 0)
//         {
//             break;
//         }
//     }

//     if (flag == 1)
//     {
//         cout << "Circular prime\n";
//     }
//     else
//     {
//         cout << "Not circular prime\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,i,j;
//     cin>>n;
//     int ar[n][n];
//     for ( i = 0; i < n; i++)
//     {
//         for ( j = 0; j < n; j++)
//         {
//             cin>>ar[i][j];
//         }
//     }

//     int max;
//     for ( i = 0; i < n; i++)
//     {
//         max=ar[i][0];
//         for ( j = 0; j < n; j++)
//         {
//             if (ar[i][j]>max)
//             {
//                 max=ar[i][j];
//             }
//         }
//         cout<<max<<"\n";

//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class emp
// {
// private:
//     char name[20];
//     int empid;
//     float basic,da,hra;
// public:
//     emp();
//     ~emp();
//     void display()
//     {
//         int total;
//         total=basic+da*basic+hra;
//         cout<<name<<"\n";
//         cout<<empid<<"\n";
//         cout<<total<<"\n";
//     }
// };

// emp::emp()
// {
//     // cout<<"Enter name\n";
//     cin>>name;
//     // cout<<"Enter empid\n";
//     cin>>empid;
//     // cout<<"Enter basic\n";
//     cin>>basic;
//     // cout<<"Enter da:\n";
//     cin>>da;
//     // cout<<"Enter hra:\n";
//     cin>>hra;
// }

// emp::~emp()
// {
// }

// int main()
// {
//     emp e;
//     e.display();
//     return 0;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;

// class comp
// {
//     public:
//         char ip[15];
//         char name[20];
//         char x[3],y[3];
//         int xl,yl;
//         void getip();
//         void storexy();
// };

// void comp::getip()
// {
//     cin>>ip;
//     cin>>name;
//     storexy();
// }

// void comp::storexy()
// {
//     int i=0,j=0;
//     while (ip[i]!='.')
//     {
//         x[i]=ip[i];
//         i++;
//     }
//     xl=i;
//     i++;
//     while (ip[i]!='.')
//     {
//         y[j++]=ip[i++];
//     }
//     yl=j;

// }

// int same(comp c1, comp c2)
// {
//     int i=0,flag=1;
//     while (i<c1.xl && i<c2.xl)
//     {
//         if (c1.x[i]!=c2.x[i])
//         {
//             flag=0;
//             break;
//         }
//         i++;
//     }
//     i=0;
//     while (i<c1.yl && i<c2.yl)
//     {
//         if (c1.y[i]!=c2.y[i])
//         {
//             flag=0;
//             break;
//         }
//         i++;
//     }
//     return flag;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     comp c[n];
//     int i,j;
//     for (i=0;i<n;i++)
//     {
//         c[i].getip();
//     }
//     for (i=0;i<n-1;i++)
//     {
//         for (j=i+1;j<n;j++)
//         {
//             if (same(c[i],c[j]))
//                 cout<<"Machines "<<c[i].name<<" and "<<c[j].name<<" are on the same local network\n";
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class vendor
// {
//     public:
//         int reg;
//         char add[20];
//         int amount;

//         vendor()
//         {
//             cin>>reg;
//             cin>>add;
//             cin>>amount;
//         }
// };

// void winner(vendor v[],vendor *ans, int n)
// {
//     int i,win=ans->amount;
//     for (i=0;i<n;i++)
//     {
//         if (v[i].amount<win)
//         {
//             win=v[i].amount;
//             *ans=v[i];
//         }
//     }
// }

// int main()
// {
//     int n,i,win;
//     cin>>n;
//     vendor v[n];
//     winner(v,&v[0],n);
//     cout<<v[0].reg<<"\n";
//     cout<<v[0].add;
//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// class set
// {
// 	int num_Of_Ele;
// 	char names[30][20];
// 	public:
// 	void get();
// 	void print()const;
// 	set intersection(set&);
// 	set difference(set&);
// };

// void set::get()
// {
//     cin>>num_Of_Ele;
//     int i;
//     for (i=0;i<num_Of_Ele;i++)
//     {
//         cin>>names[i];
//     }
// }

// set temp;

// set set::intersection(set& s)
// {
//     int i,j;
//     int n=0;
//     for (i=0;i<num_Of_Ele;i++)
//     {
//         for (j=0;j<s.num_Of_Ele;j++)
//         {
//             if (strcmp(names[i],s.names[j])==0)
//             {
//                 strcpy(temp.names[n],names[i]);
//                 // cout<<names[i]<<" "<<s.names[j]<<"\n";
//                 n++;
//             }
//         }
//     }
//     temp.num_Of_Ele=n;
//     return temp;
// }

// void set::print()const
// {
//     int i;
//     for (i=0;i<num_Of_Ele;i++)
//     {
//         if (i!=num_Of_Ele-1)
//         cout<<names[i]<<",";
//         else
//         cout<<names[i]<<"\n";
//     }
// }

// set set::difference(set& s)
// {
//     set temp2;
//     int i,j;
//     int n=0,flag=1;
//     for (i=0;i<temp.num_Of_Ele;i++)
//     {
//         for (j=0;j<s.num_Of_Ele;j++)
//         {
//             // cout<<temp.names[i]<<" "<<s.names[j]<<"\n";
//             if (strcmp(temp.names[i],s.names[j])==0)
//             {
//                 flag=0;
//             }
//         }
//         if (flag==1)
//         {
//             strcpy(temp2.names[n],temp.names[i]);
//             n++;
//         }
//         flag=1;
//     }
//     temp2.num_Of_Ele=n;
//     return temp2;
// }

// int main()
// {
// 	set chess, carrom,scrabble;
// 	chess.get();
// 	carrom.get();
// 	scrabble.get();
// 	set inter = chess.intersection(carrom);
// 	inter.print();
// 	set diff = inter.difference(scrabble);
// 	diff.print();
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// class mach
// {
//     public:
//         int code;
//         double cost;
//         int item;
//         mach()
//         {
//             cin>>code>>cost>>item;
//         }
// };

// int main()
// {
//     int n;
//     cin>>n;
//     mach m[n];
//     int usercode;
//     double usermon;
//     cin>>usercode>>usermon;

//     int i,flag=0;

//     for (i=0;i<n;i++)
//     {
//         if (usercode==m[i].code)
//         {
//             if (m[i].item<=0)
//             {
//                 cout<<"Less Stock\n";
//             }
//             flag=1;
//             try
//             {
//                 if (usermon<m[i].cost)
//                 {
//                     throw usermon;
//                 }
//                 cout<<m[i].code<<"\n";
//             }
//             catch(double d)
//             {
//                 cout<<"Insufficient amount\n";
//             }
//         }
//     }
//     try
//     {
//         if (flag==0)
//             throw usercode;
//     }
//     catch(int d)
//     {
//         cout<<"Wrong item code\n";
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class vector
// {
// 	int num;
// 	int *ele;
// 	public:
// 	vector();
// 	vector(int);
// 	vector(vector&);
// 	vector sum (vector&);
// 	int product(vector&);
// 	void get();
// 	void print();
// };

// vector::vector()
// {

// }
// vector::vector(int n)
// {

// }
// vector::vector(vector& v)
// {

// }

// void vector::get()
// {
//     cin>>num;
//     ele= new int[num];
//     int i;
//     for (i=0;i<num;i++)
//     {
//         cin>>ele[i];
//     }
// }

// vector vector::sum(vector &v)
// {
//     vector temp;
//     temp.num=num;
//     temp.ele=new int[num];
//     int i;
//     for (i=0;i<num;i++)
//     {
//         temp.ele[i]=ele[i]+v.ele[i];
//     }
//     return temp;
// }

// int vector::product(vector &v)
// {
//     int dot=0;
//     int i;
//     for (i=0;i<num;i++)
//     {
//         dot+=ele[i]*v.ele[i];
//     }
//     return dot;
// }

// void vector::print()
// {
//     int i;
//     int flag=0;
//     for (i=0;i<num;i++)
//     {
//         if (ele[i]==12 && flag==1)
//             cout<<ele[i]<<" \n";
//         else
//         {
//             if (ele[i]==8)
//             flag=1;
//             cout<<ele[i]<<"\n";
//         }
//     }
// }

// int main()
// {
// 	vector v1, v2,v3;
// 	int dot_Pdt;
// 	v1.get();
// 	v2.get();
// 	v3 = v1.sum(v2);
// 	v3.print();
// 	dot_Pdt = v1.product(v2);
// 	cout<<dot_Pdt;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;

// class emp
// {
//     protected:
//         char name[20];
//         char empid[5];
//         int age;
//     public:
//         emp();

// };

// emp::emp()
// {
//     cin>>name;
//     cin>>empid;
//     try
//     {
//         cin>>age;
//         if (age<18)
//         {
//             throw "Age cannot be less than 18\n";
//         }
//         else if (age>50)
//         {
//             throw "Age cannot be greater than 50\n";
//         }

//     }
//     catch(char str[50])
//     {
//         int l;
//         l=strlen(str);
//         int i;
//         for (i=0;i<l;i++)
//         {
//             cout<<str[i];
//         }
//         cout<<"\n";
//         exit(0);
//     }
//     // int len;
//     // len=strlen(empid);
//     // for (int i=1;i<len;i++)
//     // {
//     //     cout<<empid[i];
//     // }
//     // cout<<"\n";
//     // cout<<age;
//     cout<<name<<"\n"<<empid<<"\n"<<age;

// }

// int main()
// {
//     emp e;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class bp
// {
// public:
//     char name[50];
//     char x[10];
//     int age;
//     char address[50];
//     char date_of_journey[10];
//     char mobile_number[10];
//     long int original_fare;

//     bp(/* args */);
// };

// bp::bp(/* args */)
// {
//     cin>>name;
//     cin>>x;
//     cin>>age;
//     cin>>address;
//     cin>>date_of_journey;
//     cin>>mobile_number;
//     cin>>original_fare;

// }

// void disp(bp b)
// {
//     int pos=0;
//     long int newfare;
//     cout<<b.name<<"\n";
//     cout<<"CA"<<b.x<<"\n";
//     while (pos!=10)
//     cout<<b.date_of_journey[pos++];
//     cout<<"\n";
//     cout<<b.mobile_number<<"\n";

//     if (b.age>58)
//     {
//         newfare=b.original_fare-.4*b.original_fare;
//     }
//     else if (b.age>12)
//     {
//         newfare=b.original_fare-.2*b.original_fare;
//     }
//     else
//     {
//         newfare=b.original_fare-.5*b.original_fare;
//     }

//     cout<<newfare<<"\n";

// }

// int main()
// {
//     bp b;
//     disp(b);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class vector
// {
// 	int num;
// 	int ele[20];
// 	public:
// 	friend istream& operator>>(istream&,vector&);
// 	friend ostream& operator<<(ostream&,vector&);
// 	vector operator+(vector&);
// 	vector operator-(vector&);
// 	int operator[](int);
// };

// istream& operator >> (istream &in,vector &v)
// {
//     in>>v.num;
//     int i;
//     for (i=0;i<v.num;i++)
//     {
//         in>>v.ele[i];
//     }
//     return in;
// }

// ostream& operator << (ostream &out, vector &v)
// {
//     int i;
//     for (i=0;i<v.num;i++)
//     {
//         out<<v.ele[i]<<"\n";
//     }
//     return out;
// }

// vector vector::operator+(vector &v)
// {
//     vector temp;
//     int i;
//     try
//     {
//         if (num!=v.num)
//         {
//             throw "Vectors of different dimension cannot be added\n";
//         }
//         temp.num=num;
//         for (i=0;i<num;i++)
//         {
//             temp.ele[i]=ele[i]+v.ele[i];
//         }

//     }
//     catch (char str[100])
//     {
//         cout<<"Vectors of different dimension cannot be added\n";
//     }
//     return temp;
// }

// vector vector::operator-(vector &v)
// {
//     vector temp;
//     int i;
//     if (num==v.num)
//     {
//         temp.num=num;
//         for (i=0;i<num;i++)
//         {
//             temp.ele[i]=ele[i]-v.ele[i];
//         }
//     }
//     return temp;
// }

// int vector::operator[](int x)
// {
//     return ele[x-1];
// }

// int main()
// {
// 	vector v1,v2,v3;
// 	int i,j;
// 	cin>>v1;
// 	cin>>v2;
// 	cin>>i;
// 	cin>>j;
// 	cout<<v1[i]<<endl;
// 	cout<<v2[j]<<endl;
// 	v3 = v1+v2;
// 	cout<<v3;
// 	v3 = v1 - v2;
// 	cout<<v3;
// }

// #include<iostream>
// using namespace std;
// //Function to find weekday number
// // 0 - Sunday, 1 - Monday and so on 6-Saturday
// int find_day(int n);
// //Given a character array of size 5 with subject letter print the name of the subject corressponding to position i
// void print_first_hour(char* sub, int i);
// //Function to check if given Saturday is an even Saturday
// bool check_Even_Sat(int d);
// // Function to find odd Saturday number, odd Saturday number of day 6 is 1, day 20 is 2 and so on
// int find_Odd_Sat_Num(int d);

// int find_day(int n)
// {
// 	int temp=0;
// 	while (n>0)
// 	{
// 		if (temp+1!=7)
// 		{
// 			temp++;
// 			n--;
// 		}
// 		else
// 		{
// 			temp=0;
// 			n--;
// 		}
// 	}
// 	return temp;
// }

// bool check_Even_Sat(int day)
// {
// 	if ((day+1%7)%2==0)
// 	return true;
// 	else
// 	return false;
// }

// int find_Odd_Sat_Num(int day)
// {
// 	return ((day+1)/7)-((day+1)/7)/2;
// }

// string subject(char c)
// {
// 	if (c=='P')
// 		return "Physics";
// 	else if(c=='E')
// 		return "English";
// 	else if(c=='C')
// 		return "Chemistry";
// 	else if (c=='R')
// 		return "Computer Science";
// 	else
// 		return "Maths";
// }

// void print_first_hour(char *sub, int n)
// {
// 	int x;
// 	int day=find_day(n);
// 	if (day==0)
// 		cout<<"Holiday\n";
// 	else if(day!=6)
// 	{
// 		cout<<subject(sub[day]);
// 	}
// 	else
// 	{
// 		if (check_Even_Sat(n))
// 		{
// 			cout<<"Holiday\n";
// 		}
// 		else
// 		{
// 			x=find_Odd_Sat_Num(n);
// 			cout<<subject(sub[x%5]);
// 		}

// 	}
// }

// int main()
// {
// 	char subjects[6];
// 	int i,n;
// 	for (i=1;i<6;i++)
// 	{
// 		cin>>subjects[i];
// 	}
// 	cin>>n;

// 	// int day=find_day(n);
// 	// cout<<"Day: "<<day<<"\n";

// 	print_first_hour(subjects,n);

// 	return 0;
// }

#include <iostream>
using namespace std;
#include <math.h>
long int sum_pow(int n, int m = 0);

long int sum_pow(int n, int m)
{
	long int tot = 0;

	int i;
	if (m!=0)
	{	
		for ( i = 1; i <= n; i++)
		{
			tot+=pow(i,m);
		}
	}
	else
	{
		for (i=1;i<=n;i++)
		{
			tot+=pow(i,i);
		}
	}

	return tot;
}

int main()
{	
	long int sum,n,m;
	cin>>n>>m;
	if(m<0)
	cout<<"Invalid input";
	else
	{
	if(m!=0)
	sum=sum_pow(n, m);
	else
	sum=sum_pow(n);
	cout<<sum;
	}
}

// Input
// 5
// 3
// Expected output
// 225