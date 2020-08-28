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

		int n, a, b;
		cin >> n >> a >> b;
		string s;
		cin >> s;

		vi v;
		f(i, s.length())
		{
			if (s[i] - '0' == 1)
			{
				v.pb(i);
			}
		}
		int cnt1 = 0, cnt2 = 0, cnt = 0;
		for (int i = 1; i < v.size(); i++)
		{
			int u1 = v[i] - v[i - 1];
			int u = u1 - 1;
			if (u > 1)
			{
				int e = 0, r = 0;
				e = min((u + 2) * a + (u - 1) * b, u * a + (u - 1) * 2 * b);
				r = a + 4 * b;
				//cout << u << " " << e << endl;
				cnt1 += e + r;
			}
			else if (u > 0 && u < 2)
			{
				cnt1 += u * a + (u - 1) * 2 * b;
				cnt1 += a + 4 * b;
			}
			else if (u == 0)
			{
				cnt1 += a + 2 * b;
				//cout << cnt << endl;
			}
		}
		if (v.size() >= 1)
		{
			int s = 0, d = 0, f = 0;
			s += a + 4 * b ;
			int idx1 = v[0];
			int idx2 = v[v.size() - 1];
			d = (idx1 - 0 + 1) * a + (idx1 - 0 ) * b;
			f = (n - 1 - idx2 + 1) * (a + b) - b;
			cout/* << d << " " << s << " " << cnt1 << " " << f << " " */ << d + s + cnt1 + f << endl;

		}
		else
		{
			cnt += s.length() * a + (s.length() + 1) * b;
			cout << cnt << endl;
		}







	}












}
