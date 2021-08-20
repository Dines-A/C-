#include<iostream>
using namespace std;
class Destrutor
{
    public:
    Destrutor()
    {
        cout<<"Im constructor function "<<endl;
    }
    ~Destrutor() //you cant pass the parameter here
    {
        cout<<"Im Destructor function"<<endl;
    }

};
int main()
{
    Destrutor A;
    {
        Destrutor A1;
        Destrutor B2;
        Destrutor C3;
    }
    cout<<"Im normal statment"<<endl;
    return 0;
}