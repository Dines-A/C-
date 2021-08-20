#include<iostream>
using namespace std;
int main()
{
    int A[6],B[3];
    int C[3];
    for(int i=0;i<6;i++)
    {
        cin>>A[i];
    }

    for(int j=0;j<3;j++)
    {
        cin>>B[j];
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<3;j++)
        {
           if( A[i]==B[j])
           {
              C[i]=A[i];
              
           }
           else
           {
              cout<<"B is not subset of A"<<endl;
           }
        }

    }
    return 0;

}