class Solution {
public:
    bool find(vector<vector<int>> adj,int n,int src,int dest){
        queue<int> q;
        vector<bool> vis(n);
        q.push(src);
        vis[src]=true;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(int i:adj[front]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]=true;
                    if(i == dest){
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination){
            return true;
        }
        vector<vector<int>> adj(n);
        
        for(auto a: edges){
            adj[a[0]].push_back(a[1]);
            adj[a[1]].push_back(a[0]);
        }
        
        return find(adj,n,source,destination);
    }
};