class Solution {
public:
    int mps(vector<vector<int>>& matrix, int row, int col, vector<vector<int>>& memo) {
        if (col < 0 || col >= matrix[0].size()) return INT_MAX;
        if (row == 0) return matrix[0][col];

        if (memo[row][col] != INT_MAX) return memo[row][col];

        int up = mps(matrix, row - 1, col, memo);
        int left = mps(matrix, row - 1, col - 1, memo);
        int right = mps(matrix, row - 1, col + 1, memo);

        return memo[row][col] = matrix[row][col] + min({up, left, right});
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> memo(m, vector<int>(n, INT_MAX));

        int minCost = INT_MAX;
        for (int col = 0; col < n; ++col) {
            minCost = min(minCost, mps(matrix, m - 1, col, memo));
        }

        return minCost;
    }
};
