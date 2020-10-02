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
#define mod1			998244353
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
		int n, m;
		cin >> n >> m;

		bool z = false;
		vector<pair<int, int>> v;
		f(i, 2 * n)
		{
			int x, y;

			cin >> x >> y;
			//cout << x << " " << y << endl;
			v.pb({x, y});


		}
		if (m % 2 != 0)
		{
			cout << "NO\n";
		}
		else
		{
			for (int i = 0; i < 2 * n; i++)
			{

				if (i % 2 == 0)
				{
					// cout << v[i].ff << " " << v[i].ss << endl;
					// cout << v[i + 1].ff << " " << v[i + 1].ss << endl;
					int g = 1;
					int u = v[i].ss;
					int r = v[i + g].ff;
					//cout << u << " " << r << endl;
					if (u == r)
					{
						z = true;
					}
				}
			}
			if (z)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}

		}
	}



}




 
