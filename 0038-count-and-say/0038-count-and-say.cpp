class Solution {
public:
    string countAndSay(int n) {
        vector<string> dp(n+1);
        dp[1] = "1";
        vector<string> conv = {"","1","2","3","4","5","6","7","8","9"};
        for(int i=2;i<=n;i++){
            int cnt = 1;
            for(int j=1;j<dp[i-1].length();j++){
                if(dp[i-1][j]==dp[i-1][j-1]){
                    cnt++;
                }
                else{
                    dp[i] += conv[cnt];
                    dp[i] += dp[i-1][j-1];
                    cnt = 1;
                }
            }
            dp[i] += conv[cnt];
            dp[i] += dp[i-1].back();
        }
        return dp.back();
    }
};