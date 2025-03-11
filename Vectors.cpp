#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1={1,2,3,4,5};
    vector<int> vec2(5,-1);
    
    // for(int i=0;i<vec2.size();i++)
    // {
    //     cout<<vec2
        
    //     [i]<<" ";
    // }
    cout<<"Size "<<vec1.size()<<endl;
    cout<<"Capcity "<<vec1.capacity()<<endl;

    vec1.push_back(6);
 
    cout<<"Size "<<vec1.size()<<endl;
    cout<<"Capcity "<<vec1.capacity()<<endl;

    vec1.pop_back();

    cout<<"Size "<<vec1.size()<<endl;
    cout<<"Capcity "<<vec1.capacity()<<endl;

    vector<int> res;
    res.push_back(2);
    
    vector<int> v;

    for(int i=0;i<5;i++)
    {
        v.push_back(i);
    }
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<endl;
}