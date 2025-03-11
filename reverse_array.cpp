#include<iostream>
using namespace std;

void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[],int n)//Using Extra Space
{
    int rev[n];
    for(int i=0;i<n;i++)
    {
        rev[i] = arr[n-i-1];
    }
    for(int i=0;i<n;i++)
    {
        arr[i] = rev[i];
    }
}

void reverse2(int arr[],int n)//W/O Using Extra Space
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}

void swap1(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

void reverse3(int arr[],int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        swap1(&arr[start],&arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(int);
    reverse3(arr,n);
    printArr(arr,n);
    return 0;
}