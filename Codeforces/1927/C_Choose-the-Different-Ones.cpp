// Problem: C - Choose-the-Different-Ones
// Contest: 1927
// Language: C++17 (GCC 7-32)
// Tags: brute force, greedy, math, *1000

#include<bits/stdc++.h>
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


// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}



#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Tarun cout.tie(NULL);

const ll mod = 1e9 + 7;

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    vll a(n), b(m);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++) {
        cin >> b[i];
    }

    set<ll> st1, st2;

    for (ll i = 0; i < n; i++) st1.insert(a[i]);
    for (ll i = 0; i < m; i++) st2.insert(b[i]);


    bool notfound = false;
    ll cntA = 0, cntB = 0;
    for (ll i = 1; i <= k; i++) {
        if (!st1.count(i) && !st2.count(i)) {
            notfound = true;
            break;
        }
        cntA += st1.count(i);
        cntB += st2.count(i);
    }
    if (notfound) cout << "NO\n";
    else if (min(cntA, cntB) < k / 2) cout << "NO\n";

    else cout << "YES\n";

}

int main() {

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w" , stderr);
#endif

    Code By Tarun

    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}


