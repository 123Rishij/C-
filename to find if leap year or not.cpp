#include<iostream>
using namespace std;
int main()
{
int a,b,m;

cout<<"enter two numbers"<<endl;
cin>>a>>b;

m=(a>b)?a:b;

if((m%a==0 && m%b==0))
   {
    cout<<"lcm:"<<m;
   }
   else
   {
       cout<<"lcm:"<<a*b;
   }
}
