from collections import deque
from typing import List

class Solution:
    def maxCandies(self, status: List[int], candies: List[int], 
                   keys: List[List[int]], containedBoxes: List[List[int]], 
                   initialBoxes: List[int]) -> int:
        
        n = len(status)
        queue = deque()
        seen = set()
        owned = set(initialBoxes)
        has_key = set()
        total_candies = 0

        for i in range(n):
            if status[i] == 1:
                has_key.add(i)
        
        while True:
            progress = False
            for box in list(owned):
                if box in seen or (box not in has_key and status[box] == 0):
                    continue
                
                seen.add(box)
                total_candies += candies[box]
                progress = True

                for k in keys[box]:
                    has_key.add(k)
                for b in containedBoxes[box]:
                    owned.add(b)
            if not progress:
                break

        return total_candies
