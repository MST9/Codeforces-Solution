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


	int n, m;
	cin >> n >> m;
	int a[n][m];
	f(i, n)
	{
		f(j, m)
		{
			cin >> a[i][j];
		}
	}
	vector<pii> v;
	f(i, n - 1)
	{
		f(j, m - 1)
		{
			if (a[i][j] == 1 && a[i + 1][j] == 1 && a[i][j + 1] == 1 && a[i + 1][j + 1] == 1)
				v.pb({i, j});
		}
	}
	int b[n][m];
	f(i, n)
	{
		f(j, m)
		{
			b[i][j] = 0;
		}
	}
	f(i, v.size())
	{
		int x = v[i].ff, y = v[i].ss;
		b[x][y] = 1;
		b[x + 1][y] = 1;
		b[x][y + 1] = 1;
		b[x + 1][y + 1] = 1;

	}
	bool z = true;
	f(i, n)
	{
		f(j, m)
		{
			if (a[i][j] != b[i][j])
			{
				z = false;
				break;
			}
		}
	}
	if (z)
	{
		cout << v.size() << endl;
		f(i, v.size())
		{
			cout << v[i].ff + 1 << " " << v[i].ss + 1 << endl;
		}
	}
	else
	{
		cout << -1 << endl;
	}








}
 
