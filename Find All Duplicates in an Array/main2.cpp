class Solution {
public:
    bool checkDuplicate(int val, vector<int>&ret) {
        for (int i = 0; i < ret.size(); i++) {
            if (val == ret[i]) return true;
        }
        return false;
    }
    
    vector<int> findDuplicates(vector<int>& nums) {
        int len = nums.size();
        bool duplicate = false;
        vector<int> ret;
        for (int i = 0; i < len; i++) {
            duplicate = false;
            checkDuplicate(nums[i], ret);
        }
        return ret;
    }
};