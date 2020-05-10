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
	int a[6] = {};
	int y, z;
	set<int> st;
 
	int x, w;
	for (int i = 0; i < 4; i++)
	{
		if (i == 0)
		{
			cout << "? " << 1 << " " << 1 << endl;
			cout.flush();
			cin >> w;
			w = sqrt(w);
		}
		else if (i == 1)
		{
			cout << "? " << 2 << " " <<  2 << endl;
			cout.flush();
			cin >> x;
			x = sqrt(x);
		}
		else if (i == 2)
		{
			cout << "? " << 3 << " " << 4 << endl;
			cout.flush();
			cin >> y;
		}
		else if (i == 3)
		{
			cout << "? " << 4 << " " << 5 << endl;
			cout.flush();
			cin >> z;
		}
 
	}
 
	a[0] = w;
	st.insert(w);
 
 
 
	a[1] = x;
	st.insert(x);
 
 
 
 
 
 
	int aux[6] = {4 , 8, 15, 16, 23, 42};
	set<int> aut;
	f(i, 6)
	{
		aut.insert(aux[i]);
	}
	for (int i = 0; i < 6; i++)
	{
 
		if (st.find(aux[i]) == st.end())
		{
			if (y % aux[i] == 0 && z % aux[i] == 0)
			{
				if (aut.find(aux[i]) != aut.end() && aut.find(y / aux[i]) != aut.end() && aut.find(z / aux[i]) != aut.end())
				{
					int d = aux[i], e = y / aux[i], f = z / aux[i];
					if (d != e && e != f && f != d)
					{
						a[3] = aux[i];
						st.insert(a[3]);
						break;
					}
				}
 
			}
		}
	}
	a[2] = y / a[3];
	st.insert(a[2]);
	a[4] = z / a[3];
	st.insert(a[4]);
	f(i, 6)
	{
		if (st.find(aux[i]) == st.end())
		{
			a[5] = aux[i];
			break;
		}
	}
	cout << "! ";
	f(i, 6)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout.flush();
 
}
