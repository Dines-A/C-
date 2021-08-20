#include<iostream>
using namespace std;
int Totsum()
{
    int Value,sum=0,end;
    cout<<"How many input do u want to give : ";
    cin>>end;
    for(int i=1;i<=end;i++)
    {
    cout<<"Enter your number :";
    cin>>Value;
    sum+=Value;
    }
    cout<<sum;
    return 0;
}
int main()
{
    Totsum();
    return 0;
}