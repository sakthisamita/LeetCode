class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int maxi = nums[0];
        for (int i=1; i<nums.size(); i++) {
            maxi = max (nums[i], maxi+nums[i]);
            sum = max(sum, maxi);
        }
        return sum;
    }
};