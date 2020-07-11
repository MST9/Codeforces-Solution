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
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		vi v;
		f(i, n)
		{
			v.pb(s[i] - '0');
		}
		int cnt = 0;
		// f(i, n - 1)
		// {
		// 	if (cnt <= k)
		// 	{
		// 		if (v[i] == 1 && v[i + 1] == 0)
		// 		{
		// 			swap(v[i], v[i + 1]);
		// 			cnt++;
		// 		}
		// 	}
		// }
		// while (cnt < k)
		// {
		// 	int prev = cnt;
		// 	f(i, n - 1)
		// 	{
		// 		if (v[i] == 1 && v[i + 1] == 0)
		// 		{
		// 			swap(v[i], v[i + 1]);
		// 			cnt++;
		// 			break;
		// 		}
		// 	}
		// 	if (cnt == prev)
		// 	{
		// 		break;
		// 	}
		// }
		int p = -1, q = -1;
		//int cnt = 0;
		vi h;
 
		f(i, n)
		{
			if (v[i] == 1)
			{
				q = i;
				break;
			}
		}
		if (q == -1)
		{
			f(i, n)
			{
				h.pb(i);
			}
		}
		else
		{
			f(i, q)
			{
				h.pb(i);
			}
			f(i, n)
			{
				if (v[i] == 0 && i > q)
				{
					p = i;
					int diff = p - q;
					if (diff <= k)
					{
						h.pb(q);
						q++;
						k = k - diff;
					}
					else
					{
						int z = k;
						h.pb(p - z);
						k = 0;
					}
				}
			}
		}
 
 
		int e = 0;
 
		// f(i, h.size())
		// {
		// 	cout << h[i] << ' ';
		// }
		// cout << endl;
		// for(int i=0;i<n;i++)
		// {
		// 	if()
		// }
		// int d=1;
		// for(int i=h[0]+1;i<n;i++)
		// {
		// 	if(i==h[d]&&d<)
		// }
 
 
		if (h.size() == 0)
		{
			cout << s << endl;
		}
		else
		{	//cout << h.size() << endl;
			// f(i, h.size())
			// {
			// 	cout << h[i] << " ";
			// }
			//cout << endl;
			e = 0;
			f(i, n)
			{
				//cout << e << " " << h[e] << endl;
				if (e < h.size() && i == h[e])
				{
					cout << 0;
					e++;
				}
				else
				{
 
					cout << 1;
				}
				//cout << v[i];
			}
			cout << endl;
		}
 
 
	}
 
 
 
 
 
 
 
 
}
