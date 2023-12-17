#include <bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Tarun cout.tie(NULL);

//Aliases
using ll= long long int;

const ll mod=1e9+7;


void solve() {
    
    ll n,m,k;
    cin>>n>>m>>k;

    int ans=0;
    if(k==1){
        ans=1;
    }
    if(k==2){
        if(m<=n){
            ans=m;
        }
        else{
            ans=(n+(m-n)/n);
        }
    }
    if(k==3){
        if(m>n){
            ans=(m-n-(m-n)/n);
        }
    }
    cout<<ans<<"\n";

}

int main() {
    Code By Tarun

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
