class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int len = nums.length();
        vector<int> arr;
        for (int i = 0; i < len; i++) {
            // if the number is even and count is even
            if (nums[i] % 2 == 0 && i % 2 == 0) {
                arr.push(nums[i]);
            }
        }
        return arr;
    }
};