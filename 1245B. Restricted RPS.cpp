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
		int a, b, c;
		cin >> a >> b >> c;
		char w[n];
		f(i, n)
		{
			w[i] = 'a';
		}
		string s;
		cin >> s;
		int cnt = 0;
		string r = "";
		f(i, n)
		{
			if (s[i] == 'R' && b > 0)
			{
				w[i] = 'P';
				b--;
			}
			else if (s[i] == 'P' && c > 0)
			{
				w[i] = 'S';
				c--;
			}
			else if (s[i] == 'S' && a > 0)
			{
				w[i] = 'R';
				a--;
			}
		}
		f(i, n)
		{
			if (w[i] != 'a')
			{
				cnt++;
			}
		}
		//cout << cnt << endl;
		if (n % 2 == 0)
		{
			if (cnt >= n / 2)
			{
				cout << "YES\n";
				f(i, n)
				{
					if (b > 0 && w[i] == 'a')
					{
						w[i] = 'P';
						b--;
					}
					else if (c > 0 && w[i] == 'a')
					{
						w[i] = 'S';
						c--;
					}
					else if (a > 0 && w[i] == 'a')
					{
						w[i] = 'R';
						a--;
					}
				}
				f(i, n)
				{
					cout << w[i];
				}
				cout << endl;

			}
			else
			{
				cout << "NO\n";
			}
		}
		else
		{
			if (cnt >= n / 2 + 1)
			{
				cout << "YES\n";
				f(i, n)
				{
					if (b > 0 && w[i] == 'a')
					{
						w[i] = 'P';
						b--;
					}
					else if (c > 0 && w[i] == 'a')
					{
						w[i] = 'S';
						c--;
					}
					else if (a > 0 && w[i] == 'a')
					{
						w[i] = 'R';
						a--;
					}
				}
				f(i, n)
				{
					cout << w[i];
				}
				cout << endl;

			}
			else
			{
				cout << "NO\n";
			}
		}


	}
}





 
