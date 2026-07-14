class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<int> result;
        unordered_map<int, int> hashMap;
        for (int i: s1) hashMap[i]++;
        for (int i: s2) hashMap[i]++;
        for (int i: s1) {
            if (hashMap[i]>1) {
                result.push_back(i);
            }
        }
        return result;
    }
};