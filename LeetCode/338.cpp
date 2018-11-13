class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result;
        for (int i = 0; i <= num; i++) {
            int mask = 1;
            int oneBitCount = 0;
            while (mask <= i) {
                if (mask & i) {
                    oneBitCount++;
                }

                mask = mask << 1;
            }

            result.push_back(oneBitCount);
        }

        return result;
    }
};
