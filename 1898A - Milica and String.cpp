#include <bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Tarun cout.tie(NULL);

using ll = long long;
const ll mod = 1e9 + 7;
const int maxN = 1e6;



void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            count++;
        }
    }
    if(count==k){
        cout<<"0\n";
        return ;
    }
    cout<<"1\n";

    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            count--;
        }
        // 10 3
        // BBBABBBBAB
        if(count==k){
            cout<<i+1<<" A\n";
            return;
        }
        // 5 3
        // AABAB
        if(count==k-i-1){
            cout<<i+1<<" B\n";
            return;
        }
    }
    
}


int main(){
	Code By Tarun

	ll test;
    cin>>test;
    while(test--){
        solve();
    }
    
}




