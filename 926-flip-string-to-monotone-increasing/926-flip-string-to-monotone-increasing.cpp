class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        int ans = 0, count_one = 0;
        for (auto i : s)
        { 
            if (i == '1')
                count_one++;
            else{
                ans++;
                ans = min(ans, count_one);
            }
        }
        return ans;
    }
};