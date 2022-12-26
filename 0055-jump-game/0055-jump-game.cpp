class Solution {
public:
    bool canJump(vector<int>& nums) {
        int boundary = 0;
        for(int i =0;i<=boundary;i++){
            boundary = max(boundary,i+nums[i]);
            if(boundary >=nums.size()-1)
            return true;
        } 
        return false;
    }
};