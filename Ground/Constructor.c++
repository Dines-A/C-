#include<iostream>
using namespace std;
class constructor
{
    public:
    constructor()
    {
        cout<<"I'm Constructor Function"<<endl;

    }
     constructor(int value)
    {
        cout<<"the value is :"<<value<<endl;
    }
};
int main()
{
    constructor Fun;
    constructor c(5);
    // constructor c=constructor(10); we can also call like this
    return 0;
}