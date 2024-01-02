// url = https://cses.fi/problemset/task/1618

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(ll n){
    int res=0;
    if(n<5) return res;
    n = (n/5)*5;
    for(ll i=5; i<=n; i+=5){
        ll x=i;
        while(x%5==0){
            x /= 5;
            res++;
        }
    }
    return res;
}

int main()
{
    ll n;
    cin>>n;
   cout<<solve(n)<<endl;
    return 0;
}
