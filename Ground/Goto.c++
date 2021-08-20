#include<iostream>
using namespace std;
int main()
{
    int age;
    putingvote:
    cout<<"Enter the age : ";
    cin>>age;
    if(age<18)
        goto putingvote;

    else
    cout<<"your age is "<<age<<"shit the fuckup and put your vote..!";
    return 0;
}