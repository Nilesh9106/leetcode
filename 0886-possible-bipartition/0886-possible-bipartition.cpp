class Solution {
public:
    bool dfs(int node, int nodeColor, vector<vector<int>>& adj, vector<int>& color) {
        color[node] = nodeColor;
        
        for (auto& i : adj[node]) {
            if (color[i] == color[node]) return false;
            if (color[i] == -1) {
                if (!dfs(i, 1 - color[node], adj, color)) return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int> > adj(n+1);
        
        for(auto i : dislikes){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        vector<int> color(n + 1, -1);
        for (int i = 1; i <= n; i++) {
            if (color[i] == -1) {
                
                 if (!dfs(i, 0, adj, color))
                   
                    return false;
            }
        }
        return true;
    }
};