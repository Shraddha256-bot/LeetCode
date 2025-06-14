class Solution:
    def minMaxDifference(self, num: int) -> int:
        num_str = str(num)
        
        # For maximum value: replace first non-9 digit with 9
        max_num = num
        for d in num_str:
            if d != '9':
                max_candidate = num_str.replace(d, '9')
                max_num = int(max_candidate)
                break
        
        # For minimum value: replace first digit (not 0) with 0
        min_num = num
        for d in num_str:
            if d != '0':
                min_candidate = num_str.replace(d, '0')
                min_num = int(min_candidate)
                break

        return max_num - min_num
