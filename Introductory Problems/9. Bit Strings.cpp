// url = https://cses.fi/problemset/task/1617

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define md 1000000007

ll solve(ll n){
    ll ans = 1;
    
    while(n){
        if(n%2==1){
            ans = (ans*2)%md;
            n--;
        }
        else{
            ans = (ans*4)%md;
            n-=2;
        }
    }
    return ans;
}

int main()
{
    ll n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}
