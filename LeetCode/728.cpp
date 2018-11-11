class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> selfDividingNumbers;

        for (int i = left; i <= right; i++) {
            if (isSelfDividing(i)) {
                selfDividingNumbers.push_back(i);
            }
        }

        return selfDividingNumbers;
    }

    bool isSelfDividing(int n) {
        int temp = n;
        while (temp) {
            int digit = temp % 10;

            if (!digit || (n % digit)) {
                return false;
            }

            temp /= 10;
        }

        return true;
    }
};
