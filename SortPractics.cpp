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

void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minidx=i;
        for(int j=i;j<n;j++)
        {
            if(arr[minidx] > arr[j])
            minidx=j;
        }
        swap(arr[i],arr[minidx]);
    }
}

void InsertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int cur=arr[i];
        int prev=i-1;
        while(prev >= 0 && cur < arr[prev])
        {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = cur;

    }

}

void CountSort(int arr[],int n)
{
    int minVal=INT16_MAX,maxVal=INT16_MIN;

    for(int i=0;i<n;i++)
    {
        if(minVal > arr[i]) minVal=arr[i];
        if(maxVal < arr[i]) maxVal=arr[i];
    }

    int freq[maxVal+1]={0};

    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    int j=0;
    for(int i=minVal;i<=maxVal;i++)
    {
        while(freq[i] > 0)
        {
            arr[j] = i;
            j++;
            freq[i] --;
        }
    }

}

int main()
{
    int arr[]={3,6,2,1,8,7,4,5,3,1};
    int n=sizeof(arr)/sizeof(int);
    // BubbleSort(arr,n);
    // SelectionSort(arr,n);
    // InsertionSort(arr,n);
     CountSort(arr,n);
     PrintArr(arr,n);
    return 0;
}