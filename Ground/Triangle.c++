#include<iostream>
using namespace std;

int triangle(int n) {
    int sum=0;
	for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int input;
    cin>>input;
    cout<<triangle(input);
    return 0;
}