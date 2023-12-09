#include <bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Tarun cout.tie(NULL);

using ll = long long;
const ll mod = 1e9 + 7;
const int maxN = 1e6;


string g[3], ans;
bool visited[3][3] = {false}; 


void dfs(ll i, ll j, string cur) {
    if (cur.size() == 3) {
        if (ans.empty() || cur < ans) 
        	ans = cur;
        return;
    }

    visited[i][j] = true;

    for (ll x = -1; x <= 1; ++x) {
        for (ll y = -1; y <= 1; ++y)  {
            ll new_i = i + x;
            ll new_j = j + y;

            if (x == 0 && y == 0) continue;
            if (new_i < 0 || new_j < 0 || new_i >= 3 || new_j >= 3) continue;
            if (visited[new_i][new_j]) continue;

            dfs(new_i, new_j, cur + g[new_i][new_j]);
        }
    }

    visited[i][j] = false;
}

int main(){
	Code By Tarun

	for (ll i = 0; i < 3; ++i) {
        cin >> g[i];
    }

    for (ll i = 0; i < 3; ++i) {
        for (ll j = 0; j < 3; ++j) {
            string cur;
            cur += g[i][j];
            dfs(i, j, cur);
        }
    }

    cout << ans << endl;
    
}
