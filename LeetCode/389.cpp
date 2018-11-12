class Solution {
public:
    char findTheDifference(string s, string t) {
        char theDifference = s[0];

        for (int i = 1; i < s.length(); i++) {
            theDifference ^= s[i];
        }

        for (int i = 0; i < t.length(); i++) {
            theDifference ^= t[i];
        }

        return theDifference;
    }
};
