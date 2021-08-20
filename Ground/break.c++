#include<iostream>
using namespace std;
int main()
{
    int initial,end;
    cin>>initial>>end;
    do
    {
      
        if(initial==50)
        {
            break;
        }
        else
        {
            cout<<initial<<endl;
        }
        initial++;
    } while (initial<=end);
    
}