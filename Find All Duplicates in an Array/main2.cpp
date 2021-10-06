class Solution {
public:
    bool checkDuplicate(int val, vector<int>&ret) {
        for (int i = 0; i < ret.size(); i++) {
            if (val == ret[i]) return true;
        }
        return false;
    }
    
    void deleteElement(int val, vector<int>&ret) {
        int temp = 0;
        for (int i = val; i < ret.size(); i++) {
            temp = ret[i];
            ret[i] = ret[i+1];
            ret[i+1] = temp;
        }
    }
    vector<int> findDuplicates(vector<int>& nums) {
        int len = nums.size();
        vector<int> ret;
        for (int i = 0; i < len; i++) {
            for (int j = i+1; j < len; j++) {
                if (nums[i] == nums[j]) {
                    ret.push_back(nums[i]);
                }
            }
        }
        for (int i = 0; i < ret.size(); i++) {
            for (int j = i+1; j < ret.size(); j++) {
                if (ret[i] == ret[j]) {
                    deleteElement(j, ret);
                }
            }
        }
        return ret;
    }
};