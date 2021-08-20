#include<iostream>
using namespace std;
class Justtry
{
public:
    string Name;
    int Age;
    int setname(string name)
    {
        Name=name;
    }
    string  Getname()
    {
        return Name;
    }
   int setage(int age)
    {
        Age=age;
    }
    int  Getage()
    {
        return Age;
    }

};
int main()
{
    Justtry Hard;
    Hard.setname("dinesh");
    Hard.setage(20);
    cout<<"my name is "<<Hard.Getname()<<"   age is :"<<Hard.Getage();
    return 0;
}