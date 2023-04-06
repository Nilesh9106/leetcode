class Solution {
public:
    int n , m;
    
    void dfs(vector<vector<int>>& a , int i , int j){
        if(i < 0 || j < 0 || j >= m || i >= n || a[i][j] != 0) return;
        a[i][j] = INT_MIN;
        dfs(a , i - 1 , j);
        dfs(a , i + 1 , j);
        dfs(a , i , j - 1);
        dfs(a , i , j + 1);
    }
    
    int closedIsland(vector<vector<int>>& a) {
        n = a.size();
        m = a[0].size();
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if((j == 0 || i == 0 || j == m-1 || i == n-1) && a[i][j] == 0){
                    dfs(a,i,j);
                }
            }
        }
                    
        int count = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(a[i][j] == 0){
                    count++;
                    dfs(a,i,j);
                }
            }
        }
        return count;
    }
};
