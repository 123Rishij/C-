#include <iostream>

using namespace std;

int main()

{

int num1;
int num2;

cout<<"enter starting number";
cin>>num1;

cout<<"enter ending number";
cin>>num2;

if(num1%2 = 0)
{
    for(int i= num1; i<=num2; i=i+2)
    {
        cout<<i<<"\n";
    }
}
else
{
    for(int i= num1+1; i<=num2; i=i+2)
    {
        cout<<i<<"\n";
    }

}
}


