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


 map<int, priority_queue<int, vector<int>, greater<int>>>st;


void kick(int CASE)
{
    string a;
    cin >> a;
    string b = a;
    int dp[3][b.size()+2];
    for (int i = 0; i <=3; ++i)
    {
        for (int j = 0; j <= b.size(); ++j)
        {
            dp[i][j]=0;
            /* code */
        }
        /* code */
    }
    int inv=2;

    for (int i = 1; i <= a.size(); ++i)
    {
        int up=2;
        if(inv==2)up=1;

        for (int j = 1; j <= b.size(); ++j)
        {
            if(a[i-1]==b[j-1] && i!=j){dp[inv][j]=dp[up][j-1]+1;
                
            }
            else dp[inv][j]=max(dp[inv][j-1],dp[up][j]);
        }

        if(inv==2)inv=1;
        else inv=2;
    }


    cout<<dp[1][b.size()]<<endl;
     for (int i = 1; i <= 3; ++i)
    {
        for (int j = 1; j <= b.size(); ++j)
        {
            cout<<dp[i][j]<<" ";
            /* code */
        }cout<<endl;
        /* code */
    }

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
