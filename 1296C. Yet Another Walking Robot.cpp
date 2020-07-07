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
		int n;
		cin >> n;
		string s;
		cin >> s;
		int x = 0, y = 0;
		map<pii, int> mq;
		pii h, u, e;
		h.ff = 0;
		h.ss = 0;
		mq[h] = 0;
		int diff = inf;
		e.ff = -1;
		e.ss = -1;
		f(i, n)
		{
			if (s[i] == 'L')
				x--;
			if (s[i] == 'R')
				x++;
			if (s[i] == 'U')
				y++;
			if (s[i] == 'D')
				y--;
 
			u.ff = x;
			u.ss = y;
			if (mq.find(u) == mq.end())
			{
				mq[u] = i + 1;
			}
			else
			{
				int cal = i + 1 - mq[u];
				if (cal < diff)
				{
					diff = cal;
					e.ff = mq[u] + 1;
					e.ss = i + 1;
					//cout << cal << endl;
 
				}
				mq[u] = i + 1;
 
			}
 
 
		}
		if (e.ff == -1)
		{
			cout << -1 << endl;
		}
		else
		{
 
			cout << e.ff << " " << e.ss << endl;
		}
 
 
	}
 
 
 
 
}
