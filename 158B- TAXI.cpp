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

	vector<int> a(5);

	for(int i=0;i<n;i++){
		int x;
		cin>>x;

		a[x]++;
	}
	int count=0;
	count+=a[4];

	count+=a[3];
	a[1]-=a[3];

	count+=(a[2]/2);
	a[2]%=2;

	if(a[2]==1){
		count++;
		a[1]-=2;
	}

	if(a[1]>0){
		count+=(a[1]+3)/4;
	}

	cout<<count<<"\n";
}
