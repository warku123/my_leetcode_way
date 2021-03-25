class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        if(len(nums)==0):
            return 0
        elif(len(nums)==1):
            return nums[0]

        length = max(nums)+1
        all_count = [0]*length

        dp = [0]*length
        for i in nums:
            all_count[i] += 1

        dp[1] = all_count[1]
        for i in range(2,length):
            dp[i] = max(dp[i-1],dp[i-2]+all_count[i]*i)
        # print(dp)
        return dp[-1]
        