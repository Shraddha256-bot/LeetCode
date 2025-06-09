class Solution:
    def findKthNumber(self, n: int, k: int) -> int:
        def count_prefix(prefix, n):
            count = 0
            next_prefix = prefix + 1
            while prefix <= n:
                count += min(n + 1, next_prefix) - prefix
                prefix *= 10
                next_prefix *= 10
            return count

        curr = 1
        k -= 1  # we've already considered '1'

        while k > 0:
            steps = count_prefix(curr, n)
            if steps <= k:
                curr += 1
                k -= steps
            else:
                curr *= 10
                k -= 1

        return curr
