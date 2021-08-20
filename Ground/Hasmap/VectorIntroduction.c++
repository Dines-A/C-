#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // same as  like string assignment
    vector<int> MyVector{1,2,3,4};
    vector<int> My2={21,222,23,24,25};
    vector <int> my3(My2);
    vector <int> my5(3); 
    //3 is a size of an element it will give 0 -3times if you assign a value it will show
    vector<int> copied=MyVector;
    vector <int> finally(5,10);
    

    MyVector.push_back(5);

    for(auto x:MyVector)
    {
        cout<<x<<" ";
    }
    return 0;
}