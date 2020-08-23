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
		string a, b;
		cin >> a >> b;
		// f(i, n)
		// {
		// 	int u;
		// 	cin >> u;
		// 	a.pb(u);


		// }
		// f(i, n)
		// {
		// 	int u;
		// 	cin >> u;
		// 	b.pb(u);

		// }
		//cout << a << endl << b << endl;
		bool z = true;
		int cnt = 0;
		int idx = 0, v = 0;

		if (n == 1)
		{

			if (a[0] - '0' < 3 || b[0] - '0' < 3)
			{
				z = false;
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
		else
		{

			if (a[0] - '0' < 3)
			{

				v = 0;
			}
			else
			{
				if (b[0] - '0' < 3)
				{
					z = false;
				}
				v = 1;
			}

			for (int i = 1; i < n - 1; i++)
			{
				if (v == 1)
				{
					if (b[i] - '0' < 3)
					{
						v = 1;
					}
					else
					{
						if (a[i] - '0' < 3)
						{
							z = false;
							break;
						}
						v = 0;
					}
				}
				else
				{
					if (a[i] - '0' < 3)
					{
						v = 0;
					}
					else
					{
						if (b[i] - '0' < 3)
						{
							z = false;
							break;
						}
						v = 1;
					}

				}

			}

			if (v == 1)
			{
				if (b[n - 1] - '0' > 2)
				{
					z = false;
				}

			}
			else
			{
				if (a[n - 1] - '0' < 3 || b[n - 1] - '0' < 3)
				{
					z = false;
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
