class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> theMap;

        int majorityElement = 0;
        int majorityElementCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            map<int, int>::const_iterator it = theMap.find(nums[i]);

            int elementCount = 0;

            if (it != theMap.end()) {
                elementCount = it->second + 1;
                theMap[nums[i]] = elementCount;
            } else {
                theMap[nums[i]] = 1;
                elementCount = 1;
            }

            if (elementCount > majorityElementCount) {
                majorityElement = nums[i];
                majorityElementCount = elementCount;
            }
        }

        return majorityElement;
    }
};
