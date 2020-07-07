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
 
 
 
 
	int n, a, b, k;
	cin >> n >> a >> b >> k;
	int h[n];
	f(i, n)
	{
		cin >> h[i];
	}
 
	vi v;
	f(i, n)
	{
		int z = h[i] % (a + b);
		if (z == 0)
		{
			int r = b;
			if (r % a == 0)
			{
				v.pb(r / a);
			}
			else
			{
				int q = r / a;
				q++;
				v.pb(q);
			}
		}
		else if (z <= a)
		{
			v.pb(0);
		}
		else
		{
			z = z - a;
			if (z % a == 0)
			{
				v.pb(z / a);
			}
			else
			{
				int q = z / a;
				q++;
				v.pb(q);
			}
		}
	}
	// f(i, v.size())
	// {
	// 	cout << v[i] << " ";
	// }
	// cout << endl;
	sort(v.begin(), v.end());
	int cnt = 0;
	f(i, v.size())
	{
 
		if (v[i] == 0)
		{
			cnt++;
		}
		else if (k >= v[i])
		{
			cnt++;
			k = k - v[i];
		}
	}
	cout << cnt << endl;
 
 
 
 
}
