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

    ll n,m;
    cin>>n>>m;

    vector<int> house(m);
    for(int i=0;i<m;i++){
    	cin>>house[i];
    }

    ll ans=0;
    
    int curr=1;
    for(int i=0;i<m;i++){
    	int next=house[i];
    	if(next-curr>=0){
    		ans+=next-curr;
    		curr=next;
    	}
    	else{
    		ans+=next-curr+n;
    		curr=next;
    	}
    }
    cout<<ans;

}
