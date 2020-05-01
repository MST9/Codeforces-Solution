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
		cin >> s;
		int n = s.length();
		int z[n] = {};
		set<int> x;
		for (int i = 0; i < n - 2; i++)
		{
			int y = i + 1;
			if (i + 4 < n && (s[i] == 't' && s[i + 1] == 'w' && s[i + 2] == 'o' && s[i + 3] == 'n' && s[i + 4] == 'e'))
				x.insert(y + 2), i = i + 4;
			else if ( (s[i + 2] == 'e' && s[i + 1 ] == 'n' && s[i ] == 'o') || (s[i + 2] == 'o' && s[i + 1] == 'w' && s[i ] == 't'))
			{
 
 
				x.insert(y + 1);
			}
		}
		cout << x.size() << endl;
		for (auto q = x.begin(); q != x.end(); q++)
		{
			cout << *q << " ";
		}
		cout << endl;
	}
 
 
}
