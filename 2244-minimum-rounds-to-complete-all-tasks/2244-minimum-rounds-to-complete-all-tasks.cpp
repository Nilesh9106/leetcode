class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        unordered_map<int,int> m;
        for(int i:tasks){
            m[i]++;
        }
        int ans =0 ;
        for (auto i:m ){
            if(i.second % 3 == 0){
                ans+= i.second / 3;
            }else if(i.second % 3 == 2){
                ans+= i.second / 3 + 1;
            }else{
                if(i.second == 1){
                    return -1;
                }
                ans+= i.second / 3 + 1;
            }
        }
        return ans;
    }
};