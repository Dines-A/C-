// Multiple functions can have the same name as long as
//  the number and/or type of parameters are different.
// this logic is comes under polymorpisham

#include<iostream>
using namespace std;
class Functionoverloading
{
    public:
     int Area(int a)
    {
        cout<<"Area : "<<3.14*a*a<<endl;
        return 0;
    }
    int Area(int l,int b)
    {
        cout<<"Area : "<<l*b;
        return 0;
    }
};
int main()
{
    Functionoverloading obj;
    int a,l,b;
    cout<<"Enter the R for circle";
    cin>>a;
    cout<<"Enter hte l : b for rectangle ";
    cin>>l>>b;
    obj.Area(4);
    obj.Area(2,2);
    return 0;
}