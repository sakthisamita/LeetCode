class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int x=-1;
        for (int i=n-1; i>0;i--) {
            if (nums[i]>nums[i-1]) {
                x = i-1;
                break;
            }
        }
        if (x!=-1) {
            for (int i = n-1; i>x; i--) {
                if (nums[i]>nums[x]) {
                    int temp = nums[x];
                    nums[x] = nums[i];
                    nums[i] = temp;
                    break;
                }
            }
        }
        reverse (nums.begin()+x+1, nums.end());
    }
};