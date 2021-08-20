#include<iostream>
using namespace std;
int convert(int minutes)
{
	return minutes*60;
}
int main()
{
    int minutes,ca;
    cin>>minutes;
  	ca=convert(minutes);
		cout<<"convert("<<minutes<<")  ➞"<<ca;
    return 0;
}