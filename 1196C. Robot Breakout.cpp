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
#define PI              3.1415926535
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;





int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	w(t)
	{
		int n;
		cin >> n;
		int x[n], y[n], f1[n], f2[n], f3[n], f4[n];
		f(i, n)
		{
			cin >> x[i] >> y[i] >> f1[i] >> f2[i] >> f3[i] >> f4[i];

		}

		pii xr[n], yr[n];
		f(i, n)
		{
			if (f1[i] == 0 && f3[i] != 0)
			{
				xr[i].ff = x[i];
				xr[i].ss = 100000;
			}
			else if (f1[i] != 0 && f3[i] == 0)
			{
				xr[i].ff = -100000;
				xr[i].ss = x[i];
			}
			else if (f1[i] == 0 && f3[i] == 0)
			{
				xr[i].ff = x[i];
				xr[i].ss = x[i];
			}
			else
			{
				xr[i].ff = -100000;
				xr[i].ss = 100000;

			}
		}
		f(i, n)
		{
			if (f2[i] != 0 && f4[i] != 0)
			{
				yr[i].ff = 100000;
				yr[i].ss = -100000;
			}
			else if (f2[i] != 0 && f4[i] == 0)
			{
				yr[i].ff = 100000;
				yr[i].ss = y[i];
			}
			else if (f2[i] == 0 && f4[i] != 0)
			{
				yr[i].ff = y[i];
				yr[i].ss = -100000;
			}
			else
			{
				yr[i].ff = y[i];
				yr[i].ss = y[i];
			}
		}
		bool z = true;
		int l = xr[0].ff, r = xr[0].ss;
		int u = yr[0].ff, d = yr[0].ss;
		for (int i = 1; i < n; i++)
		{
			if (xr[i].ff > r || l > xr[i].ss)
			{
				z = false;
				break;
			}
			else
			{
				l = max(l, xr[i].ff);
				r = min(r, xr[i].ss);
			}
		}
		for (int i = 1; i < n; i++)
		{
			if (yr[i].ss > u || d > yr[i].ff)
			{
				z = false;
				break;
			}
			else
			{
				u = min(u, yr[i].ff);
				d = max(d, yr[i].ss);
			}
		}

		// f(i, n)
		// {
		// 	cout << xr[i].ff << " " << xr[i].ss << endl;
		// }
		if (z)
			cout << 1 << " " << l << " " << u << endl;
		else
			cout << 0 << endl;
	}



}
