// url = https://cses.fi/problemset/task/1072

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    cout<<0<<endl;
    int p=0;
    for(int i=2; i<=t; i++,p+=4){
        ll ans;
        ll a = i*i;
        if(i%2==0){
            ans = (a*(a-1))/2;
        }
        else{
            ans = ((a-1)/2)* (a);
        }
        ans = ans - (i-1)*p;
        cout<<ans<<endl;

    }
    return 0;
}
