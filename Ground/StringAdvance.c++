#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="dinesh";
    string b("DINESH");
    string c=b;
    string d(10,'D');
    string e(a);

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    string f;
    cout<<"Enter a string ..";
    getline(cin,f); //if you leave a space inside a string input normal input wont accept it but it accept it 
    cout<<f<<endl;
    return 0;
}