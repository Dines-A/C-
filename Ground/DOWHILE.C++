#include<iostream>
using namespace std;
int main()
{
    char start,end;
    cout<<"Enter the starting alpha ";
    cin>>start;
    cout<<"Enter the ending Alpha ";
    cin>>end;
    do
    {
        cout<<start<<endl;
        start++;
    } while (start<=end);
    
}