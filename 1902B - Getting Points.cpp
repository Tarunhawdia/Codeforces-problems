#include <bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Tarun cout.tie(NULL);

using ll = long long;
const ll mod = 1e9 + 7;
const int maxN = 1e6;



bool is_possible(ll nooftask,ll P,ll l, ll t , ll mid){
    ll ans=min(nooftask,2*mid)*t;
    ans+=mid*l;
    return ans>=P;
}

void solve(){
    ll n,P,l,t;
    cin>>n>>P>>l>>t;
    ll sum=0;
    ll nooftask=(n+6)/7;

    ll left=1;
    ll right=n;

    

    while(left<right){
        ll mid=(right+left)/2;
        if(is_possible(nooftask,P,l,t,mid)){
            right=mid;
        }
        else{
            left=mid+1;
        }
    }
    cout<<n-right<<"\n";
    
}

int main(){
	Code By Tarun

	ll test;
    cin>>test;
    while(test--){
        solve();
    }
    
}
