#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    for(auto& x : a) cin>>x;
 
    ll mn = a[0], mx = a[0];
    ll ans = a[0];
 
    for(int i=1;i<n;++i){
        ll ai = a[i];
 
        ans = max({ans, ai-mn, ai, ai+mx});
 
        ll new_mn = min({ai, mn+ai, 2*mn+ai});
        ll new_mx = max({ai, mx+ai, 2*mx+ai});
 
        mn = new_mn;
        mx = new_mx;
    }
 
    cout<<ans<<"
";
}
 
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}