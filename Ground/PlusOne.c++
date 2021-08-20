#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // vector<int> values={9,8,7,6,5,4,3,2,1};
    // sort(values.begin(),values.end());
    // for(auto x:values)
    // {
    //     cout<<x<<endl;
    // }

    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        for(int j;j<size-1;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[j+1]=arr[i];
            }
        }
    }
    cout<<"-----"<<endl;
    
    for(int i;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}