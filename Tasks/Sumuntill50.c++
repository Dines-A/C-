#include<iostream>
using namespace std;
int Repeat()
{
    int Number,Sum=0;
    do
    {
        cout<<"Enter the Number : ";
        cin>>Number;
        Sum+=Number;
    } while (Sum<50);
    cout<<Sum;
    return 0;
}
int main()
{
    Repeat();
    return 0;
}