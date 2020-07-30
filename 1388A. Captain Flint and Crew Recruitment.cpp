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
 
 
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	if (a > b)
		return gcd(a % b, b);
	else
		return gcd(a, b % a);
}
 
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
		vi v;
		v.pb(6);
		v.pb(10);
		v.pb(14);
		v.pb(22);
		v.pb(26);
		v.pb(34);
		v.pb(38);
		v.pb(15);
		v.pb(21);
		v.pb(33);
		v.pb(39);
		v.pb(51);
		v.pb(57);
		v.pb(35);
		v.pb(55);
		v.pb(65);
		v.pb(85);
		v.pb(95);
		v.pb(77);
		v.pb(91);
		v.pb(7 * 17);
		v.pb(7 * 19);
		v.pb(11 * 13);
		v.pb(11 * 17);
		v.pb(11 * 19);
		v.pb(13 * 17);
		v.pb(13 * 19);
		v.pb(17 * 19);
		v.pb(2 * 23);
		v.pb(3 * 23);
		v.pb(5 * 23);
		v.pb(7 * 23);
		v.pb(11 * 23);
		v.pb(13 * 23);
		v.pb(17 * 23);
		v.pb(19 * 23);
		sort(v.begin(), v.end());
		int p = -1, q = -1, r = -1, u = -1;
		for (int i1 = 0; i1 < v.size(); i1++)
		{
			for (int i2 = i1 + 1; i2 < v.size(); i2++)
			{
				for (int i3 = i2 + 1; i3 < v.size(); i3++)
				{
					int z = v[i1] + v[i2] + v[i3];
					if (n > z)
					{
						int w = n - z;
						if (w != v[i1] && w != v[i2] && w != v[i3])
						{
							p = v[i1];
							q = v[i2];
							r = v[i3];
							u = w;
							break;
						}
					}
				}
			}
		}
		if (p != -1)
		{
 
			cout << "YES\n";
			cout << p << " " << q << " " << r << " " << u << endl;
		}
		else
		{
			cout << "NO\n";
		}
	}
 
 
 
 
 
 
 
 
 
 
}
