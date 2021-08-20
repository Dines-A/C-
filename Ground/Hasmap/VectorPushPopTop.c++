#include<iostream>
#include<vector>
using namespace std;

class stackoverflow
{
    private:
    vector<int> v1;

    public:
    // push 
    int push(int a)
    {
        v1.push_back(a);
        for(auto X:v1)
        {
            cout<<X<<" ";
        }
        return 0;
    }



    // top
    int top()
    {
        if (v1.size()-1!=0)
        {
            cout<<endl;
            cout<<"Top"<<endl;
            return v1[v1.size()-1];
        }
        return 0;
    }

    // pop

    int pop()
    {
        int i;
        if (v1.size()-1!=0)
            int i=top();
            v1.pop_back();
            cout<<"Poped : ";
            return i;
        }
};

int main()
{

    stackoverflow s;
    s.push(1); // it will add the value in vector
    s.push(2);


    cout<< s.top(); //it just show the data which is one the top

    cout<<s.pop();  //it will fetch the value along with delete the value from vector

    return 0;
}