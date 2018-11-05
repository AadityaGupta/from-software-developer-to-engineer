class Solution {
public:
    int findNthDigit(int n) {
        long long counter = 0;
        string theNumberString = "";
        long long currentWeight = 1;
        long long nextWeightChange = 10;

        for (int i = 1; i <= n; i++) {
            if (i >= nextWeightChange) {
                currentWeight++;
                nextWeightChange *= 10;
            }

            if (counter + currentWeight >= n) {
                theNumberString = to_string(i);
                break;
            }

            counter += currentWeight;
        }

        return theNumberString[n - counter - 1] - '0';
    }
};
