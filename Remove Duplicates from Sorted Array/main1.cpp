class Solution {
public:
    void removeElement(int val, vector<int>&nums) {
        int len = nums.size(), temp = 0;
        for (int i = val; i < nums.size(); i++) {
            temp = i;
            nums[i] = nums[i+1];
            nums[i+1] = temp;
        }
        nums.pop_back();
    }
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            for (int j = i+1; j < len; j++) {
                if (nums[i] == nums[j]) {
                    removeElement(j, nums);
                }
            }
        }
        return nums.size();
    }
};