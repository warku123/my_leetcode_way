# 338. 比特位计数

https://leetcode-cn.com/problems/counting-bits/

一道动态规划题，没有想到解法。

后来看了题解才明白，是一套递归公式会变的动态规划题。

递归公式是

bit[i] = bits[i-highbits]+1

其中这个highbits是数字中的最高位。

以后还是要思路更灵活一些