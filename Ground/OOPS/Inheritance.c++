#include<iostream>
using namespace std;
//Derived class can access main class values but main class cant access derived class values.
class Publicclass
{
    public:  //level-1
    int a;  //You can use this variable Where-ever you want;
    protected: //level-2
    int b;  //You can use this Variable only in Derived classes;
    private: //level-3
    int c; //You can't use this variable in Other Claas;
};

class protectedclass:protected Publicclass //you cant use private instead protected 
{
// here            up(↑) i used protected so, public will converted to as a protected variable 
//                     and private variable act as private
    public:
    int fun1()
    {
        a=5;
        b=10;
        cout<< "A public to protected "<<a<<endl;
        cout<< "A protected to protected "<<b<<endl;
        return 0;
    }
        // and here you cant access the variable c;
        // c=101010;
        // cout<<c;

};
int main()
{
    // create  object for Derived class
    protectedclass Obj2;
    Obj2.fun1();
    return 0;
}