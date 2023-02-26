class Solution
{
public:
    vector<vector<int>> memo;
    int minDistance(string word1, string word2)
    {
        int word1Length = word1.size();
        int word2Length = word2.size();
        if (word1Length == 0)
        {
            return word2Length;
        }
        if (word2Length == 0)
        {
            return word1Length;
        }
        vector<vector<int>> dp(word1.length() + 1, vector<int>(word2.length() + 1, 0));
        for (int i = 1; i <= word1Length; i++)
        {
            dp[i][0] = i;
        }
        for (int i = 1; i <= word2Length; i++)
        {
            dp[0][i] = i;
        }
        for (int i = 1; i <= word1Length; i++)
        {
            for (int j = 1; j <= word2Length; j++)
            {
                if (word2[j - 1] == word1[i - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = min(dp[i - 1][j],min(dp[i][j - 1],dp[i - 1][j - 1])) +1;
                }
            }
        }

        return dp[word1Length][word2Length];
    }
};
