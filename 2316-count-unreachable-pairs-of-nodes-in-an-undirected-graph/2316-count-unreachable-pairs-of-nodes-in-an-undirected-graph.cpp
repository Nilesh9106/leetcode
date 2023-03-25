class Solution {
public:
    void dfs(vector<int>adj[],int src,vector<bool>&vis,int &counter){
        if(vis[src]) return;
        vis[src]=true;
        counter++;
        for(auto ele:adj[src]){
            if(!vis[ele]){
                dfs(adj,ele,vis,counter);
            }
        }

    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(auto ele:edges){
            adj[ele[0]].push_back(ele[1]);
            adj[ele[1]].push_back(ele[0]);
        }
        long long res = 0;
        vector<bool>vis(n,false);
        long long ans=0 , pre=0;
        for(int i = 0;i<n;i++){
            if(!vis[i]){
                int counter = 0;
                dfs(adj,i,vis,counter);
                // cout<<pre<<" "<<counter<<" "<<ans<<" "<<(counter*pre)<<endl;
                ans+=(counter*pre);
                pre+=counter;
                
            }
        }
        return ans;
    }
};


