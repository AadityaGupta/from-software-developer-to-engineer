class Solution {
public:
    int hammingWeight(uint32_t n) {
        int hammingWeight = 0;
        while(n) {
            hammingWeight += n % 2;
            n /= 2;
        }

        return hammingWeight;
    }
};
