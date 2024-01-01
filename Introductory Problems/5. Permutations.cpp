// url = https://cses.fi/problemset/task/1070

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void permutations(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n<4) cout<<"NO SOLUTION"<<endl;
    else{
        for(int i=1; i<n; i+=2){
            cout<<n-i<<' ';
        }
        cout<<n<<' ';
        for(int i=2; i<n; i+=2) cout<<n-i<<' ';
    }
}
int main()
{
    int n;
    cin>>n;
    permutations(n);
    return 0;
}
