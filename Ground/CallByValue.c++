#include<iostream>
using namespace std;
int Callbyvalue(int x);
int main()
{
    int x=10,z;
    cout<<"x : "<<x<<endl;
    cout<<"x : "<<Callbyvalue(x)<<endl;
    cout<<"x : "<<x<<endl;
    return 0;
    
}
int Callbyvalue(int x)
{
    return x*x;
}