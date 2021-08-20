#include<iostream>
using namespace std;
int main()
{
            int size=4,total,target,indexi,indexj;
            int nums[size];
            for(int value=0;value<4;value++)
            {
                cin>>nums[value];
            }
            cin>>target;
            for(int i=0;i<4-1;i++)
            {
                for(int j=1;j<4;j++)
                {
                        total=nums[i]+nums[j];

                        if(total==target)
                        {
                            indexi=i;
                            indexj=j;
                            cout<<"["<<indexi<<","<<indexj<<"]";
                            return 0;
                        }
                }
                
            }

            return 0;
}