
class Solution:
    def calculateScore(self, instructions: List[str], values: List[int]) -> int:
       
        i = 0
        s = 0
        visited = set()
        while 0 <=i <(len(instructions)):
            if i in visited:
                break
            visited.add(i)
            if instructions[i] == "add":
                s = s + values[i]
                i = i+1
            elif instructions[i] == "jump":
                if values[i] == 0:
                    break
                i= i+values[i]
            else:
                break
        return s
                
            
        
        