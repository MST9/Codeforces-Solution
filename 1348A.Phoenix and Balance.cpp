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
		vector<int> v;
		v.pb(2);
		for (int i = 1; i < n; i++)
		{
			int x = v[i - 1] * 2;
			v.pb(x);
		}
		int z = n / 2;
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < z; i++)
		{
			sum1 += v[i];
		}
		for (int i = z; i < n; i++)
		{
			sum2 += v[i];
		}
		sum2 = sum2 - v[n - 1];
		sum2 += v[z - 1];
		sum1 = sum1 - v[z - 1];
		sum1 += v[n - 1];
		cout << abs(sum1 - sum2) << endl;
	}
}
 
