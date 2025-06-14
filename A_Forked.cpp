#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <bitset>
#include <tuple>
#include <utility>
#include <algorithm>
#include <numeric>    // iota, accumulate, gcd, lcm
#include <functional> // function, bind

// Math and limits
#include <cmath>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <cassert>
#include <ctime>
// Advanced types
#include <complex>
#include <type_traits>
#include <random>
#include <thread>
#include <mutex>
#include <atomic>
#include <ios>
#include <fstream>
#include <sstream>
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
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
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

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Tarun cout.tie(NULL);

void solve()
{
    ll a, b;
    ll xk, yk;
    ll xq, yq;

    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;
    set<pair<ll, ll>> king_attacks, queen_attacks;

    vector<pair<ll, ll>> moves{
        {a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

    for (auto [dx, dy] : moves)
    {
        king_attacks.insert({xk + dx, yk + dy});
    }
    // For queen: from which positions can a knight attack the queen?
    for (auto [dx, dy] : moves)
    {
        queen_attacks.insert({xq + dx, yq + dy});
    }

    // Count intersection
    int ans = 0;
    for (auto &pos : king_attacks)
    {
        if (queen_attacks.count(pos))
            ans++;
    }
    cout << ans << nline;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    Code By Tarun

        ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
