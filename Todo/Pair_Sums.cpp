#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
map <int,int> mp;
void solve(){
    int n,k; cin>>n>>k;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        mp[a]++;
    }
    for(auto x:mp){
        if(mp[k-x.first]!=0){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n"<<endl;
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