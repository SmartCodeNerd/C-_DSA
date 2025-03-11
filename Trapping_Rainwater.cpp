#include<iostream>
using namespace std;


void TotalWater(int height[],int n)
{
    int leftMax[20000],rightMax[20000];
    leftMax[0]=height[0],rightMax[n-1]=height[n-1];
    for(int i=1;i<n;i++)
    {
        leftMax[i]=max(height[i-1],leftMax[i-1]);
    }
    for(int i=n-2;i>=0;i--)
    {
        rightMax[i]=max(height[i+1],rightMax[i+1]);
    }
    int totAmt=0;
    for(int i=0;i<n;i++)
    {
        int minHgt=min(leftMax[i],rightMax[i]);
        int temp=minHgt-height[i];
        if(temp>0)
        {
            totAmt+=temp;
        }
    }
    cout<<"The total Water Trapped is "<<totAmt;
}

int main()
{
    int height[]={4,2,0,6,3,2,5};
    //int height[]={5,4,3,2,1};
    //int height[]={0,1,0,2,1,0,1,3,2,1,2,1}; 
    int n=sizeof(height)/sizeof(int);
    TotalWater(height,n);
    return 0;
}