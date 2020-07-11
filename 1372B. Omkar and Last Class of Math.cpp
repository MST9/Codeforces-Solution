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
	else if (b == 0)
		return a;
	else if (a > b)
	{
		return gcd(a % b, b);
	}
	else
	{
		return gcd(a, b % a);
	}
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
		//cout << n;
		vi v;
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
			{
				v.pb(i);
 
			}
		}
		// f(i, v.size())
		// {
		// 	cout << v[i] << " ";
		// }
		// cout << endl;
		if (v.size() == 0)
		{
			cout << 1 << " " << n - 1 << endl;
		}
		else
		{
			int w = inf;
			pii pr;
			f(i, v.size())
			{
				int ee = v[i];
				int q1 = 1, q2 = v[i] - q1;
				int h3 = inf;
				pii prt;
				while (q1 <= q2)
				{
					int lcm = (q1 * q2) / (gcd(q1, q2));
					if (lcm < h3)
					{
						h3 = lcm;
						prt.ff = q1 * (n / v[i]);
						prt.ss = q2 * (n / v[i]);
					}
					q1++;
					q2--;
				}
				if (h3 < w)
				{
					w = h3;
					pr.ff = prt.ff;
					pr.ss = prt.ss;
				}
				// if (v[i] % 2 == 0)
				// {
				// 	int z = (v[i] / 2) * (n / v[i]);
				// 	if (z < w)
				// 	{
				// 		w = z;
				// 		pr.ff = z;
				// 		pr.ss = z;
				// 	}
				// }
				// else
				// {
				// 	int u = v[i];
				// 	int a1 = u - 1, a2 = 1;
				// 	int qq = inf;
				// 	pii prt;
				// 	while (a1 >= a2)
				// 	{
				// 		int lcm = (a1 * a2) / (gcd(a1, a2));
				// 		if (lcm < qq)
				// 		{
				// 			qq = lcm;
				// 			prt.ff = a1 * (n / v[i]);
				// 			prt.ss = a2 * (n / v[i]);
				// 		}
				// 		a1--;
				// 		a2++;
				// 	}
				// 	//cout << qq << endl;
				// 	if (qq < w)
				// 	{
				// 		w = qq;
				// 		pr.ff = prt.ff;
				// 		pr.ss = prt.ss;
				// 	}
				// 	// vi g;
				// 	// for(int i=2;i*i<=u;i++)
				// 	// {
				// 	// 	if(u%i==0)
				// 	// 	{
				// 	// 		g.pb(i);
				// 	// 	}
 
				// 	// }
				// 	// if(g.size()==0)
				// 	// {
				// 	// 	int r=(v[i]-1)*(n/v[i]);
				// 	// 	if(r<w)
				// 	// 	{
				// 	// 		w=r;
				// 	// 	}
				// 	// }
				// 	// else
				// 	// {
				// 	// 	int uu=2,vv=u-uu;
				// 	// 	while(uu<=vv)
				// 	// 	{
				// 	// 		int gg=(uu*vv)/(gcd(uu,vv));
 
 
				// 	// 	}
				// 	// }
				// }
			}
			cout << pr.ff << " " << pr.ss << endl;
		}
 
	}
 
 
 
 
 
 
 
 
 
}
