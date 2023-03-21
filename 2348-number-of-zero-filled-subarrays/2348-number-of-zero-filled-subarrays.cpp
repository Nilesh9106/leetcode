class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long c=0;
        long long ans=0;
        for(int a:nums){
            if(a == 0 ){
                c++;
            }else{
                ans += (c*(c+1)/2);
                
                c=0;
            }
        }
        if(c!=0){
            ans += (c*(c+1)/2);
        }
        return ans;
    }
};