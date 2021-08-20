#include<iostream>
#include<string>
using namespace std;
string stopMotor(int timmer)
{
    int a=1;
    do
    {
        cout<<a<<"      :   The Tank is filling"<<endl;
        a+=1;
    } while (a<=timmer);

    return "The Tank Filled....";
    
}
int main()
{
    string stupid;
    int Timmer;
    cout<<"Motar a Avlo nara kalichu ofp pananu : .";
    cin>>Timmer;
    stupid=stopMotor(Timmer);
    cout<<stupid;
    return 0;
}