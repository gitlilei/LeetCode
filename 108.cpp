/*
    题意：把一个有序的数组转化成平衡二叉树
    解法：递归
*/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *dfs(vector<int> &num,int left,int right){
        int index = left+(right-left)/2;
        TreeNode *node = new TreeNode(num[index]);
        if(left == right){
            return node;
        }
        if(left<=index-1)
        node->left = dfs(num,left,index-1);
        if(index+1<=right)
        node->right = dfs(num,index+1,right);
        return node;
    }
    TreeNode *sortedArrayToBST(vector<int> &num) {
        if(!num.size()) return NULL;
        return dfs(num,0,num.size()-1);
    }
};