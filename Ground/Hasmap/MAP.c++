#include<iostream>
#include <map>
using namespace std;

int main()
{
    map<int,int> mymap;
    int array[]={2,2,3,4,5,3,4,5};
    for(auto X:array)
    {
        mymap[X]++;
    }
    for(auto X:mymap)
    {
        cout<<X.mymap<<" "<<mymap<<end;
    }
    return 0;

}