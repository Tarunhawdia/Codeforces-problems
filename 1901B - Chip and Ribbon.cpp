#include <bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Tarun cout.tie(NULL);

using ll = long long;
const ll mod = 1e9 + 7;
const int maxN = 1e6;

void solve(){
    ll n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans=a[0]-1;

    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            ans+=(a[i]-a[i-1]);
        }
    }
    cout<<ans<<"\n";
}



int main(){
	Code By Tarun

	ll test;
    cin>>test;
    while(test--){
        solve();
    }
    
}
