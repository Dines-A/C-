#include<iostream>
using namespace std;

    class Users //Class Name
    {
    public:                         //access modifier 
          int id;                   // these are Employees attribute 
          string name;         // these are Employees attribute 
          double salary;           // these are Employees attribute 

    };

    int main()
    {
        Users Obj1;// here the Obj1 is Object of the class
        Obj1.id=1;
        Obj1.name="Dinesh";
        Obj1.salary=100000;

        Users Obj2;
        Obj2.id=2;
        Obj2.name="DineshA";
        Obj2.salary=150000;

        cout<<"User1"<<Obj1.id<<"\t"<<Obj1.name<<"\t"<<Obj1.salary<<endl;
        cout<<"User2"<<Obj2.id<<"\t"<<Obj2.name<<"\t"<<Obj2.salary<<endl;

        return 0;
    }