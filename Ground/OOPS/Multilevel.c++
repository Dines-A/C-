#include<iostream>
using namespace std;
// Multi-level Inheritance
class Div
{
    public:
    int a,b;
    int Divfun()
    {
        cout<<"Enter you two numbers for Divition :"<<endl;
        cin>>a>>b;
        cout<<"Answer for Divition : "<<a*b<<endl;       
        return 0;
    }
};
class Sub:public Div
{
    public:
    int Subfun()
    {
        cout<<"Enter you two numbers for subraction :"<<endl;
        cin>>a>>b;
        cout<<"Answer for Subraction : "<<a-b<<endl;
        Divfun();       
        return 0;
    }
};
class Add:public Sub
{
    public:
    int Addfun()
    {
        cout<<"Enter you two numbers for addition :"<<endl;
        cin>>a>>b;
        cout<<"Answer for Addition : "<<a+b<<endl;
        Subfun();        
        return 0;
    }
};
int main()
{
    Add Object;
    Object.Addfun();
}