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


	int n;
	cin >> n;
	string s;
	cin >> s;
	vi ff, b;
	f(i, n)
	{
		if (s[i] == '(')
			ff.pb(i);
		else
			b.pb(i);
	}
	int y = ff.size() - b.size();
	y = abs(y);
	if (y > 0)
	{
		cout << "NO\n";
	}
	else
	{
		stack<int> st1, st2;
		bool z = true;
		f(i, n)
		{
			if (s[i] == '(')
			{
				st1.push(i);
			}
			else
			{
				if (st1.size() == 0)
				{
					st2.push(i);
				}
				else
				{
					st1.pop();
				}
			}
		}
		//cout << st1.size() << " " << st2.size() << endl;
		if (st1.size() == 0 && st2.size() == 0)
			cout << "YES\n";
		else if (st1.size() == 1 && st2.size() == 1)
			cout << "YES\n";

		else
			cout << "NO\n";

	}







}
 
