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

    ll n;
    cin>>n;


    int ans=1;
    while(n>1){
    	if(n%2==0){
    		n/=2;
    	}
    	else{
    		n--;
    		ans++;
    	}
    }
    cout<<ans;

}
