#include<iostream>
using namespace std;

void PrintArr(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Sort(char arr[],int n)
{
    int prev;
    for(int i=1;i<n;i++)
    {
        char cur=arr[i];
        prev=i-1;
        while(prev>=0 && cur>(arr[prev]))
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
    }
}

int main()
{
    char ch[]={'f','b','a','e','c','d'};
    int n=sizeof(ch)/sizeof(char);
    Sort(ch,n);
    PrintArr(ch,n);
    return 0;
}