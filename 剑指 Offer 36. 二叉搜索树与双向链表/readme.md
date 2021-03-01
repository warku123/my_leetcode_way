# 剑指 Offer 36. 二叉搜索树与双向链表

https://leetcode-cn.com/problems/er-cha-sou-suo-shu-yu-shuang-xiang-lian-biao-lcof/

中序遍历的复习题

```C++
void traverse(Node * root)
{
    traverse(root->left);
    //proceeding
    traverse(root->right);
}
```

```C++
void inorderTraversal(TreeNode *root)
{
    stack<TreeNode *> s;
    TreeNode *p = root;
    while(p != NULL || !s.empty())
    {
        while(p != NULL)
        {
            s.push(p);
            p = p->left;
        }
        if(!s.empty())
        {
            p = s.top();
            //proceeding
            s.pop();
            p = p->right;
        }
    }
}
```