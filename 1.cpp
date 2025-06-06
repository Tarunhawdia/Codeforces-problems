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
	ll n, m;
	cin >> n >> m;

	vll a(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			for (int j = 1; j <= m; j++)
			{
				if (i != 0 && i < n - 1 && abs(a[i - 1] - j) == 1 && abs(a[i + 1] - j) == 1)
				{
					count = (count + 1) % MOD;
				}
				else if (i == 0 && abs(a[i + 1] - j) == 1)
				{
					count = (count + 1) % MOD;
				}
				else if (i == n - 1 && abs(a[i - 1] - j) == 1)
				{
					count = (count + 1) % MOD;
				}
			}
		}
	}

	cout << count + 1 << nline;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	Code By Tarun

		ll t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}
