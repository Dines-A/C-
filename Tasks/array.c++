#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5};
    cout<<array[2]<<endl;
    array[2]=0;
    cout<<array[2]<<endl;
    // cout<<array[4]=9; it will not work
    return 0;
}