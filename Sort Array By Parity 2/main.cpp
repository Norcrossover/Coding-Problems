class Solution {
public:
    void removeElement(vector<int>& arr, int& elt) {
        int len = arr.size();
        for (int i = elt; i < len; i++) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
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