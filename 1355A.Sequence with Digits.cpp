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
		string s;
		int k;
		cin >> s >> k;
		int w;
		vector<int> r;
		for (int i = 0; i < s.length(); i++)
		{
			r.pb(s[i] - '0');
		}
		int n = s.length();
		int f = 0;
		for (int i = 0; i < r.size(); i++)
		{
			f += r[i] * pow(10, n - i - 1);
		}
		int z = f;
		for (int i = 1; i < k; i++)
		{
 
 
			int p, q;
			vector<int> v;
			for (int i = 0; i < s.length(); i++)
			{
				v.pb(s[i] - '0');
			}
			sort(v.begin(), v.end());
			p = v[v.size() - 1], q = v[0];
			if (q == 0)
				break;
			z = z + p * q;
			s = to_string(z);
		}
		cout << s << endl;
	}
 
}
