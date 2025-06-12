from typing import List

class Solution:
    def maxAdjacentDistance(self, nums: List[int]) -> int:
        max_diff = 0
        n = len(nums)
        
        for i in range(n):
            # Circular difference: nums[i] and nums[(i + 1) % n]
            diff = abs(nums[i] - nums[(i + 1) % n])
            max_diff = max(max_diff, diff)
        
        return max_diff
