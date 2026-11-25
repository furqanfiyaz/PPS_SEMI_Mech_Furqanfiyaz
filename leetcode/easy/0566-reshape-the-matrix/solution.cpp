class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        // Reshape is only possible if the element counts match
        if (m * n != r * c) {
            return mat;
        }

        vector<vector<int>> result(r, vector<int>(c));

        for (int i = 0; i < m * n; i++) {
            // Map the flat index i to the old and new positions
            result[i / c][i % c] = mat[i / n][i % n];
        }

        return result;
    }
};