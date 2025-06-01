

class Solution:
    def distributeCandies(self, n: int, limit: int) -> int:
        def count_ways(n):
            # Number of non-negative integer solutions to a + b + c = n
            return comb(n + 2, 2) if n >= 0 else 0
        
        total = count_ways(n)

        # Subtract the cases where one child gets more than limit
        for i in range(3):
            total -= count_ways(n - (limit + 1))

        # Add back cases where two children get more than limit
        for i in range(3):
            total += count_ways(n - 2 * (limit + 1))

        # Subtract case where all three children get more than limit
        total -= count_ways(n - 3 * (limit + 1))

        return total
