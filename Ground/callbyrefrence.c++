#include<iostream>  
using namespace std;    
void swap(int *x, int *y)  
{  
// normal swap and refrence swap are doing same work

int swap;  
swap=*x;
*x=*y;
*y=swap;
}  
int main()   
{    
 int x=500, y=100;    
cout<<"Value of x is: 500 > "<<x<<endl;  
cout<<"Value of y is: 100 > "<<y<<endl;  
swap(&x, &y);  // passing value to function  
cout<<"passing value to function "<<endl;
cout<<"Value of x is: 100 > "<<x<<endl;  
cout<<"Value of y is: 500 > "<<y<<endl;  
return 0;  
}    

// #include <bits/stdc++.h>
// using namespace std;
// void func(int &a , int &b){
//     swap(a , b);
// }
// int main(){
//     int x = 100 , y = 200;
//     cout<<"x : " << x<<"\t"<<"y :"<< y << endl;
//     func(x , y);
//     cout<<"x : " << x<<"\t"<<"y :"<< y << endl;
//     return 0;
// }