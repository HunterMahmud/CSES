// url = https://cses.fi/problemset/task/1094

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    int ar[t+1];
    for(int i=0; i<t; i++){
        cin>>ar[i];
    }
    ll ans = 0;
    for(int i=1; i<t; i++){
        if(ar[i-1]>ar[i]){
            ans += (ar[i-1]-ar[i]);
            ar[i] = ar[i-1];
        }
    }
    cout<<ans<<endl;
    return 0;
}


/// best solution time ans space complexity is must better

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    int ans = 0, mx = 0;
    while(t--){
        int n;
        cin>>n;
        mx = max(mx,n);
        ans += (mx-n);
    }
    cout<<ans<<endl;
    return 0;
}
