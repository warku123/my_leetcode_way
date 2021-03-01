/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/

//递归
class Solution {
public:
    Node* pre,*head;

    Node* treeToDoublyList(Node* root) {
        if(!root) return NULL;
        dfs(root);

        head->left=pre;//首
        pre->right=head;//尾 相接

        return head;
    }
    void dfs(Node* root){
        if(!root) return ;

        dfs(root->left);

        if(!pre) head=root;//最小的节点的情况
        else pre->right=root;
        root->left=pre;
        pre=root;

        dfs(root->right);
    }
};

//迭代
class Solution {
public:
    Node* treeToDoublyList(Node* root) {
        if(!root) return NULL;
        stack<Node *> s;
        Node *pre=NULL,*now,*head;
        Node *p = root;
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
                s.pop();
                if(!pre)
                    head = p;
                else
                {
                    pre->right=p;
                    p->left=pre;
                }
                pre=p;
                //proceeding
                p = p->right;
            }
        }
        pre->right = head;
        head->left = pre;
        return head;
    }

};
