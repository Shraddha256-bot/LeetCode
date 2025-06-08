class Solution:
    def lexicalOrder(self, n:int) -> List[int]:
        

        a = [str(z) for z in range(1, n+1)]
        l = sorted(a)

        return [int(x) for x in l]