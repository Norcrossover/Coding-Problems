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
        vector<int> ret;
        for (int i = 0; i < len; i++) {
            for (int j = i+1; j < len; j++) {
                if (nums[i] == nums[j]) {
                    if (checkDuplicate(nums[j], ret) == false) {
                        ret.push_back(nums[j]);
                    }
                }
            }
        }
        return ret;
    }
};