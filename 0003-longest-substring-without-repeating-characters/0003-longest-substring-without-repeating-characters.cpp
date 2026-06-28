class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int subSize=0;
        int count, j;
        unordered_map <char, int> hashMap;
        for (int i=0; i<s.size(); i++) {
            count = 0;
            for (j=i; j<s.size(); j++) {
                hashMap[s[j]]++;
                if (hashMap[s[j]]!=1) {
                    break;
                }
                count++;
            }
            subSize = max(subSize,count);
            hashMap.clear();
        }
        return subSize;
    }
};