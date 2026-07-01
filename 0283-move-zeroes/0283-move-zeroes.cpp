class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        for (int i=0; i<n; i++) {
            if (nums[i]==0) {
                x++;
            }
            else {
                nums[i-x] = nums[i];
            }
        }
        for (int i=n-x; i<n; i++) {
            nums[i] = 0;
        }
    }
};