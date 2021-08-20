#include<iostream>
using namespace std;
class typeoffunction
{
    public:

    // without return without parameter
    void Greeting()
    {
        cout<<"Welcome boi."<<endl;
    }

    // without return with parameter
    void Greeting(string name)
    {
        cout<<"Welcome "<<name<<endl;
    }

    // return without parameter
    string Welcome()
    {
        string c;
        c="Thanks for visiting";
        return c;
    }

    // with return with parameter
    int Greeting(int a,int b)
    {
        return a+b;
    }
};
int main()
{
    string welcome;
    int greeting;
    typeoffunction obj;
    obj.Greeting();
    obj.Greeting("Dinesh");
    // we have to assign a variable bcz return 

    welcome=obj.Welcome();
    cout<<welcome<<endl;
    greeting=obj.Greeting(2,4);
    cout<<greeting<<endl;
}