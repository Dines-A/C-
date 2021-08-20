#include<iostream>
using namespace std;


       int  With3rdVariable(int a,int b)
        {
            int c;
            c=b;
            b=a;
            a=c;
            cout<<"The value swaped with 3rd Variable ...,"<<endl;
            cout<<"a  : "<<a<<endl;
            cout<<"b  : "<<b<<endl;
            return 0;
        }
    

     int WithoutVariables (int a,int b)
     {
            a=a-b;
            b=a+b;
            cout<<"The value swaped without variable ...,"<<endl;
            cout<<"a  : "<<a<<endl;
            cout<<"b  : "<<b<<endl;
            return 0;
        }

int main()
{
    int a,b;
    cout<<"The number : ";
    cin>>a>>b;
    With3rdVariable(a,b);
    WithoutVariables(a,b);
    return 0;
}