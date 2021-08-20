#include<iostream>
using namespace std;
int Add(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter the two number ";
    cin>>a>>b;
    Add(a,b);
    return 0;
}
int Add(int a,int b)
{
    cout<<a+b;
    return 0;
}