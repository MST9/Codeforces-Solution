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
 
 
 
 
	int n;
	cin >> n;
	int f[n];
	f(i, n)
	{
		cin >> f[i];
	}
	set<int> us1, us2;
	f(i, n)
	{
		us1.insert(f[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		if (us1.find(i) == us1.end())
		{
 
			us2.insert(i);
		}
	}
	vi v;
	f(i, n)
	{
		if (f[i] == 0)
		{
			v.pb(i + 1);
		}
	}
	f(i, v.size())
	{
		int z = v[i];
		//cout << z << endl;
		if (us2.find(z) != us2.end())
		{
			for (auto q = us2.begin(); q != us2.end(); q++)
			{
				if (*q != z)
				{
					f[z - 1] = *q;
					us2.erase(q);
					break;
				}
			}
		}
 
 
	}
	f(i, n)
	{
		if (f[i] == 0)
		{
			int z = -1;
			for (auto q = us2.begin(); q != us2.end(); q++)
			{
				if (*q != i + 1)
				{
					z = *q;
					us2.erase(q);
					break;
				}
			}
			if (z != -1)
			{
				f[i] = z;
			}
		}
	}
	f(i, n)
	{
		cout << f[i] << " ";
	}
	cout << endl;
 
 
 
 
 
}
