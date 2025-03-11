#include<bits/stdc++.h>
using namespace std;
void print(int i,int n)//5 4 3 2 1
{
   if(i<n)
   print(i+1,n);
   cout<<i<<" ";
   return;
}
int main()
{
    int n;
    cin>>n;
    print(1,n);
    return 0;
}