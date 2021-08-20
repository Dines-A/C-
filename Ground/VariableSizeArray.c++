#include<iostream>
using namespace std;

int main()
{
    int n,q,size=0;
    cout<<"Enter the n ";
    cin>>n;
    cout<<"Enter the q ";
    cin>>q;
    int *arr[n];
    while(n)
    {
        int num;
        cout<<"Enter the number num : ";
        cin>>num;
        arr[size]=new int[num];
        for(int i=0;i<num;i++)
        {
            cin>>arr[size][i];
        }
            size++;
            n--;
    }
    while(q)
    {
        int i1,i2;
        cin>>i1>>i2;
        cout<<arr[i1][i2]<<endl;
        q--;
    }
    
return 0;
}

/* 

Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
Sample Output

5
9
 */