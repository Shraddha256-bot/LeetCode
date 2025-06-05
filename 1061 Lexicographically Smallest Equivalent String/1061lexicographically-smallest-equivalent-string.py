class Solution:
    def smallestEquivalentString(self, s1: str, s2: str, baseStr: str) -> str:
        parent = list(range(26))  # Each character a-z is its own parent initially

        def find(x):
            if parent[x] != x:
                parent[x] = find(parent[x])  # Path compression
            return parent[x]

        def union(x, y):
            px, py = find(x), find(y)
            if px != py:
                # Always attach the larger to the smaller (lexicographically)
                if px < py:
                    parent[py] = px
                else:
                    parent[px] = py

        for a, b in zip(s1, s2):
            union(ord(a) - ord('a'), ord(b) - ord('a'))

        result = []
        for ch in baseStr:
            smallest_char_index = find(ord(ch) - ord('a'))
            result.append(chr(smallest_char_index + ord('a')))
        
        return ''.join(result)
