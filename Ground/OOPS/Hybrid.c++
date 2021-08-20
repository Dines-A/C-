#include<iostream>
using namespace std;
class Add
{
    public:
    int a,b;
    int Addfun()
    {
        cout<<"Enter the number for addition : "<<endl;
        cin>>a>>b;
        cout<<"The value is : "<<a+b<<endl;
        return 0;
    }
};

class Sub
{
    public:
    int c,d;
    int Subfun()
    {
        cout<<"Enter the number for Subraction : "<<endl;
        cin>>c>>d;
        cout<<"The value is : "<<c-d<<endl;
        return 0;
    }
};
class AddandSub:public Add,public Sub
{
    public:
    int Addsub()
    {
        cout<<"Enter the number for addition : "<<endl;
        cin>>a>>b;
        cout<<"The value is : "<<a+b<<endl;
        cout<<"Enter the number for Subraction : "<<endl;
        cin>>c>>d;
        cout<<"The value is : "<<c-d<<endl;
        Addfun();
        Subfun();
        return 0;
    }
};
class AddandSubandDiv:public AddandSub
{
    public:
    int x,y;
    int AddSubDiv()
    {
        cout<<"Enter the number for addition : "<<endl;
        cin>>a>>b;
        cout<<"The value is : "<<a+b<<endl;
        cout<<"Enter the number for Subraction : "<<endl;
        cin>>c>>d;
        cout<<"The value is : "<<c-d<<endl;
        cout<<"Enter the number for Divition : "<<endl;
        cin>>x>>y;
        cout<<"The value is : "<<x*y<<endl;
        Addsub();
        return 0;
    }
};
int main()
{
    AddandSubandDiv Obj;
    Obj.AddSubDiv();
    return 0;
}

