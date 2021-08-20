#include<iostream>
using namespace std;
class Displayclass
{
    public:
    int outside();
     int display()
    {
        cout<<"Hello,world"<<endl;
        return 0;
    }
};
int Displayclass::outside() // Dont give a space between :: .
{
    cout<<"Haa Im outside function.."<<endl;
    return 0;
}
int main()
{
    Displayclass Mi;
    Mi.outside();
    Mi.display();
}