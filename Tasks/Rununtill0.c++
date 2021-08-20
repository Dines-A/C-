#include<iostream>
using namespace std;
int Untillo()
{
        int thenumber,sum;
        do
        {
            cin>>thenumber;
            // cout<<thenumber;
            // sum+=thenumber;
        } while(thenumber!=0);    
        cout<<sum; 
        return 0;
}

int main()
{
    Untillo();
    return 0;
}