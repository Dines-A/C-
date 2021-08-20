// variable = (condition) ? expressionTrue : expressionFalse;
#include<iostream>
using namespace std;
int main()
{
    int familyMemberCount;
    cout<<"Enter you family member count ";
    cin>>familyMemberCount;
   string  result=(familyMemberCount<4) ?  "Fakefamily" :  "Real family";
   cout<<result;
    return 0;
}