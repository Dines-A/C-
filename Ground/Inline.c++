// if we call the normal function the address will come and exiqute the value -> .we are just calling the address
// but here inline function it come as it is where we called -> not good for big line codes will take much time to run
// normal function is better then inline
#include<iostream>
using namespace std;
inline int Test()
{
    cout<<"Im test case of Inline function"<<endl;
    return 0;
}
int main()
{
    Test();
    cout<<"im normal fucntion"<<endl;
    return 0;
}