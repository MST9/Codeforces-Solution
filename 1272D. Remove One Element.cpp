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
	int a[n];
	f(i, n)
	{
		cin >> a[i];
	}
	int suf[n], pre[n];
	pre[0] = 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > a[i - 1])
		{
			pre[i] = pre[i - 1] + 1;
		}
		else
		{
			pre[i] = 1;
		}
	}
	suf[n - 1] = 1;
	for (int i = n - 2; i >= 0; i--)
	{
		if (a[i] < a[i + 1])
		{
			suf[i] = suf[i + 1] + 1;
		}
		else
		{
			suf[i] = 1;
		}
	}
	int cnt = 0;
	f(i, n)
	{
		if (i == 0)
		{
			if (i + 1 < n && suf[i + 1] > cnt)
			{
				cnt = suf[i + 1];
			}
 
		}
		else if (i == n - 1)
		{
			if (i > 0 && pre[i - 1] > cnt)
			{
				cnt = pre[i - 1];
			}
		}
		else
		{
			if (a[i - 1] < a[i + 1])
			{
				if (pre[i - 1] + suf[i + 1] > cnt)
				{
					cnt = pre[i - 1] + suf[i + 1];
				}
			}
			else
			{
				if (pre[i - 1] > cnt)
					cnt = pre[i - 1];
				if (suf[i + 1] > cnt)
					cnt = suf[i + 1];
			}
		}
	}
	int d = 0;
	f(i, n - 1)
	{
		if (a[i] < a[i + 1])
			d++;
	}
	if (d == n - 1)
	{
		cout << n << endl;
	}
	else
	{
		cout << cnt << endl;
	}
 
 
 
 
 
}
