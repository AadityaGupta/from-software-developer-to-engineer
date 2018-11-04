class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double maxAverageValue;

        for(int i = 0; i <= nums.size() - k; i++) {
            double average = 0;

            for(int j = i; j < i + k; j++) {
                average += nums[j];
            }

            average /= k;

            if (i == 0) {
                maxAverageValue = average;
                continue;
            }

            if (average > maxAverageValue) {
                maxAverageValue = average;
            }
        }

        return maxAverageValue;
    }
};
