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
#define mod1			998244353
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
		int x;
		cin >> x;
		mii m;
		m[1] = 1;
		m[11] = 3;
		m[111] = 6;
		m[1111] = 10;
		for (int i = 2; i <= 9; i++)
		{
			int a = i, b = 10 * i + i, c = 10 * b + i, d = 10 * c + i, e = 1000 * (i - 1) + 100 * (i - 1) + 10 * (i - 1) + i - 1;
			m[a] = m[e] + 1;
			m[b] = m[a] + 2;
			m[c] = m[b] + 3;
			m[d] = m[c] + 4;
		}
		cout << m[x] << endl;
	}



}




 
