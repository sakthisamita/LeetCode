class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> matrix2 = matrix;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                matrix2[i][j] = matrix[j][i]; 
            }
            reverse(matrix2[i].begin(), matrix2[i].end());
        }
        matrix = matrix2;
    }
};