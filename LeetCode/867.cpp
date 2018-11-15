class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int A_rowCount = A.size();
        int A_columnCount = A[0].size();

        vector<vector<int>> transposedMatrix(A_columnCount, vector<int>(A_rowCount));

        for (int i = 0; i < A_rowCount; i++) {
            for (int j = 0; j < A_columnCount; j++) {
                transposedMatrix[j][i] = A[i][j];
            }
        }

        return transposedMatrix;
    }
};
