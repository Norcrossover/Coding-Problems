class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        '''
        list = [2 3 4 5], target = 7
        for length of the list starting at the first:
            for the length of the list:
                if the current element plus  the other == target:
                    append both elements and return the list
        
        '''
        lengthNums = len(nums)
        for i in range(0, lengthNums):
            for j in range((i+1), lengthNums):
                if ((nums[i]+nums[j]) == target):
                    return [i, j]