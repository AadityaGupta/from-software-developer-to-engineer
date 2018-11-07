class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int typeOfArray = 0;
        // 0 - unknown;
        // 1 - increasing;
        // 2 - decreasing;

        for (int i = 1; i < A.size(); i++) {
            if (A[i] > A[i - 1] && typeOfArray == 2) {
                return false;
            } else if (A[i] < A[i - 1] && typeOfArray == 1) {
                return false;
            }

            if (typeOfArray || A[i] == A[i - 1]) {
                continue;
            }

            if (A[i] > A[i - 1]) {
                typeOfArray = 1;
            } else {
                typeOfArray = 2;
            }
        }

        return true;
    }
};
