class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        def backtrack(nums,tmp):
            res.append(tmp)
            for i in range(len(nums)):
                if(i-1>=0 and nums[i-1]==nums[i]):
                    continue
                backtrack(nums[i+1:],tmp+[nums[i]])
        backtrack(nums,[])
        return res

# 一个简单的回溯，之前写的很多，现在都写不出来了