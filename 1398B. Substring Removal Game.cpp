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
		string s;
		cin >> s;
		vector<pii> p;
		mii m;
		int cnt = 0;
		f(i, s.length())
		{
			if (s[i] == '1')
				cnt++;
			else
			{

				m[cnt]++;
				cnt = 0;
			}
		}
		if (cnt != 0)
			m[cnt]++;
		for (auto q = m.begin(); q != m.end(); q++)
		{
			int w = q->first;
			int r = q->second;
			p.pb({w, r});
		}
		vi v;
		for (int i = p.size() - 1; i >= 0; i--)
		{
			int z = p[i].ff;
			int y = p[i].ss;
			f(j, y)
			{
				v.pb(z);
			}
		}
		sort(v.begin(), v.end());
		int u = 0;
		int ans1 = 0, ans2 = 0;
		for (int i = v.size() - 1; i >= 0; i--)
		{
			if (u == 0)
			{
				ans1 += v[i];
				u = 1;
			}
			else
			{
				ans2 += v[i];
				u = 0;
			}


		}
		cout << max(ans1, ans2) << endl;


	}









}
 
