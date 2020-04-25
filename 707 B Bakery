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
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
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
 
	int n, m, k;
	cin >> n >> m >> k;
	if (k > 0)
	{
		vector<pair<int, int>> v[n + 1];
		set<int> s;
		for (int i = 0; i < m; i++)
		{
			int a, b, c;
			cin >> a >> b >> c;
			s.insert(a);
			s.insert(b);
			v[a].pb(mp(b, c));
			v[b].pb(mp(a, c));
		}
		int q[k];
		map<int, bool> maa;
		for (int i = 0; i < k; i++)
		{	cin >> q[i];
			maa[q[i]] = true;
		}
		int ma = inf;
		for (int i = 0; i < k; i++)
		{
 
			if (s.find(q[i]) != s.end())
			{
				for (int j = 0; j < v[q[i]].size(); j++)
				{
					//cout << v[q[i]][j].ss << " ";
					if (v[q[i]][j].ss < ma && maa[v[q[i]][j].ff] == false)
					{	ma = v[q[i]][j].ss;
						//cout << "HOLLA\n";
					}
				}
			}
			// else
			// 	cout << q[i] << endl;
		}
		if (ma == inf)
			cout << -1 << endl;
		else
			cout << ma << endl;
	}
	else
	{
		cout << -1 << endl;
	}
 
 
}
