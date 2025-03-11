#include<iostream>
using namespace std;

// void Buy_Sell(int arr[],int n)
// {
//     int min_val=INT16_MAX,max_val=INT16_MIN,min_idx,max_idx;
//     for(int i=0;i<n;i++)
//     {   
//         if(min_val>arr[i])
//         {
//             min_val=arr[i];
//             min_idx=i;
//         }
//     }
//     for(int i=min_idx;i<n;i++)
//     {
//         if(max_val<arr[i])
//         {
//             max_val=arr[i];
//             max_idx=i;
//         }
//     }
//     int profit=max_val-min_val;
//     if(profit<0)
//     cout<<"0";
//     else
//     cout<<profit;
// }

void maxProfit(int prices[],int n)
{
    int bestBuy[100000];
    bestBuy[0]=INT16_MAX;
    for(int i=1;i<n;i++)
    {
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
    }
    int maxProf=0;
    for(int i=0;i<n;i++)
    {
        int CurrProfit=prices[i]-bestBuy[i];
        maxProf=max(maxProf,CurrProfit);
    }
    cout<<maxProf<<endl;
}

int main()
{
    int prices[]={7,1,5,3,6,4};
    // int prices[]={7,6,4,3,1};
    int n=sizeof(prices)/sizeof(int);
    //Buy_Sell(prices,n);
    maxProfit(prices,n);
    return 0;
}