#include<iostream>
using namespace std;

int main()
{
    int arr[]={5,4,9,3,12};
    int n= sizeof(arr) / sizeof(int);
    int max = arr[0],min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<"The maximum value is "<<max<<endl;
    cout<<"The minimum value is "<<min<<endl;
    return 0;
}