#include <bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Tarun cout.tie(NULL);

using ll = long long;
const ll mod = 1e9 + 7;
const int maxN = 1e6;



int main(){
	Code By Tarun

	ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;

        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll maxx=0;
        maxx=a[0];

        if(n>1){
            for(int i=1;i<n;i++){
                maxx=max(maxx,(a[i]-a[i-1]));
            }
        }
        else{
            maxx=a[0];
        }

        maxx=max(maxx,2*(x-a[n-1]));

        cout<<maxx<<"\n";
    }
    
}
