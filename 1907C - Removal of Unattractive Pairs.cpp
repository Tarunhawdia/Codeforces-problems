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

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;

		vector<int> freq(26);
		for(auto c:s){
			freq[c-'a']++;
		}

		int maxx=*max_element(freq.begin(),freq.end());
		int ans=max(n%2,max(0,2*maxx-n));
		cout<<ans<<"\n";
	}
    
}
