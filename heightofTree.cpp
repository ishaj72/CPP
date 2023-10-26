class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right ==NULL)
            return 1;
        int maxDepthLeft = maxDepth(root->left);
        int maxDepthRight = maxDepth(root->right);
        return max(maxDepthLeft,maxDepthRight)+1;
    }
};
