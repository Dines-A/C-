#include<iostream>
using namespace std;
class Static 
{
    public:
        static int count;
        int Loginuser(string name)
        {
            cout<<"Login User :\t"<<name<<"\tNo\t"<<++count<<endl;
            return 0;
        }
        int Logoutuser(string name)
        {
            cout<<"Logout user  :\t"<<name<<"\tNo\t"<<--count<<endl;
            return 0;
        }

        // static int Logoutuser(string name)
        // {
        // you can use like this for indudual function
        //  inside this we cant use any normal variable bcz this is static fucntion 
        //     cout<<"Logout user  :\t"<<name<<"\tNo\t"<<--count<<endl;
        //     return 0;
        // }

};
int Static::count;
int main()
{
    Static Emp;
    Emp.Loginuser("Dinesh");
    Emp.Loginuser("Banana");
    Emp.Loginuser("Potato");
    Emp.Logoutuser("Potato");
    Emp.Logoutuser("Banana");
    return 0;
}