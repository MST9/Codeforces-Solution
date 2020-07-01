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
		int n, m;
		cin >> n >> m;
		int a[n][m];
		f(i, n)
		{
			f(j, m)
			{
				cin >> a[i][j];
			}
		}
		int dist = n + m - 1;
 
		int cnt = 0;
		int low = 0, high = dist - 1;
		while (low < high)
		{
			//cout << low << endl;
			int cnt1_0 = 0, cnt1_1 = 0, cnt2_0 = 0, cnt2_1 = 0;
 
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					int w = abs(i - 0) + abs(j - 0);
					if (w == low)
					{
						//cout << i << " " << j << " " << low << endl;
						if (a[i][j] == 0)
						{
							cnt1_0++;
 
						}
						else
						{
							cnt1_1++;
						}
					}
					int y = abs(i - (n - 1)) + abs(j - (m - 1));
					if (y == low)
					{
						//cout << i << " " << j <<  " " << low << endl;
						if (a[i][j] == 0)
						{
							cnt2_0++;
 
						}
						else
						{
							cnt2_1++;
						}
					}
				}
 
			}
			int net_0 = 0, net_1 = 0;
			net_0 = cnt1_0 + cnt2_0;
			net_1 = cnt1_1 + cnt2_1;
			if (net_0 < net_1)
			{
				cnt += net_0;
			}
			else
			{
				cnt += net_1;
			}
 
			low++;
			high--;
		}
		cout << cnt << endl;
	}
 
 
 
 
}
