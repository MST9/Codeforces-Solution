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
		int n;
		cin >> n;
		int a[n];
		mii m;


		int y = 0;

		f(i, n)
		{
			cin >> a[i];
			m[a[i]]++;

		}
		if (m[a[0]] == n)
		{
			cout << "NO\n";

		}
		else
		{
			int y = a[0];
			vector<pii> vp;
			bool r[n];
			f(i, n)
			{
				r[i] = false;
			}
			r[0] = true;
			for (int i = 1; i < n; i++)
			{
				if (a[i] != y)
				{
					vp.pb({1, i + 1});
					r[i] = true;
				}
			}
			int z;
			int idx;
			f(i, n)
			{
				if (a[i] != y)
				{
					z = a[i];
					idx = i;
					break;
				}
			}
			//	cout << vp.size() << " " << z << " " << idx << endl;
			int cnt = n - vp.size();
			int j = 0;
			f(i, n)
			{
				//cout << i << endl;
				// if (j == cnt)
				// 	break;
				if (r[i] == false)
				{
					//cout << a[i] << " " << y << " " << z << endl;
					vp.pb({idx + 1, i + 1});
				}
				//j++;
			}

			//cout << vp.size() << " ";
			cout << "YES\n";

			f(i, vp.size())
			{
				cout << vp[i].ff << " " << vp[i].ss << endl;
			}

		}







	}



}




 
