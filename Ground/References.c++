#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int &b=a;
    cout<<"1 = "<<a<<endl;
    cout<<"1 = "<<b<<endl;
    cout<<"Address = "<<&b<<endl;
}