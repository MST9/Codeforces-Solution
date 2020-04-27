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
	string fix[10] = { "1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
 
	w(x)
	{
		string t;
		cin >> t;
		if (t.length() <= 2)
		{
			cout << t << endl;
		}
		else
		{
			bool x = true;
			for (int i = 0; i < t.length() - 1; i++)
			{
				if (t[i] != t[i + 1])
				{
					x = false;
					break;
				}
			}
			if (x)
			{
				cout << t << endl;
			}
			else
			{
				string x = "", y = "";
				for (int i = 0; i < t.length() - 1; i++)
				{
					if (t[i] == '1' && t[i + 1] == '1')
					{
						x += to_string(1);
						x += to_string(0);
					}
					else if (t[i] == '0' && t[i + 1] == '0')
					{
						x += to_string(0);
						x += to_string(1);
					}
					else
					{
						x += t[i];
					}
				}
				x += t[t.length() - 1];
				if (x.length() < 2 * t.length())
					cout << x << endl;
				else
				{
					y += t;
					y += t;
					cout << y << endl;
				}
			}
		}
 
	}
 
}
