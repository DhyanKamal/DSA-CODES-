class Solution {
public:
    std::vector<std::vector<int>> rotateMatrix(int k, std::vector<std::vector<int>> mat) {
        int col = mat[0].size();
        int row = mat.size();
        int rotations = k % col; // Effective number of rotations

        if (rotations == 0) {
            return mat; // No rotation needed
        }

        std::vector<std::vector<int>> result(row, std::vector<int>(col));

        for (int r = 0; r < row; ++r) {
            for (int c = 0; c < col; ++c) {
                int new_c = (c - rotations + col) % col; // Calculate new position
                result[r][new_c] = mat[r][c];
            }
        }

        return result;
    }
};