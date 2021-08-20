#include<iostream>
using namespace std;
int main()
{
    // primary
    cout<<"the size of int is :"<<sizeof(int)<<endl;
    cout<<"the size of float is :"<<sizeof(float)<<endl;
    cout<<"the size of string is :"<<sizeof(string)<<endl;
    cout<<"the size of char is :"<<sizeof(char)<<endl;
    cout<<"the size of double is :"<<sizeof(double)<<endl;
    cout<<"the size of void is :"<<sizeof(void)<<endl;
    cout<<"the size of boolean is :"<<sizeof(bool)<<endl;

    cout<<"the size of signed is :"<<sizeof(signed)<<endl;
    cout<<"the size of un-signed is :"<<sizeof(unsigned)<<endl;
    cout<<"the size of short is :"<<sizeof(short)<<endl;
    cout<<"the size of unsigned-short is :"<<sizeof(unsigned)<<endl;

    // Derived -> not working

    // cout<<"the size of function is :"<<sizeof(function)<<endl;
    // cout<<"the size of Array is :"<<sizeof(array)<<endl;
    // cout<<"the size of boolean is :"<<sizeof(bool)<<endl;
    // cout<<"the size of boolean is :"<<sizeof(bool)<<endl;

    return EXIT_SUCCESS;
}