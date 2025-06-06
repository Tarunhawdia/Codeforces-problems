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
    ll n;
    cin >> n;

    vll a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(all(a));

    ll c = 0;
    // traverse form the back in array and check if two number is equal if yes then assign to c and keep the index in indexCount
    ll indexCount = 0;
    for (ll i = n - 1; i > 0; i--)
    {
        if (a[i] == a[i - 1])
        {
            c = a[i];
            indexCount = i - 1;
            break;
        }
    }
    ll a1 = 0, b = 0;

    // make a new array from current a and remove the indexCount and indexCount+1 index value form that array
    vll a2;
    for (ll i = 0; i < n; i++)
    {
        if (i != indexCount && i != indexCount + 1)
        {
            a2.pb(a[i]);
        }
    }

    // assign a1,b value form a2 array such a way that diff should be minimum
    int mini = INF;
    for (ll i = 0; i < a2.size() - 1; i++)
    {
        if (abs(a2[i] - a2[i + 1]) < mini)
        {
            mini = abs(a2[i] - a2[i + 1]);
            a1 = a2[i];
            b = a2[i + 1];
        }
    }

    if (2 * c > abs(a1 - b))
    {
        cout << c << " " << c << " " << b << " " << a1 << nline;
    }

    else
    {
        cout << -1 << nline;
    }
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
