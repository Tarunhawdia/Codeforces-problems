// Problem: C - Alya-and-Permutation
// Contest: 2035
// Language: C++23 (GCC 14-64, msys2)
// Tags: bitmasks, constructive algorithms, math, *1400

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define vll vector<ll>
#define vi vector<int>

// Debugging
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(pair<T, V> p) {
    cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";
}
template <class T> void _print(vector<T> v) {
    cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]";
}
template <class T> void _print(set<T> v) {
    cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]";
}
template <class T> void _print(multiset<T> v) {
    cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]";
}
template <class T, class V> void _print(map<T, V> v) {
    cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]";
}

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Tarun cout.tie(NULL);

void solve() {
    int n;
    cin >> n;

    set<int> availableNumbers;
    for (int i = 1; i < n; i++) {
        availableNumbers.insert(i);
    }

    vector<int> result(n + 1, 0);

    int largestPowerOf2 = 1;
    while (largestPowerOf2 * 2 <= n) {
        largestPowerOf2 *= 2;
    }

    if (n & 1) {
        cout << n << endl;

        int lowestBit = n & (-n);
        result[n - 3] = lowestBit;
        result[n - 2] = lowestBit + (lowestBit == 1 ? 2 : 1);
        result[n - 1] = n - lowestBit;
        result[n] = n;

    } else { 
        cout << largestPowerOf2 * 2 - 1 << endl;

        if (n == largestPowerOf2) {
            result[n - 4] = 1;
            result[n - 3] = 3;
            result[n - 2] = n - 2;
            result[n - 1] = n - 1;
            result[n] = n;
        } else {
            result[n - 2] = n;
            result[n - 1] = n - 1;
            result[n] = largestPowerOf2 - 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        availableNumbers.erase(result[i]);
    }

    // Fill in the unassigned positions in result vector
    for (int i = 1; i <= n; i++) {
        if (result[i] == 0) {
            result[i] = *availableNumbers.begin();
            availableNumbers.erase(result[i]);
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << result[i] << " ";
    }
    cout << nline;
}


int main() {

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    Code By Tarun

    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
