class Solution:
    def maxEnvelopes(self, envelopes: List[List[int]]) -> int:
        n = len(envelopes)
        if(n==0):
            return 0
        envelopes.sort()
        dp = [1]*n
        for i in range(1,n):
            h,w = envelopes[i]
            maxi = 0
            for j in range(i):
                if(h>envelopes[j][0] and w>envelopes[j][1] and dp[j]>maxi):
                    maxi = dp[j]
            dp[i] = maxi+1
                    
        print(dp)
        return max(dp)
