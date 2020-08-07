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
		int n;
		cin >> n;
		vector<pii> v;
		f(i, n)
		{
			int x, y;
			cin >> x >> y;
			v.pb({x, y});
		}
		sort(v.begin(), v.end());
		string s = "";
		int cx = 0, cy = 0;
		bool z = true;
		f(i, v.size())
		{
			//cout << v[i].ff << " " << v[i].ss << endl;
			int p = v[i].ff - cx, q = v[i].ss - cy;
			cx = v[i].ff;
			cy = v[i].ss;
			//cout << p << " " << q << endl;
			if (p < 0 || q < 0)
			{
				z = false;
				break;
			}
			f(j, p)
			s += "R";
			f(j, q)
			s += "U";
		}
		if (z)
			cout << "YES\n" << s << endl;
		else
			cout << "NO\n";
 
 
	}
 
 
 
 
 
 
 
 
}
 
