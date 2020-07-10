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
		int a[n];
		f(i, n)
		{
			cin >> a[i];
		}
		if (n < 6)
		{
			cout << 0 << " " << 0 << " " << 0 << endl;
		}
		else
		{
			mii mq;
			f(i, n)
			{
				mq[a[i]]++;
			}
			unordered_set<int> us;
			vi v;
			f(i, n)
			{
				if (us.find(a[i]) == us.end())
				{
					v.pb(mq[a[i]]);
					us.insert(a[i]);
				}
			}
			int g = 0, s = 0, b = 0;
			int cnt = 0;
			// f(i, v.size())
			// {
			// 	cout << v[i] << " ";
			// }
			// cout << endl;
			g = v[0];
			cnt += v[0];
			int i;
			for ( i = 1; i < v.size(); i++)
			{
				if (cnt <= n / 2 && s <= g)
				{
					s += v[i];
					cnt += v[i];
				}
				else
					break;
			}
			while (i < v.size())
			{
				if (cnt + v[i] <= n / 2)
				{
 
					cnt += v[i];
					b += v[i];
				}
				else
					break;
				i++;
			}
			//cout << g << " " << s << " " << b << endl;
			if (g < s  && cnt <= n / 2 && g != 0 && s != 0 && b != 0 && g < b)
			{
				cout << g << " " << s << " " << b << endl;
			}
			else
			{
				cout << 0 << " " << 0 << " " << 0 << endl;
			}
 
 
 
		}
	}
 
 
 
 
 
 
 
}
