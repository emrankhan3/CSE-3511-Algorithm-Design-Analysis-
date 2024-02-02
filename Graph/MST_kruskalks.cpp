class dsu{     // class dsu, dsu mydsu(n)
      vector<ll>p,sz,mx,mn;    // p = parent, sz = size of the tree, mx = max node, mn = min node
      int n;
public:
      dsu(int n){
            for(int i=0; i<=n; i++){
                  sz.pb(1);
                  mx.pb(i);
                  mn.pb(i);
                  p.pb(i);
            }
      }
      int get(int x){          // returns the parent of the node
            if(p[x]==x)return x;
            return p[x]=get(p[x]);
      }
      int findMin(int x){     // returns the min node of the tree
            return mn[get(x)];
      }

      int findMax(int x){         // return the max node of the tree
            return mx[get(x)];
      }
      int ts(int x){               // returns the size of the tree
            return sz[get(x)];
      }
      bool _union(int a,int b){     // unites two node
            a = get(a);
            b = get(b);
            if(a==b)return false;
            if(sz[a]<sz[b])swap(a,b);
            p[b]=a;
            sz[a]+=sz[b];

            mn[a]=mn[b] = min(mn[a],mn[b]);
            mx[a]=mx[b] = max(mx[a],mx[b]);
            return true;
      }

};

class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        dsu d(V);
        
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0; i<V; i++){
            for(auto it:adj[i]){
                pq.push({-it[1],{it[0],i}});
            }
        }
        int ans=0;
        while(!pq.empty()){
            int cost = -pq.top().first;
            int a,b;
            a=pq.top().second.first;
            b=pq.top().second.second;
            pq.pop();
            if( d.get(a)!=d.get(b) ){
                d._union(a,b);
                ans+=cost;
            }
        }
        
        return ans;
    }
};
