class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int len = nums.size();
        vector<int> arr;
        // loop through arr
        for (int i = 0; i < len; i++) {
            // loop through nums
            for (int j = 0; j < len; j++) {
                // if sorted list count is even
                if (i % 2 == 0 && nums[i] % 2 == 0) {
                    arr.push_back(nums[i]);
                    nums[i].pop();
                }
                // else sorted list count is odd
                else if (i % 2 == 1 && nums[i] % 2 == 1) {
                    arr.push_back(nums[i]);
                    nums[i].pop();
                }
            }
        }
        return arr;
    }
};