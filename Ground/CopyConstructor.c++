#include<iostream>
using namespace std;
class Copy
{
    public:
    int holder;
    Copy(int number)
    {
        holder=number;
        cout<<"Im  constructor : "<<holder<<endl;
    }
    Copy(Copy &c)
    {
        holder=c.holder;
        cout<<"Im Copy constructor : "<<holder<<endl;
    }
    Copy()
    {
        cout<<"C3==C1"<<endl;
    }
};
int main()
{
    Copy C1(5);
    Copy C2(C1);
    Copy C3;
    C3=C1;
    cout<<"C1.holder"<<C1.holder<<endl;
    cout<<"C2.holder"<<C2.holder<<endl;
    cout<<"C3.holder"<<C3.holder<<endl;
    return 0;
}