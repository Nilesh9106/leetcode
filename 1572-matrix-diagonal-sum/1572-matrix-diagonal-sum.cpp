class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int ans=0;
        int i=0,j=0;
        while(i<n and j<n){
            ans+=mat[i][j];
            i++;
            j++;
        }
        i=0,j=n-1;
        while(i<n and j>=0){
            ans+= mat[i][j];
            i++;
            j--;
        }
        
        if(n%2 == 1){
            int mid =n/2 ;
            // cout<<ans;
            ans-= mat[mid][mid];
        }
        
        return ans;
    }
};