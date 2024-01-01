// url = https://cses.fi/problemset/task/1071/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(int x, int y){
    ll mx = max(x,y);
    ll ans=mx*mx - (mx-1);
    if(x==y) return ans;
    if(mx%2){
        if(x>y){
            ans -= (x-y);
        }
        else{
            ans += (y-x);  
        }
    }
    else{
        if(x>y){
            ans += (x-y);
        }
        else{
            ans -= (y-x);
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll ans = solve(x,y);
        cout<<ans<<endl;
    }
    return 0;
}
