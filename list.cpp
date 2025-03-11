#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_back(10);
    ls.emplace_back(20);
    ls.push_front(30);
    ls.emplace_front(40);
    list<int>::iterator i=ls.begin();//40 30 10 20 
    i++;i++;i++;
    //cout<<*(i)<<" ";
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    deque<int>::iterator it=dq.begin();
    //cout<<dq.front();
    // for(int i=0;i<4;i++)
    // cout<<ls(i)<<" ";
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);//40 30 20 10
    stack<int> st1;
    st1.swap(st);
    st1.pop();
    //cout<<st1.top();
    //cout<<*(t)<<" ";
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);//40 30 20 10
    cout<<pq.top();
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    int cnt=ms.count(1);
    cout<<endl<<"The Count is "<<cnt;
    int a[]={3,2,1};
    sort(a,a+3);
    cout<<endl<<a[0];
    int num=9;//1001
    //cout <<endl<< __builtin_popcount(num);
    int c1= __builtin_popcount(num);
    cout<<c1;
    cout<<endl<<*max_element(a,a+3);


}