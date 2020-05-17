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
	int n, s;
	cin >> n >> s;
	int q = s / n;
	if (q > 1)
	{
		cout << "YES\n";
		for (int i = 0; i < n - 1; i++)
			cout << q << " ";
		cout << q + s % n << endl;
		cout << 1 << endl;
	}
	else
	{
		vi v;
		f(i, n - 1)
		{
			v.pb(1);
 
		}
		int x = 1 + s % n;
		v.pb(x);
		set<int> st;
		int z = 0;
		for (int i = v.size() - 1; i >= 0; i--)
		{
			z += v[i];
 
			st.insert(z);
		}
		z = 0;
		for (int i = 0; i < v.size() - 1; i++)
		{
			z += v[i];
			st.insert(z);
		}
		bool f = false;
		int s = n - 1 + x;
		int k = -1;
		for (int i = n; i <= s; i++)
		{
			if (st.find(i) == st.end())
			{
				int u = s - i;
				if (st.find(u) == st.end())
				{
					f = true;
					k = i;
				}
			}
		}
		if (f)
		{
			cout << "YES\n";
			f(i, n - 1)
			cout << 1 << " ";
			cout << x << endl;
			cout << k << endl;
		}
		else
		{
			cout << "NO\n";
		}
 
 
 
	}
}
