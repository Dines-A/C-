#include<iostream>
using namespace std;
int main()
{
    int start,end;
    cout<<"Enter the staring point";
    cin>>start;
    cout<<"Enter the end point";
    cin>>end;
    while(start<=end)
    {
        cout<<"The ("<<start<< ") is "<<start<<endl;
        start++;
    }
    return 0;
}