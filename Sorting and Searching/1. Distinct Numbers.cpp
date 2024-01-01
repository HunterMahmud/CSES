// url = https://cses.fi/problemset/task/1621

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    set<int>s;
    while(t--){
        int n;
        cin>>n;
        s.insert(n);
    }
    cout<<s.size()<<endl;
    return 0;
}
