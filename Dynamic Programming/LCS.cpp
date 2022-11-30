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
#define pb push_back
#define ts cout<<"TTTT"<<endl;
#define ty int t; cin >> t; while(t--)
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


// map<int, priority_queue<int, vector<int>, greater<int>>>st;
int dp[1000][1000];
int lcs(int m,int n, string &a, string &b)
{
    if(m*n==0)
    {
        return 0;
    }
    if(dp[m][n]!=-1)return dp[m][n];
    if(a[m-1]==b[n-1])return dp[m][n]=1+lcs(m-1,n-1,a,b);
    return dp[m][n]=max(lcs(m-1,n,a,b),lcs(m,n-1,a,b));
}



void kick(int CASE)
{
    string a,b;
    cin >> a >> b;
    for(int i=1; i<1000; i++)
        for (int j = 1; j < 1000; ++j)
        {
            dp[i][j]=-1;
            /* code */
        }
    int ans = lcs(a.size(),b.size(),a,b);
    cout<<ans<<endl;
}

int32_t main()
{
    
#ifdef home
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ios::sync_with_stdio ( 0 );
    cin.tie ( 0 );
    cout.tie ( 0 );

   int t = 1, i = 1;

  // cin >> t; for ( ; i <= t; i++ ) 
   { kick ( i ); }



}
