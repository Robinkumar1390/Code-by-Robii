class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        st = -1
        end = -1

        for i in range(len(nums)):
            if nums[i] == target:
                if st == -1:
                    st = i  
                end = i  

        return [st, end]
