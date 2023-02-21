class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=0;
        for(int i=0;i<nums.size();i++){
            n=n^nums[i];
        }
        return n;
    }
};