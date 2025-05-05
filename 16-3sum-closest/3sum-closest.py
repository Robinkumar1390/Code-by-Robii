class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        closest = nums[0] + nums[1] + nums[2]
        n = len(nums)
        for i in range(n - 2):
            if (i>0 and nums[i] == nums[i-1]):
                continue
            lo = i+1
            hg = n-1
            while(lo<hg):
                curr = nums[i] + nums[lo] + nums[hg]
                if (abs(curr - target) < abs(closest - target)):
                    closest = curr
                if curr == target:
                    return closest
                elif curr<target:
                    lo+=1
                else:
                    hg-=1
        return closest    