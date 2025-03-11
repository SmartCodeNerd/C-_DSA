#include<iostream>
using namespace std;

void ele_swap(int num[],int n)
{
       for(int i=0;i<n;i+=2){
        if(num[i]>num[i+1]){
            int t=num[i];
            num[i]=num[i+1];
            num[i+1]=t;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=num[i]*(i+1);
        }
        cout<<sum;
       }
}

}

int main(){
int arr[5]={1,9,7,3,2};
ele_swap(arr,5);
}