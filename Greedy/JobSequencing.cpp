
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
	vector<pair<int, int>>v;
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		int p, d;
		cin >> p >> d;
		v.pb({p, d});
	}
	sort(v.rbegin(), v.rend());
	int totalProfit = 0;
	vector<pair<int, pair<int, int>>>jobsDeadlinesProfits;
	int ar[10] = {0};
	for (int i = 0; i < 5; i++) {
		for (int j = v[i].second; j >= 1; j--) {
			if (ar[j] == 0) {
				totalProfit += v[i].first;
				ar[j] = 1;
				jobsDeadlinesProfits.pb({i + 1, {v[i].first, j}});
				break;
			}
		}
	}
	for (auto i : jobsDeadlinesProfits)cout << i.first << " " << i.second.first << " " << i.second.second << endl;
	cout << totalProfit << endl;

	return 0;
}




