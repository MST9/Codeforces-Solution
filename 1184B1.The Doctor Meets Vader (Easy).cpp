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
 
 
 
int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	int s, b;
	cin >> s >> b;
	int a[s];
	f(i, s)
	{
		cin >> a[i];
	}
	vector<pair<int, int>> vp;
	f(i, b)
	{
		int d, g;
		cin >> d >> g;
		vp.pb(mp(d, g));
	}
	int pre[b + 1] = {};
	sort(vp.begin(), vp.end());
	vector<int> v;
	for (int i = 1; i <= vp.size(); i++)
	{
		pre[i] = pre[i - 1] + vp[i - 1].ss;
		v.pb(vp[i - 1].ff);
	}
	vector<int> y;
	// for (int i = 0; i < vp.size(); i++)
	// {
	// 	cout << vp[i].ff << " " << vp[i].ss << " " << pre[i + 1] << endl;
	// }
	f(i, s)
	{
		int x = a[i];
		int l = upper_bound(v.begin(), v.end(), x) - v.begin();
		//cout << l << endl;
		if (l == v.size())
		{
			y.pb(pre[l]);
		}
		else
		{
			y.pb(pre[l]);
		}
	}
	for (int i = 0; i < y.size(); i++)
	{
		cout << y[i] << " ";
	}
	cout << endl;
 
}
 
