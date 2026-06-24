class Solution {
public:
    int countBitsInNumber (int x) {
        int count=0;
        while (x>0) {
            x = x&(x-1);
            count++;
        }
        return count;
    } 
    vector<int> countBits(int n) {
        vector<int> arr;
        for (int i=0; i<=n; i++) {
            arr.push_back(countBitsInNumber(i));
        }
        return arr;
    }
};