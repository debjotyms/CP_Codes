#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
void solve(){
    int n; cin>>n;
    int a = sum(n);
    cout<<a;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}
