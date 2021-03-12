# 331. 验证二叉树的前序序列化

https://leetcode-cn.com/problems/verify-preorder-serialization-of-a-binary-tree/

最开始想的是直接建树，但是想了想，有点困难，同时递归次数有点多，遂放弃。

后来仔细观察了下性质，发现每一个可以达成的树都是#比数字少一个的，之后就想到了用一个变量存空位的个数，也就是第二种官方解法。

同时，这个题逻辑比较简单，也拿来给js练手了。