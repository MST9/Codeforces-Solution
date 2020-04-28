#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ff              first
#define ss              second
#define int             long long int
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define maxheap         priority_queue<int>
#define minheap         priority_queue<int,vi,greater<int> >
#define mod             1000000007
#define inf             1e18
#define f(i,n)          for(int i=0;i<n;i++)
#define w(x)            int x; cin>>x; while(x--)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)     __builtin_ctzll(x)
#define mk(arr,n,type)  type *arr=new type[n];
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	if (a > b)
	{
		return gcd(a % b, b);
	}
	else
	{
		return gcd(a, b % a);
	}
}
 
int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	int x;
	cin >> x;
	int u = -1;
	vector<pair<int, int>> vp;
	for (int i = 1; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			int v = x / i;
			vp.pb(mp(i, v));
 
		}
	}
	pii d;
	int mz = inf;
	for (int i = 0; i < vp.size(); i++)
	{
		int j = vp[i].ff, k = vp[i].ss;
		int lcm = j * k / (gcd(j, k));
		if (lcm == x)
		{
			int me = max(j, k);
			if (me < mz)
			{
				d.ff = j;
				d.ss = k;
			}
		}
	}
	cout << min(d.ff, d.ss) << " " << max(d.ff, d.ss) << endl;
 
 
 
 
}
