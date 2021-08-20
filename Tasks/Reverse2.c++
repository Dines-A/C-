#include<iostream>
using namespace std;

int main()
{
    signed a;
    int holder,store;
    cin>>a;
    while(a>0)
    {
        holder=a%10;
        // cout<<"holder : "<<holder<<endl;
        a=a/10;
        // cout<<"A : "<<a<<endl;
        store=(store*10)+holder;
    }
    cout<<store;

    return 0;

}