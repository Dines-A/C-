#include<iostream>
using namespace std;
void Greeting(string Name);
int main()
{
    string name="Dinesh";
    Greeting(name);
    return 0;
}
void Greeting (string Name)
{
    cout<<"My Name is : "<<Name;
}