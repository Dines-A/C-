#include<iostream>
using namespace std;

int main()
{
    int a=1;
    int *ptr=&a;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"&ptr : "<<&ptr+1<<endl;
    cout<<"*ptr : "<<*ptr<<endl;
    return 0;
}