#include<iostream>
using namespace std;
int main()
{
            int size,total,target,indexi,indexj;
            cin>>size;
            int nums[size];
            for(int value=0;value<size;value++)
            {
                cin>>nums[value];
            }
            cin>>target;
            for(int i=0;i<size-1;i++)
            {
                for(int j=1;j<size;j++)
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