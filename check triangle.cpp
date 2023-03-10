#include<iostream>
using namespace std;
int main()
{
    int x,y,z,sum;

    cout<<"enter 1st angle \n";
    cin>>x;

    cout<<"enter 2nd angle \n";
    cin>>y;

    cout<<"enter 3rd angle \n";
    cin>>z;

    sum=x+y+z;

    if(sum==180)
    {
        cout<<"triangle can be formed";

    }

    else

    {
        cout<<"triangle cannot be formed";
    }

    return 0;
}
