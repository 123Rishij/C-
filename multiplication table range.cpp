#include<iostream>
using namespace std;
int main()
{
    int r,p,x,c=1;

    cout<<"enter the number"<<endl;
    cin>>x;

    cout<<"enter the range"<<endl;
    cin>>r;

    while(c<=r)
    {
        p=x*c;

        cout<<x<<"*"<<c<<"="<<p<<endl;

        c++;

    }

    return 0;
}
