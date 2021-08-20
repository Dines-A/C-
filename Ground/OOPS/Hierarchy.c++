#include<iostream>
using namespace std;
// Hierarchy inheritance
class Add
{
    public:
    int a,b;
    int Addfun()
    {
        cout<<"Enter two numbers for Addition : ";
        cin>>a>>b;
        cout<<"The value for addition :"<<a+b<<endl;
        return 0;
    }
};
class Sub:public Add
{
    public:
    int Subfun()
    {
        cout<<"Enter two numbers for subraction : ";
        cin>>a>>b;
        cout<<"The value for addition :"<<a-b<<endl;
        return 0;

    }
};
class Mul :public Add
{
    public:
    int Mulfun()
    {
        cout<<"Enter two numbers for Multiplication  : ";
        cin>>a>>b;
        cout<<"The value for addition :"<<a*b<<endl;
        Addfun();
        return 0;
    }

};


int main()
{
    Mul DMK;
    DMK.Mulfun();
    Sub ADMK;
    ADMK.Subfun();
    return 0;
}