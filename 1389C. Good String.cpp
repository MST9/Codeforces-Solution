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
		string s;
		cin >> s;
		string l = "", r = "";
		for (int i = 1; i < s.length(); i++)
		{
			l += s[i];
		}
		l += s[0];
		r += s[s.length() - 1];
		f(i, s.length() - 1)
		{
			r += s[i];
		}
		bool z = true;
		f(i, s.length())
		{
			if (l[i] != r[i])
			{
				z = false;
				break;
			}
		}
		if (z)
		{
			cout << 0 << endl;
		}
		else
		{
			int a[10] = {};
			f(i, s.length())
			{
				int q = s[i] - '0';
				if (q < 10)
					a[q]++;
 
			}
			sort(a, a + 10);
			int p = a[9];
			int u = s.length() - p;
			//cout << u << endl;
			int ans = inf;
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (i != j)
					{
						string g = "";
						f(v, s.length())
						{
							if (g.length() == 0)
							{
								if (s[v] - '0' == i )
								{
									g += s[v];
								}
							}
							int y = g.length() - 1;
							if (g[y] - '0' == i && s[v] - '0' == j)
							{
								g += s[v];
							}
							else if (g[y] - '0' == j && s[v] - '0' == i)
							{
								g += s[v];
							}
						}
						//cout << g << endl;
						int hh = s.length() - g.length();
						if (hh < ans && g.length() % 2 == 0)
						{
							ans = hh;
							//cout << g << endl;
						}
					}
 
				}
			}
			cout << min(ans, u) << endl;
		}
 
 
 
	}
 
 
 
 
 
 
 
 
 
 
}
 
