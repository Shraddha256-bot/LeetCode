class Solution:
    def robotWithString(self, s: str) -> str:
        from collections import Counter

        count = Counter(s)
        stack = []
        result = []
        min_char = 'a'

        for ch in s:
            stack.append(ch)
            count[ch] -= 1

            while min_char <= 'z' and count[min_char] == 0:
                min_char = chr(ord(min_char) + 1)

            while stack and stack[-1] <= min_char:
                result.append(stack.pop())

        return ''.join(result)
