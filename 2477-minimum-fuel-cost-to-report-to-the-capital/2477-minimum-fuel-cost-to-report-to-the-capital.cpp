class Solution {
public:
    long long fuel;

    long long dfs(int node, int parent, vector<vector<int>>& adj, int& seats) {
        int r = 1;
        for (auto& child : adj[node]) {
            if (child != parent) {
                r += dfs(child, node, adj, seats);
            }
        }

        if (node != 0) {
            fuel += ceil((double)r / seats);
        }
        return r;
    }

    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n = roads.size() + 1;
        vector<vector<int>> adj(n);
        for (auto& road : roads) {
            adj[road[0]].push_back(road[1]);
            adj[road[1]].push_back(road[0]);
        }
        dfs(0, -1, adj, seats);
        return fuel;
    }
};