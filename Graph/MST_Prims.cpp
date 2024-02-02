int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int,pair<int,int>>>pq;
        bool vis[10050]={0};
        for(auto edge:adj[0]){
            pq.push({-edge[1],{edge[0],0}});
        }
        vis[0]=1;
        int ans=0;
        vector<int>v[10040];
        while(pq.size()>0){
            int node = pq.top().second.first;
            int node2=pq.top().second.second;
            int wt = pq.top().first;
            pq.pop();
            if(vis[node])continue;
            v[node].push_back(node2);
            v[node2].push_back(node);
            vis[node]=1;
            ans+=(-wt);
            for(auto it: adj[node]){
                if(vis[it[0]])continue;
                pq.push({-it[1],{it[0],node}});
            }
            
        }
        return ans;
    }
