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
 
 
	int p, q;
	cin >> p >> q;
	int row[p], col[q];
	f(i, p)
	{
		cin >> row[i];
	}
	f(i, q)
	{
		cin >> col[i];
	}
	int mat[p][q] = {};
	bool x = false;
	for (int i = 0; i < p; i++)
	{
		int w = row[i];
		if (w == 0)
			mat[i][w] = -1;
		else
		{
			for (int j = 0; j < w; j++)
			{
				mat[i][j] = 1;
			}
		}
	}
 
	for (int i = 0; i < q; i++)
	{
		int w = col[i];
		if (w == 0)
			mat[0][i] = -1;
		else
		{
			for (int j = 0; j < w; j++)
			{
				mat[j][i] = 1;
			}
		}
	}
 
	for (int i = 0; i < p; i++)
	{
		int w = row[i];
		int dw = 0;
		if (mat[i][0] == 1)
			dw++;
		if (dw != 0)
			for (int j = 1; j < q; j++)
			{
				if (mat[i][j] == mat[i][j - 1])
					dw++;
				else
					break;
			}
		if (dw != w)
			x = true;
	}
	for (int i = 0; i < q; i++)
	{
		int w = col[i];
		int dw = 0;
		if (mat[0][i] == 1)
			dw++;
		if (dw != 0)
		{
			for (int j = 1; j < p; j++)
			{
				if (mat[j][i] == mat[j - 1][i])
					dw++;
				else
					break;
 
			}
		}
		if (dw != w)
			x = true;
	}
	if (x)
	{
		cout << 0 << endl;
	}
	else
	{
		int cnt = 1;
		for (int i = 0; i < p; i++)
		{
			for (int j = 0; j < q; j++)
			{
				int d, e;
				d = row[i] - 1;
				e = col[j] - 1;
				if (j > d + 1 && i > e + 1)
				{
					cnt = (cnt * 2) % mod;
				}
 
			}
		}
		cout << cnt << endl;
	}
 
}
