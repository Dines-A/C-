#include<iostream>
using namespace std;
// single inheritance 
class Subnotlikeme
{

        public:
        int tot;
        int fnum,snum;
        int Sub(int tot,int snum,int fnum)
        {
            int sub;
           sub=tot-snum;
           cout<<"value of Fnum :"<<sub<<endl;
           sub=tot-fnum;
           cout<<"Value of Snum : "<<sub<<endl;
           return 0;
        }
};

class Singlelikeme:public Subnotlikeme
{

        public:
             void  add()
            {
                cout<<"Enter two numbers : ";
                cin>>fnum>>snum;
                tot=fnum+snum;
                cout<<"addition value is :"<<tot<<endl;
                Sub(tot,snum,fnum);
            }

};


int main()
{
    Singlelikeme Posh;
    Posh.add();
    return 0;

}