class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int arr[n+1];

        arr[0] = 0;
        arr[1] = nums[0];

        for(int i=2;i<=nums.size();i++){
            arr[i] = max(arr[i-1],arr[i-2]+nums[i-1]);
        }
        return arr[n];
    }
};