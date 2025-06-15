class Solution:
    def maxDiff(self, num: int) -> int:
        s = list(str(num))
        
        # Maximize: Replace first digit that's not '9' with '9'
        for ch in s:
            if ch != '9':
                max_digit = ch
                break
        else:
            max_digit = None
        
        if max_digit:
            a = ''.join('9' if c == max_digit else c for c in s)
        else:
            a = ''.join(s)
        
        # Minimize:
        if s[0] != '1':
            min_digit = s[0]
            b = ''.join('1' if c == min_digit else c for c in s)
        else:
            min_digit = None
            for ch in s[1:]:
                if ch != '0' and ch != '1':
                    min_digit = ch
                    break
            if min_digit:
                b = s[0] + ''.join('0' if c == min_digit else c for c in s[1:])
            else:
                b = ''.join(s)
        
        return int(a) - int(b)
