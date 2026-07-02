class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numSet (nums.begin(), nums.end());
        int x = 0;
        int temp = 1;
        int prev = *numSet.begin();
        for (int i: numSet) {
            if (prev+1==i) {
                temp++;
                x = max (x, temp);
            }
            else {
                temp = 1;
            }
            x = max (x, temp);
            prev = i;
            
        }
        return x;
    }
};