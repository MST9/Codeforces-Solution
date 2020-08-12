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
		int r, g, b, w;
		cin >> r >> g >> b >> w;
		int cnt0 = 0;
		if (r == 0)
			cnt0++;
		if (g == 0)
			cnt0++;
		if (b == 0)
			cnt0++;
		if (cnt0 > 0)
		{
			if (cnt0 == 3)
			{
				cout << "YES\n";
			}
			else if (cnt0 == 2)
			{
				int odd = 0;
				if (r % 2 != 0)
					odd++;
				if (g % 2 != 0)
					odd++;
				if (b % 2 != 0)
					odd++;
				if (odd == 0)
				{
					cout << "YES\n";
				}
				else if (odd == 1)
				{
					if (w % 2 == 0)
						cout << "YES\n";
					else
						cout << "NO\n";
				}

			}
			else if (cnt0 == 1)
			{
				int odd = 0;
				if (r % 2 != 0)
					odd++;
				if (g % 2 != 0)
					odd++;
				if (b % 2 != 0)
					odd++;
				if (odd == 0)
				{
					cout << "YES\n";
				}
				else if (odd == 1)
				{
					if (w % 2 == 0)
						cout << "YES\n";
					else
						cout << "NO" << endl;
				}
				else if (odd == 2)
				{
					cout << "NO\n";

				}
			}

		}
		else
		{
			if (w % 2 == 0)
			{
				int odd = 0;
				if (r % 2 != 0)
					odd++;
				if (g % 2 != 0)
					odd++;
				if (b % 2 != 0)
					odd++;
				if (odd == 0)
				{
					cout << "YES\n";
				}
				else if (odd == 1)
				{
					cout << "YES\n";
				}
				else if (odd == 2)
				{
					cout << "NO\n";
				}
				else if (odd == 3)
				{
					cout << "YES\n";
				}

			}
			else
			{
				int odd = 0;
				if (r % 2 != 0)
					odd++;
				if (g % 2 != 0)
					odd++;
				if (b % 2 != 0)
					odd++;
				if (odd == 0)
				{
					cout << "YES\n";
				}
				else if (odd == 1)
				{
					cout << "NO\n";
				}
				else if (odd == 2)
				{
					cout << "YES\n";
				}
				else if (odd == 3)
				{
					cout << "YES\n";
				}
			}
		}

	}








}
 
