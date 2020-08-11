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
#define PI              3.1415926535
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
		int a[4 * n];
		mii mq;
		f(i, 4 * n)
		{
			cin >> a[i];
			mq[a[i]]++;
		}
		sort(a, a + 4 * n);
		bool z = true;
		int s = 0, e = 4 * n - 1;
		int area = 0;
		// f(i, 4 * n)
		// cout << a[i] << " ";
		// cout << endl;

		while (s < e)
		{
			//cout << area << endl;
			if (a[s] == a[s + 1] && a[e] == a[e - 1 ])
			{
				if (area == 0)
				{
					area = a[s] * a[e];
				}
				else if (a[s]*a[e] != area)
				{
					z = false;
					break;
				}
			}
			else
			{
				z = false;
				break;
			}
			s = s + 2;
			e = e - 2;
		}
		//cout << z << endl;
		if (z)
			cout << "YES\n";
		else
		{
			cout << "NO\n";
		}


	}








}
 
