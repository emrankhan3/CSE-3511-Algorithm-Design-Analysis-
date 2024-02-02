class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>ans;
        for(int i=0; i<V; i++)ans.push_back(999999);
        ans[S]=0;
        priority_queue<pair<int,int>>pq;
        pq.push({0,S});
        
        while(!pq.empty()){
          
           int node = pq.top().second;
            int cost = pq.top().first;
            pq.pop();
            cost*=-1;
            if(ans[node]<cost)continue;
            ans[node]=cost;

            for(auto i:adj[node]){

                pq.push({-i[1]-cost,i[0]});
            }
            
        }
        return ans;
        
    }
};
