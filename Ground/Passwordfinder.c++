#include<iostream>
using namespace std;

        int  Input()
         {
            int Array[5];
            int lastnumber1,lastnumber2,lastnumber3,lastnumber4;
            if( Array>0)
            {
                lastnumber1=Array%10;
                cout<<lastnumber1<<endl;
                lastnumber2=Array%100;
                cout<<lastnumber2<<endl;
                lastnumber3=Array%1000;
                cout<<lastnumber3<<endl;
            }
                return 0;
         }


int main()
{
    Input();
    return 0;
}