// url = https://cses.fi/problemset/task/1069

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    int ans = 1,cnt=0;
    char l = 'A';
    for(auto ch: s){
        if(ch==l){
            ++cnt;
            ans = max(cnt,ans);
        }
        else{
            l = ch;
            cnt = 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
