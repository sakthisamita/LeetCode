class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> result;
        map<int, int> sumWeight;
        int x = items1.size();
        for (int i=0; i<x; i++) {
            sumWeight[items1[i][0]] = items1[i][1]; 
        } 
        x = items2.size();
        for (int i=0; i<x; i++) {
            sumWeight[items2[i][0]] += items2[i][1]; 
        } 
        for (auto & i: sumWeight) 
            result.push_back ({i.first, i.second});
        return result;
    }
};