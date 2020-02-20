#include<bits/stdc++.h>
using namespace std;

map<int,int> dp;
int fib(int n)
{
    if(dp.find(n)!=dp.end()) return dp[n];
    if(n<=2 ) return 1;

    else
    {
        int temp = fib(n-1) + fib(n-2);
        dp[n] = temp;
        return temp;
    }
}


int main()
{
    int n;
    cout<<"Please enter the value of n :";
    cin>>n;
    int ans = fib(n);
    cout<<ans;
}
