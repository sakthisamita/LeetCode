class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map <int,int> hashMap;
        vector<int> result;
        for (int i: nums) {
            hashMap[i]++;
            if (hashMap[i]==2) result.push_back(i);
        }
        return result;
    }
};