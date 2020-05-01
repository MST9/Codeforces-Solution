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
		int n;
		cin >> n;
		int a[n][4], b[n];
		mii mq;
		f(i, n)
		{
			int x;
			cin >> x;
			b[i] = x;
			int p, q, r, s;
			s = x % 10;
			p = x / 1000;
			q = (x / 100) % 10;
			r = (x / 10) % 10;
			a[i][0] = p;
			a[i][1] = q;
			a[i][2] = r;
			a[i][3] = s;
			mq[x]++;
		}
 
		int cnt = 0;
		for (auto q = mq.begin(); q != mq.end(); q++)
		{
 
			cnt += q->second - 1;
 
 
		}
		cout << cnt << endl;
		for (int i = 0; i < n; i++)
		{
			if (mq[b[i]] > 1)
			{
				set<int> g;
				for (int i = 0; i < n; i++)
				{
					g.insert(a[i][0]);
				}
				if (g.find(1) == g.end())
				{
					a[i][0] = 1;
				}
				else if (g.find(2) == g.end())
				{
					a[i][0] = 2;
				}
				else if (g.find(3) == g.end())
				{
					a[i][0] = 3;
				}
				else if (g.find(4) == g.end())
				{
					a[i][0] = 4;
				}
				else if (g.find(5) == g.end())
				{
					a[i][0] = 5;
				}
				else if (g.find(6) == g.end())
				{
					a[i][0] = 6;
				}
				else if (g.find(7) == g.end())
				{
					a[i][0] = 7;
				}
				else if (g.find(8) == g.end())
				{
					a[i][0] = 8;
				}
				else if (g.find(9) == g.end())
				{
					a[i][0] = 9;
				}
				else if (g.find(0) == g.end())
				{
					a[i][0] = 0;
				}
				g.erase(a[i][0]);
				mq[b[i]]--;
			}
 
 
 
		}
 
		for (int i = 0; i < n; i++)
		{
 
			cout << a[i][0] << a[i][1] << a[i][2] << a[i][3] << endl;
		}
 
 
 
	}
 
}
