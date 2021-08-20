#include<iostream>
using namespace std;
int main()
{
    int fno,sno,tot;
    char Opreator;
    cout<<"Enter the two number "<<endl;
    cin>>fno>>sno;
    cout<<"Operator"<<endl;
    cin>>Opreator;
    switch(Opreator)
    {
        case '+':
        tot=fno+sno;
        cout<<"The add is :"<<tot<<endl;
        break;
        case '-':
        tot=fno-sno;
        cout<<"The sub is :"<<tot<<endl;
        break;
        case '*':
        tot=fno*sno;
        cout<<"The mul is :"<<tot<<endl;
        break;
        case '/':
        tot=fno/sno;
        cout<<"The div is :"<<tot<<endl;
        break;
        default:
        cout<<"Enter the correct opreator"<<endl;
    }
    return 0;
}