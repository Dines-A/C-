// over riding is a polymorpishom concept

#include<iostream>
using namespace std;
class Car
{
    public:
    int fun1(int a,int b)
    {
        cout<<"the add value  is : "<<a+b<<endl;
        return 0;
    }
};
class Bike:public Car
{
    public:
    int fun1(int a,int b)
    {
        cout<<"The sub value is : "<<a-b<<endl;
        return 0;
    }
};
int main()
{
    Bike KTM;
    KTM.fun1(10,5);
    Car AUDI;
    AUDI.fun1(10,5);
    return 0;
}