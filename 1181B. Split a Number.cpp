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


string cal(string g, string h)
{
	string r1 = "";
	int n1 = g.length();
	int n2 = h.length();

	reverse(g.begin(), g.end());
	reverse(h.begin(), h.end());

	if (n1 < n2)
	{
		string w, x;
		w = g;
		x = h;
		int carry = 0;
		string res = "";
		int v;
		f(i, w.length())
		{
			int u = w[i] - '0';
			v = x[i] - '0';
			int r = (u + v + carry) % 10;
			res += to_string(r);
			carry = (u + v + carry) / 10;
		}


		for (int i = w.length(); i < x.length(); i++)
		{
			v = x[i] - '0';
			int r = (v + carry) % 10;
			res += to_string(r);
			carry = (v + carry) / 10;

		}
		if (carry != 0)
		{
			res += to_string(carry);
		}
		r1 = res;



	}
	else if (n2 < n1)
	{


		string w, x;
		w = g;
		x = h;
		swap(w, x);
		int carry = 0;
		string res = "";
		int v;
		f(i, w.length())
		{
			int u = w[i] - '0';
			v = x[i] - '0';
			int r = (u + v + carry) % 10;
			res += to_string(r);
			carry = (u + v + carry) / 10;
		}


		for (int i = w.length(); i < x.length(); i++)
		{
			v = x[i] - '0';
			int r = (v + carry) % 10;
			res += to_string(r);
			carry = (v + carry) / 10;

		}
		if (carry != 0)
		{
			res += to_string(carry);
		}
		r1 = res;
	}
	else
	{

		string w, x;
		w = g;
		x = h;
		int carry = 0;
		string res = "";
		int v;
		f(i, n1)
		{
			int u = w[i] - '0';
			v = x[i] - '0';
			int r = (u + v + carry) % 10;
			res += to_string(r);
			carry = (u + v + carry) / 10;
		}
		if (carry != 0)
		{
			res += to_string(carry);
		}
		//reverse(res.begin(), res.end());
		r1 = res;
	}
	reverse(r1.begin(), r1.end());
	return r1;

}
string compare(string res, string r)
{
	if (res.length() < r.length())
	{
		return res;
	}
	else if (res.length() > r.length())
	{
		return r;
	}
	else
	{
		f(i, r.length())
		{
			int u = r[i] - '0';
			int v = res[i] - '0';
			if (u < v)
			{
				return r;
			}
			else if (v < u)
			{
				return res;
			}
		}
	}
	return res;
}


int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int l;
	cin >> l;
	string s;
	cin >> s;
	string res = "", res1 = "", res2 = "";
	int idx = -1;
	int start = -1, end = -1;
	for (int i = (l / 2) + 1; i < l; i++)
	{
		if (s[i] - '0' != 0)
		{
			start = i;
			break;
		}
	}
	for (int i = l / 2; i >= 0; i--)
	{
		if (s[i] - '0' != 0)
		{
			end = i;
			break;
		}
	}


	// int u = i;
	// int v = l - i;
	string g1, h1, g2, h2;
	if (start != -1)
	{
		g1 = s.substr(0, start);
		h1 = s.substr(start, l - start);
		res1 = cal(g1, h1);
		//cout << res1 << " " << g1 << " " << h1 << endl;
		res = res1;

		// if (res.length() == 0)
		// {
		// 	res = r;
		// }
		// else
		// {
		// 	if (compare(res, r))
		// 	{
		// 		//cout << g << " " << h << endl;
		// 		res = r;
		// 	}
		// }
	}
	if (end != -1)
	{
		g2 = s.substr(0, end);
		h2 = s.substr(end, l - end);
		res2 = cal(g2, h2);
		//cout << res2 << " " << g2 << " " << h2 << endl;
		// if (res.length() == 0)
		// {
		// 	res = r;
		// }
		// else
		// {
		// 	if (compare(res, r))
		// 	{
		// 		//cout << g << " " << h << endl;
		// 		res = r;
		// 	}
		// }
		if (res.length() != 0)
			res = compare(res1, res2);
		else
			res = res2;

	}

	// string r = cal(g, h);
	// if (res.length() == 0)
	// {
	// 	res = r;
	// }
	// else
	// {
	// 	if (compare(res, r))
	// 	{
	// 		//cout << g << " " << h << endl;
	// 		res = r;
	// 	}
	// }


	//cout << g << " " << h << endl;


	cout << res << endl;



}




 
