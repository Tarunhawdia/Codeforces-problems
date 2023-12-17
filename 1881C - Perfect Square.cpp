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
    
    ll n;
    cin>>n;
 
    vector<string>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int ans=0;
 
    vector<char>v;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            v.clear();
 
            v.push_back(s[i][j]);
            v.push_back(s[j][n-i-1]);
            v.push_back(s[n-i-1][n-j-1]);
            v.push_back(s[n-j-1][i]);
 
            sort(v.begin(),v.end());
            for(auto e:v){
                ans+=v.back()-e;
 
            }
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
