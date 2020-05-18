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
	w(t)
	{
		string s;
		cin >> s;
		vi one, two, three;
		f(i, s.length())
		{
			if (s[i] == '1')
			{
				one.pb(i);
			}
			else if (s[i] == '2')
			{
				two.pb(i);
			}
			else
			{
				three.pb(i);
			}
 
		}
		if (one.size() == 0 || two.size() == 0 || three.size() == 0)
		{
			cout << 0 << endl;
		}
		else
		{
			int p, q, r;
			p = one[0], q = two[0], r = three[0];
 
 
 
			int len = 20000000;
			for (int i = 0; i < one.size(); i++)
			{
				p = one[i];
				int a = upper_bound(two.begin(), two.end(), p) - two.begin();
				int b = upper_bound(three.begin(), three.end(), p) - three.begin();
				int d, e;
				if (a == two.size())
					a--;
				if (b == three.size())
					b--;
				d = two[a];
				e = three[b];
				int small = min(p, min(d, e));
				int big = max(p, max(d, e));
				if (big - small + 1 < len)
					len = big - small + 1;
 
			}
			for (int i = 0; i < two.size(); i++)
			{
				q = two[i];
				int y = upper_bound(three.begin(), three.end(), q) - three.begin();
				int z = upper_bound(one.begin(), one.end(), q) - one.begin();
				int d, e;
				if (y == three.size())
					y--;
				if (z == one.size())
					z--;
				d = three[y];
				e = one[z];
				int small = min(q, min(d, e));
				int big = max(q, max(d, e));
				if (big - small + 1 < len)
					len = big - small + 1;
 
			}
			for (int i = 0; i < three.size(); i++)
			{
				r = three[i];
				int w = upper_bound(two.begin(), two.end(), r) - two.begin();
				int x = upper_bound(one.begin(), one.end(), r) - one.begin();
				int d, e;
				if (w == two.size())
					w--;
				if (x == one.size())
					x--;
				d = two[w];
				e = one[x];
				int small = min(r, min(d, e));
				int big = max(r, max(d, e));
				if (big - small + 1 < len)
					len = big - small + 1;
 
			}
 
			cout << len << endl;
		}
	}
}
