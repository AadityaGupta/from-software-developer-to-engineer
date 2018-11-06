class Solution {
public:
    int titleToNumber(string s) {
        int columnNumber = 0;
        int powerOf26 = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            columnNumber += (s[i] - 'A' + 1) * pow(26, powerOf26);
            powerOf26++;
        }

        return columnNumber;
    }
};
