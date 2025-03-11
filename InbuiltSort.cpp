#include<bits/stdc++.h>
using namespace std;

void PrintArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={5,4,1,3,2};
    sort(arr,arr+5,greater<int>());
    PrintArr(arr,5);
    return 0;
}