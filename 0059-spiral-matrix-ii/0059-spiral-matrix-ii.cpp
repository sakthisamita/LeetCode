class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix (n, vector<int>(n));
        int left = 0, right = n-1;
        int top = 0, bottom = n-1;
        int y = 1;
        while (left<=right && top<=bottom) {
            for (int i=left; i<=right; i++) 
                matrix[top][i] = y++;
            top++;
            for (int i=top; i<=bottom; i++) 
                matrix[i][right] = y++;
            right--;
            if (top<=bottom) {
                for (int i=right; i>=left; i--) 
                    matrix[bottom][i] = y++;
            }
            bottom--;
            if (left<=right) {
                for (int i=bottom; i>=top; i--)
                    matrix[i][left] = y++;
            }
            left++;
        }
            return matrix;
    }
};
