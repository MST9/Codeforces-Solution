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

	string a, b, c;
	cin >> a >> b >> c;
	set<char> st;
	st.insert(a[1]);
	st.insert(b[1]);
	st.insert(c[1]);
	if (st.size() == 1)
	{
		vi p;
		p.pb(a[0] - '0');
		p.pb(b[0] - '0');
		p.pb(c[0] - '0');

		sort(p.begin(), p.end());
		if (p[0] == p[1] && p[1] == p[2])
		{
			cout << 0 << endl;
		}
		else if (p[0] + 1 == p[1] && p[1] + 1 == p[2])
		{
			cout << 0 << endl;
		}
		else if (p[0] == p[1] && p[1] != p[2])
		{
			cout << 1 << endl;
		}
		else if (p[0] != p[1] && p[1] == p[2])
		{
			cout << 1 << endl;
		}
		else if (p[0] + 1 == p[1] && p[1] + 1 != p[2])
		{
			cout << 1 << endl;
		}
		else if (p[0] + 1 != p[1] && p[1] + 1 == p[2])
		{
			cout << 1 << endl;
		}
		else if (p[0] + 2 == p[1])
		{
			cout << 1 << endl;
		}
		else if (p[1] + 2 == p[2])
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 2 << endl;
		}

	}
	else if (st.size() == 2)
	{
		//cout << "Hola\n";
		set<char> w;
		vi p, q;
		w.insert(a[1]);
		if (w.find(b[1]) != w.end())
		{
			p.pb(a[0] - '0');
			p.pb(b[0] - '0');
			sort(p.begin(), p.end());
			if (p[0] == p[1])
			{
				cout << 1 << endl;
			}
			else if (p[0] + 1 == p[1] || p[0] + 2 == p[1])
			{
				cout << 1 << endl;


			}
			else
			{
				cout << 2 << endl;
			}
		}
		else if (w.find(c[1]) != w.end())
		{
			p.pb(a[0] - '0');
			p.pb(c[0] - '0');
			sort(p.begin(), p.end());
			if (p[0] == p[1])
			{
				cout << 1 << endl;
			}
			else if (p[0] + 1 == p[1] || p[0] + 2 == p[1])
			{
				cout << 1 << endl;


			}
			else
			{
				cout << 2 << endl;
			}
		}
		else
		{
			p.pb(b[0] - '0');
			p.pb(c[0] - '0');
			sort(p.begin(), p.end());
			if (p[0] == p[1])
			{
				cout << 1 << endl;
			}
			else if (p[0] + 1 == p[1] || p[0] + 2 == p[1])
			{
				cout << 1 << endl;


			}
			else
			{
				cout << 2 << endl;
			}
		}

	}
	else
	{
		cout << 2 << endl;

	}








}
 
