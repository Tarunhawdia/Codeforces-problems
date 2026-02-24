// Problem: A - Turtle-and-Piggy-Are-Playing-a-Game
// Contest: 1981
// Language: C++17 (GCC 7-32)
// Tags: brute force, greedy, math, *800

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
const ll N = 1e5 + 10;

int largestPowerOf2Exponent(long long l, long long r) {
    // Calculate the largest power of 2 less than or equal to r
    long long power = 1;
    int exponent = 0;
    while (power <= r) {
        power <<= 1; // power *= 2
        exponent++;
    }
    power >>= 1; // power /= 2
    exponent--;

    // If the calculated power is less than l, return -1
    if (power < l) {
        return -1;
    }
    return exponent;
}

void solve() {
    ll l, r;
    cin >> l >> r;

    int result = largestPowerOf2Exponent(l, r);

    cout << result << nline;

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

