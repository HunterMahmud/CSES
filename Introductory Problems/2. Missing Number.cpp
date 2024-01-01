// url = https://cses.fi/problemset/task/1083

#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll res = (n*(n+1))/2;
    for(int i=1; i<n; i++){
        ll tmp;
        cin>>tmp;
        res -= tmp;
    }
    cout<<res<<endl;
    return 0;
}
