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
 
	int n;
	cin >> n;
	int a[n];
	f(i, n)
	{
		cin >> a[i];
	}
	mii mq;
	int freq = 0, f, low = n;
	f(i, n)
	{
		int x = a[i];
		mq[a[i]]++;
		if (mq[x] > freq)
		{	freq = mq[x], f = x;
 
 
		}
	}
	f(i, n)
	{
		if (a[i] == f && i < low)low = i;
	}
	cout << n - freq << endl ;
	for (int i = low; i > 0; i--)
	{
		if (a[i - 1] > a[i])
		{
			cout << 2 << " " << i << " " << i + 1 << endl;
 
		}
		else if (a[i - 1] < a[i])
		{
			cout << 1 << " " << i << " " << i + 1 << endl;
		}
		a[i - 1] = a[i];
	}
	for (int i = low; i < n - 1; i++)
	{
		if (a[i + 1] > a[i])
		{
			cout << 2 << " " << i + 2 << " " << i + 1 << endl;
		}
		else if (a[i + 1] < a[i])
		{
			cout << 1 << " " << i + 2 << " " << i + 1 << endl;
		}
		a[i + 1] = a[i];
	}
 
 
 
}
