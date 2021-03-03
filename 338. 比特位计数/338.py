class Solution:
    def countBits(self, num: int) -> List[int]:
        bits = [0]*(num+1)
        highbit = 0
        for i in range(1,num+1):
            if(i & i-1 == 0):
                highbit = i
            bits[i] = bits[i-highbit]+1
        return bits