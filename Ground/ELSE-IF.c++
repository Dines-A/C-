#include<iostream>
using namespace std;
int main()
{

    int a,b,c;
    cout<<"enter the three numbers ";
    cin>>a>>b>>c;
    if( a > b && a >c )
    {
        cout<<"A is greater then B,C";
    }
    else if(b>a && b>>c)
    {
        cout<<"B is greater then A,C";
    }
    else{
        cout<<"C is the greater";
    }

    return 0;

}