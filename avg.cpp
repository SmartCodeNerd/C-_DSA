#include<iostream>
using namespace std;
int main()
{
    int phy,chem,math;
    cin>>phy>>chem>>math;
    int total=phy+chem+math;
    float avg=total/3.0;
    cout<<avg;
    return 0;
}