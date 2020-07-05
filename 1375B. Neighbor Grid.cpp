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
#define PI 3.1415926535
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
		int a[n][m];
		f(i, n)
		{
			f(j, m)
			{
				cin >> a[i][j];
			}
 
 
		}
		bool z = true;
		if (a[0][0] > 2 || a[n - 1][m - 1] > 2 || a[0][m - 1] > 2 || a[n - 1][0] > 2)
		{
			z = false;
		}
		for (int i = 1; i < n - 1; i++)
		{
			if (a[i][0] > 3)
			{
				z = false;
			}
			if (a[i][m - 1] > 3)
			{
				z = false;
			}
		}
		for (int i = 1; i < m - 1; i++)
		{
			if (a[0][i] > 3)
			{
				z = false;
			}
			if (a[n - 1][i] > 3)
			{
				z = false;
			}
		}
		for (int i = 1; i < n - 1; i++)
		{
			for (int j = 1; j < m - 1; j++)
			{
				if (a[i][j] > 4)
				{
					z = false;
				}
 
			}
 
 
		}
 
		if (z == false)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
			a[0][0] = 2;
			a[n - 1][m - 1] = 2;
			a[0][m - 1] = 2;
			a[n - 1][0] = 2;
			// for (int i = 1; i < n - 1; i++)
			// {
			// 	a[i][0] = 3;
			// 	a[i][m - 1] = 3;
 
			// }
			// for (int i = 1; i < m - 1; i++)
			// {
			// 	a[0][i] = 3;
			// 	a[n - 1][i] = 3;
 
			// }
 
			// for (int i = 1; i < n - 1; i++)
			// {
			// 	for (int j = 1; j < m - 1; j++)
			// 	{
			// 		a[i][j] = 4;
			// 	}
			// }
			f(i, n)
			{
				f(j, m)
				{
					if (i == 0 && j == 0)
						cout << 2 << " ";
					else if (i == 0 && j == m - 1)
						cout << 2 << " ";
					else if (i == n - 1 && j == 0)
						cout << 2 << " ";
					else if (i == n - 1 && j == m - 1)
						cout << 2 << " ";
					else if ((i == 0 || i == n - 1) && j > 0 && j < m)
						cout << 3 << " ";
					else if (i > 0 && i < n && (j == 0 || j == m - 1))
						cout << 3 << " ";
					else
						cout << 4 << " ";
				}
				cout << endl;
			}
		}
 
	}
 
 
 
 
 
}
