#include<iostream>
using namespace std;
int GlobalVariable; //you can access where ever you want in this program
class Adding
{
    public:
    int a,b; //there are Local variables
    int add(int a,int b)
    {
        int c; //this is instant variable;
        c=a+b;
        cout<<"The addition is :"<<c<<endl;
        return c;
    }
};
int main()
{
    int tot;
    GlobalVariable=1;
    cout<<"GlobalVariable="<<GlobalVariable<<endl;

    //creating object for clss
    Adding T;
    T.a=10;
    T.b=20;
    cout<<"Value of a:b = "<<T.a<<":"<<T.b<<endl;
     T.add(T.a,T.b);
    return 0;
}