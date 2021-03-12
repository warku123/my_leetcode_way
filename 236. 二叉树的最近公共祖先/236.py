# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        res = []
        def find(tmp,tree):
            if(tree==None):
                return
            if(tree==p or tree==q):
                res.append(tmp+[tree])
            find(tmp+[tree],tree.left)
            find(tmp+[tree],tree.right)
        find([],root)
        
        i = 0
        n = min(len(res[0]),len(res[1]))
        # print([i.val for i in res[0]])
        # print([i.val for i in res[1]])
        while(i<n and res[0][i].val==res[1][i].val):
            i+=1
        return res[0][i-1]