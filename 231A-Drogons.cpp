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

    ll n,s;
    cin>>s>>n;

    vector<pair<int,int>> vp(n);

    for(int i=0;i<n;i++){
    	cin>>vp[i].first;
    	cin>>vp[i].second;
    }
    sort(vp.begin(),vp.end());
    bool isPossible=true;
    for(int i=0;i<n;i++){
    	if(vp[i].first<s){
    		s+=vp[i].second;
    	}
    	else{
    		isPossible=false;
    	}
    }
    if(isPossible){
    	cout<<"YES";
    }
    else{
    	cout<<"NO";
    }


}
