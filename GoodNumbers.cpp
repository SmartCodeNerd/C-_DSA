// #include<bits/stdc++.h>
// using namespace std;


// int isEven(int n)
// {
//     if(n % 2 == 0)
//     return 1;
//     return 0;
// }


// bool isPrime(int n)
// {
//     if(n == 1)
//     return false;
//     bool isPrime=true;
//     for(int i=2;i<=sqrt(n);i++)
//     {
//         if(n % i == 0)
//         isPrime = false;
//     }
//     return isPrime;
// }

// int GoodCheck(int num)
// {
//     string str = to_string(num);
//     int flag=0,cnt=0;
//     // int ch = '6' - '0';
//     // cout<<ch;
//     int n=str.length();
//     for(int i=0;i<n;i++)
//     {
//         int ch = str[i] - '0';
//         if(isEven(i))
//         {
//             if(!isEven(ch))
//             {
//                 flag = 1;
//             }
//         }
//         else
//         {
//             if(!isPrime(ch))
//             {
//                 flag =1;
//             }
//         }
//         if(flag == 1)
//         return 0;
//         return 1;
//     }
// }

// void NumGen(int n)
// {
//     long long cnt=0;
//     int i=0;
//     int len=((int)log10(i)+1);
//     while(len<n)
//     {
//         if(len == n)
//         {
//             int ch=GoodCheck(i);
//             if(ch)
//             cnt++;
//         }
//         i++;
//     }
//     cout<<cnt<<endl;
// }

// int main()
// {
//     int n = 1;
//     NumGen(n);
//     //cout<<GoodCheck(3245);
// }

#include<bits/stdc++.h>
using namespace std;
//const unsigned int M = 1000000007;
// int GoodNumber(int n,int i,int cnt)
// {
//     if(i == n)
//     return cnt;
//     if(i % 2 == 0)
//     cnt *= 5;
//     else
//     cnt *= 4;
//     int mod = pow(10,9) + 7;
//     cnt %= mod;
//     GoodNumber(n,i+1,cnt);
// }


// int power(long long x,long long n)
// {
//     if(n == 0)
//     return 1;
//     long long halfPower= power(x,n/2);
//     halfPower *= halfPower;
//     halfPower %=1000000007;
//     if(n % 2 == 0)
//     return halfPower;
//     else
//     return x * halfPower;
//     //1000000007
// }

// int GoodNumber(long long n)
// {
//     long long Odd = n/2;
//     long long Even = Odd + n%2;
//     long long cnt= power(5,Even) * power(4,Odd);
//     // int mod = power(10,9) + 7;
//     cnt %=1000000007;
//     return cnt;
// }

// int main()
// {
//     cout<<GoodNumber(50)<<endl;
// }




    int M = 1000000007;
    long long power(long long b, long long e, long long ans) {
        if(e == 0) return ans;
        if(e & 1) return power(b, e - 1, (ans * b) % M);
        else return power((b * b) % M, e / 2, ans);
    }
    int countGoodNumbers(long long n) {
        long long temp = power(20, n/2, 1);
        return (n & 1) ? (temp * 5) % M : temp;
    }
int main()
{
    cout<<countGoodNumbers(806166225460393);
    return 0;
}