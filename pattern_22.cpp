#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int top,bottom,left,right,minn;
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            top=i;
            bottom=2*n-2-i;
            left=j;
            right=2*n-2-j;
            minn=min(min(top,bottom),min(left,right));
            cout<<4-minn<<" ";
        }
        cout<<endl;
    }
    return 0;
}