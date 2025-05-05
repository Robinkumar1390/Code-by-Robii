class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        curr =0
        maxs = nums[0]
        for i in range(len(nums)):
            if curr<0:
                curr =0
            curr+= nums[i]
            maxs = max(maxs,curr)
        return maxs