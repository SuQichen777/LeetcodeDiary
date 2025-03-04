import sys
from typing import List

class Solution:
    def moveZeroes(self, nums) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if (len(nums) > 1):
            left = 0
            right = 1
            while right < len(nums):
                if nums[left] == 0 and nums[right] != 0:
                    nums[left], nums[right] = nums[right], nums[left]
                    left += 1
                    right += 1
                elif nums[left] == 0:
                    right += 1
                else:
                    left += 1
                    right += 1
ans = Solution
ls = [0,1,0,3,12]
ans.moveZeroes(ans,ls)
print(ls)
        