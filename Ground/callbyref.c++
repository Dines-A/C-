#include<iostream>
using namespace std;
void cbr(int *);
int main()
{
    int a=1;
    cout<<"a : "<<a<<endl;
    cbr(&a);
    cout<<"a : "<<a<<endl;
    return 0;
}
void cbr(int* x)
{
    *x=12121;
}