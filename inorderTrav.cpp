oid inTrav(vector<int>&ans , TreeNode* root){
    if(root!=NULL){
        inTrav(ans,root->left);
        int data = root ->val;
        ans.push_back(data);
        inTrav(ans,root->right);
    }
}

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inTrav(ans,root);
        return ans;
    }
};
