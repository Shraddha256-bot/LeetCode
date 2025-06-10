class Solution:
    def maxDifference(self, s: str) -> int:
        # Step 1: Count character frequencies
        freq = {}
        for char in s:
            if char in freq:
                freq[char] += 1
            else:
                freq[char] = 1

        # Step 2: Separate odd and even frequencies
        odd_freqs = []
        even_freqs = []

        for count in freq.values():
            if count % 2 == 0:
                even_freqs.append(count)
            else:
                odd_freqs.append(count)

        # Step 3: Return the maximum difference between an odd and an even frequency
        if not odd_freqs or not even_freqs:
            return 0  # as per constraints this shouldn't happen, but safe guard

        return max(odd_freqs) - min(even_freqs)
