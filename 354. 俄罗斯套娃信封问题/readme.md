# 354. 俄罗斯套娃信封问题

https://leetcode-cn.com/problems/russian-doll-envelopes/

最开始想的是贪心，代码是这么写的

```python
class Solution:
    def maxEnvelopes(self, envelopes: List[List[int]]) -> int:
        envelopes.sort()
        res = 0
        mh,mw = 0,0
        for h,w in envelopes:
            if h>mh and w>mw:
                res += 1
                mh = h
                mw = w
        return res
```

后来发现有点离谱，碰到前一个不能放下，这一个能放下的处理不了

比如以下这个用例
> [[2,100],[3,200],[4,300],[5,500],[5,400],[5,250],[6,370],[6,360],[7,380]]

然后想到了dp，递推公式是

dp[i] = 符合条件的的max(dp[:i])+1

然后代码是这样的

```python
class Solution:
    def maxEnvelopes(self, envelopes: List[List[int]]) -> int:
        n = len(envelopes)
        if(n==0):
            return 0
        envelopes.sort()
        dp = [1]*n
        for i in range(1,n):
            h,w = envelopes[i]
            for j in range(i-1,-1,-1):
                if(h>envelopes[j][0] and w>envelopes[j][1]):
                    dp[i] = dp[j]+1
                    break
        print(dp)
        return max(dp)
```

然后碰到了以下这个测试用例

> [[46,89],[50,53],[52,68],[72,45],[77,81]]

才发现如果我这么写，往前寻找到的第一个符合标准的信封不一定是最大的信封，没有完美匹配递推公式，最后才有了我现在的代码。
