class Solution {
public:
    int b_search(vector<int>nums,int target,int l,int h){
        if(l>h){
            return -1;
        }else{
            int mid = (l+h)/2;
            if(target == nums[mid]){
                return mid;
            }else if(target > nums[mid]){
                return b_search(nums,target,mid+1,h);
            }else{
                return b_search(nums,target,l,mid-1);
            }
        }
        
        
    }
    int search(vector<int>& nums, int target) {
        return b_search(nums,target,0,nums.size()-1);
    }
};