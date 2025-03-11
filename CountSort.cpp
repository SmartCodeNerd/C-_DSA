#include<iostream>
using namespace std;

void PrintArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void CountSort(int arr[],int n)
{
    int minVal=INT16_MAX,maxVal=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        minVal=min(minVal,arr[i]);
        maxVal=max(maxVal,arr[i]);
    }

    int freq[maxVal+1]={0};

    //Updating the frequency array

    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    int j=0;
    for(int i=minVal;i<=maxVal;i++)
    {
        while(freq[i] > 0 && j<n)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }

}

int main()
{
    int arr[]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    CountSort(arr,n);
    PrintArr(arr,n);
    return 0;
}