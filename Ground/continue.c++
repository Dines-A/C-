#include<iostream>
using namespace std;
int main()
{
    // pick the even numbers from the numbers
    int fnumber,lastnumber;
    cout<<"Enter the numbers";
    cin>>fnumber>>lastnumber;
    for(fnumber;fnumber<=lastnumber;fnumber++)
    {
        
        if(fnumber%2==1)
        {
            continue;
        }
        else
        {
                  cout<<fnumber<<endl;
                
        }
    }
            
}