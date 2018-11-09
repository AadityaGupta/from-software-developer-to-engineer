// Approach 2 (Still 4 ms =( & faster than 51.04%)
// At least code is shorter and cleaner
class Solution {
public:
    int hammingDistance(int x, int y) {
        int hammingDistance = 0;
        do {
            char xi = x ? (x % 2) + '0' : '0';
            x /= 2;

            char yi = y ? (y % 2) + '0' : '0';
            y /= 2;

            hammingDistance += (xi != yi) ? 1 : 0;
        } while (x || y);

        return hammingDistance;
    }
};

// Approach 1 (4 ms, faster than 51.04%)
class Solution {
public:
    int hammingDistance(int x, int y) {
        string stringX = "";
        string stringY = "";

        if (!x)
            stringX = "0";

        if (!y)
            stringY = "0";

        while(x) {
            stringX += to_string(x % 2);
            x /= 2;
        }

        while(y) {
            stringY += to_string(y % 2);
            y /= 2;
        }

        int hammingDistance = 0;
        int maximumLength = max(stringX.length(), stringY.length());
        for(int i = 0; i < maximumLength; i++) {
            char xi = (i >= stringX.length()) ? '0' : stringX[i];
            char yi = (i >= stringY.length()) ? '0' : stringY[i];

            if (xi != yi)
                hammingDistance++;
        }

        return hammingDistance;
    }
};
