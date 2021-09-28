class Solution {
public:
    void removeElement(vector<int>& arr, int& elt) {
        int len = arr.size();
        for (int i = elt; i < len; i++) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        arr.pop_back();
    }
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int len = nums.size();
        vector<int> arr;
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if (i % 2 == 0) {
                    if (nums[i] % 2 == 0) {
                        arr.push_back(nums[i]);
                        removeElement(nums, i);
                    }
                }
                else {
                    if (nums[i] % 2 == 1) {
                        arr.push_back(nums[i]);
                        removeElement(nums, i);
                    }   
                } 
            }
        }
        return arr;
    }
};