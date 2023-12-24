#include <bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Tarun cout.tie(NULL);

#define vll vector<ll>
#define vi vector<int>
#define pb push_back


using ll = long long int;
const ll mod = 1e9 + 7;

void solve() {
    
    ll n;
    cin>>n;
    vll a(n), used(n+1,false);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.rbegin(),a.rend());

    bool flag=true;

    for(auto &i :a){
        int x=i;
        while(x>n || used[x]){
            x/=2;
        }
        if(x>0){
            used[x]=true;
        }
        else{
            flag=false;
        }
    }
    cout<<(flag ? "YES\n" : "NO\n");

}


int main() {
    Code By Tarun

    ll t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
