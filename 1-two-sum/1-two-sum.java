class Solution {
    public int[] twoSum(int[] nums, int target) {
        int [] ret = null;
        for (int i = 0; i < nums.length; ++i)
        {
            for (int j = i+1; j < nums.length; j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    ret = new int[2];
                    ret[0] = i;
                    ret[1] = j;
                    return ret;
                }
            }
        }
        return ret;
    }
}