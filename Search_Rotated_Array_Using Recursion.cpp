#include<iostream>
using namespace std;

void BS(int arr[],int si,int ei,int key)
{
    int mid = (si+ei)/2;
    if(si > ei)
    {
        cout<<-1;
        return;
    }
     if(arr[mid]== key)
        {
            cout<<mid<<endl;
            return;
        }
    if(arr[mid] >= arr[si])//First Half Sorted
    {
        
        if(key >= arr[si] && key <= arr[mid])//Key in first half
        {
            BS(arr,si,mid-1,key);
        }   
        else//key in second half
        {
            BS(arr,mid+1,ei,key);
        }
    }
    else//Second Half Sorted
    {
       
        if(key >= arr[mid] && key <= arr[ei])
        {
            BS(arr,mid+1,ei,key);
        }
        else
        {
            BS(arr,si,mid-1,key);
        }
    }
}

int main()
{
    int arr[]={4,5,6,7,0,1,2};
    int target=0 ;
    int n =sizeof(arr)/sizeof(int);
    BS(arr,0,n-1,target);
    return 0;
}