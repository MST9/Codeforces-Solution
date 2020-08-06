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
		int c[n], o[n];
		int minc = inf, mino = inf;;
		f(i, n)
		{
			cin >> c[i];
			if (c[i] < minc)
				minc = c[i];
		}
		f(i, n)
		{
			cin >> o[i];
			if (o[i] < mino)
				mino = o[i];
		}
 
		int cd = 0, od = 0;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
 
			int mini = min(c[i] - minc, o[i] - mino);
			c[i] = c[i] - mini;
			o[i] = o[i] - mini;
			sum += mini;
 
 
		}
		// f(i, n)
		// {
		// 	cout << c[i] << " ";
		// }
		// cout << endl;
		// f(i, n)
		// {
		// 	cout << o[i] << " ";
		// }
		// cout << endl;
		// cout << sum << endl;
		for (int i = 0; i < n; i++)
		{
			sum += o[i] - mino;
			sum += c[i] - minc;
			//cout << sum << endl;
		}
		cout << sum << endl;
 
 
 
 
 
 
 
	}
 
 
 
 
 
 
 
 
 
 
}
 
