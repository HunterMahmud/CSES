// url = https://cses.fi/problemset/task/1095

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define md 1000000007
ll solve(ll a, ll b){
    ll p = 1;
    if (b == 0) return 1;
    if(a==0) return 0;
    else{
        while(b>0){
            if(b%2==0){
               a = (a*a)%md;
                b/=2;
            }
            else{
                p = (p*a)%md;
                b--;
            }
        }
    }
    return p;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
        
    }
    return 0;
}
