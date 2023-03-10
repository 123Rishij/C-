#include<iostream>
using namespace std;
int main()
{
    int x,y,z,avg;

    cout<<"enter marks of maths";
    cin>>x;

    cout<<"enter marks of social";
    cin>>y;

    cout<<"enter marks of science";
    cin>>z;

    avg=(x+y+z)/3;

    if(avg>90)
    {
        cout<<"A grade";
    }
    else if(80<=avg&&avg<=90)
    {
        cout<<"B grade";
    }
    else if(70<=avg&&avg<80)
    {
        cout<<"c grade";
    }
    else(avg<70);
    {
        cout<<"d grade";
    }

    return 0;


}
