#include<iostream>
using namespace std;
// multiple inheritance ensure is it correct;
    class Div
    {
        public:
        int a,b;
        int Divfun()
        {
            cout<<"Enter two number for Divition : ";
            cin>>a>>b;
            cout<<"The value for Divition : "<<a/b<<endl;
            return  0;
        }
    };
    class Mul
    {
        public:
        int a,b;
        int Mulfun()
        {
            cout<<"Enter two number for Multiplication : ";
            cin>>a>>b;
            cout<<"The value for Multiplication : "<<a*b<<endl;
            return  0;
        }
    };
    class Sub
    {
        public:
        int a,b;
        int Subfun()
        {
            cout<<"Enter two number for Subraction  : ";
            cin>>a>>b;
            cout<<"The value for Subration  : "<<a-b<<endl;
            return  0;
        }
    };
    class Add:public Sub, public Mul ,public Div
    {
        public:
        int a,b;
        int Addfun()
        {
            cout<<"Enter two number for Addition : ";
            cin>>a>>b;
            cout<<"The value for addition : "<<a+b<<endl;
            Subfun();
            Mulfun();
            Divfun();
            return  0;
        }
    };
int main()
{
    Add Object;
    Object.Addfun();
    return 0;
}
