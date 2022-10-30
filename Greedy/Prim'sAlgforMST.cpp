#include <bits/stdc++.h>
using namespace std;

///
#define int long long
#define wt getchar();
#define ttt cout<<"T"<<endl;
#define dbg1(x) cout<<#x<<": "<<x<<endl;
#define dbg2(x,y) cout<<#x<<": "<<x<<", "<<#y<<": "<<y<<endl;
#define dbg3(x,y,z) dbg2(x,y)cout<<#z<<": "<<z<<endl;
#define dbg4(x,y,z,xx) dbg1(x)dbg3(x,y,z)cout<<#xx<<": "<<xx<<endl;
#define visar(x) for(int i:x) cout<<i<<" "; cout<<endl;
#define ty int t; cin >> t; while(t--)
#define pb push_back
const int mod  = 1e9 + 7;
const int eps  = 1e-9 ;
const int maxn = 1e5 + 1;
const int inf  = 5e18 ;
const int minf = -inf ;

/// * order_of_key() find the number of elements smaller than x
/// * find_by_order() find the element present at the xth index
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree <int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> osthir;
/*er kaj+ order_of_key( ) , find_by_order() namer duita function ase,
suppose set st er kisu value ase 2 3 4 5 8
*st.find_by_order(4) returns 8(4th value)
*st.find_by_order(0) returns 2
order_of_key(4) returns 2( number of values less than 4
order_of_key(7) reutrns 4
*/



int32_t main()
{
#ifdef offCode
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios::sync_with_stdio ( 0 );
	cin.tie ( 0 );
	cout.tie ( 0 );
// ===============================================================


	int n, e;
	cin >> n >> e;

	vector<pair<int, int>>v[n + 2];

	for (int i = 0; i < e; ++i)
	{
		/* code */
		int x, y, c;
		cin >> x >> y >> c;
		v[x].pb({y, c});
		v[y].pb({x, c});

	}
	priority_queue<pair<int, pair<int, int>> >pq;

	for (auto i : v[1]) {
		pq.push({ -i.second, {i.first, 1}});
	}
	bool vis[n + 2];
	vector <pair<int, int>>msTree[n + 2];

	while (pq.size() > 0)
	{
		int x, y, c;
		x = (pq.top()).second.second;
		y = (pq.top()).second.first;
		c = (pq.top()).first;
		pq.pop();
		if (vis[y] == 1)continue;
		vis[y] = 1;
		msTree[x].pb({y, -c});

		for (auto ii : v[y]) {
			pq.push({ -ii.second, {ii.first, y}});
		}
	}

	for (int i = 1; i <= n; i++) {

		if (msTree[i].size() == 0)continue;
		
		cout << i << ": ";
		for (auto j : msTree[i]) {
			cout << "(e:" << j.first << ",c: " << j.second << ") ";
		} cout << endl;
	}
	

// ===============================================================
	return 0;
}




