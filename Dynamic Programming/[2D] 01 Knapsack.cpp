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



    int n,w;
    int nap[5][100002];
 
void kick(int CASE)
{
 
    cin >> n >> w;
 
    int profit[n+1]={0};
    int weights[n+1]={0};
 
    for (int i = 1; i <= n; ++i)
    {
        cin >>  weights[i];
        /* code */
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >>  profit[i];
        /* code */
    }
    int now,bef;
    now=1,bef=0;
    int mx=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=w; j++)
        {
            nap[now][j]=max(nap[bef][j],nap[now][j]);
            if(j>=weights[i])
            {
                int m = max(0ll,j-weights[i]);
                // nap[i][j] = max(nap[i][j],profit[i]);
 
                nap[now][j]=max(nap[now][j],profit[i]+nap[bef][m]);
                mx=max(nap[bef][j],mx);
                mx=max(nap[now][j],mx);
            }
        }
        swap(now,bef);
    }
 
    // for (int i = 0; i <=w; ++i)
    // {cout<<i<<" ";
    //     /* code */
    // }cout<<endl;
    // for(int i=0; i<=n; i++)
    // {
    //     for(int j=0; j<=w; j++)
    //     {
    //         cout<<nap[i][j]<<" ";
    //     }cout<<endl;
    // }
    cout<<mx<<endl;
 
}
 


    int n,w;
    int nap[5][100002];
 
void kick(int CASE)
{
 
    cin >> n >> w;
 
    int profit[n+1]={0};
    int weights[n+1]={0};
 
    for (int i = 1; i <= n; ++i)
    {
        cin >>  weights[i];
        /* code */
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >>  profit[i];
        /* code */
    }
    int now,bef;
    now=1,bef=0;
    int mx=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=w; j++)
        {
            nap[now][j]=max(nap[bef][j],nap[now][j]);
            if(j>=weights[i])
            {
                int m = max(0ll,j-weights[i]);
                // nap[i][j] = max(nap[i][j],profit[i]);
 
                nap[now][j]=max(nap[now][j],profit[i]+nap[bef][m]);
                mx=max(nap[bef][j],mx);
                mx=max(nap[now][j],mx);
            }
        }
        swap(now,bef);
    }

    // for (int i = 0; i <=w; ++i)
    // {cout<<i<<" ";
    //     /* code */
    // }cout<<endl;
    // for(int i=0; i<=n; i++)
    // {
    //     for(int j=0; j<=w; j++)
    //     {
    //         cout<<nap[i][j]<<" ";
    //     }cout<<endl;
    // }
    cout<<nap[n][w]<<endl;

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
