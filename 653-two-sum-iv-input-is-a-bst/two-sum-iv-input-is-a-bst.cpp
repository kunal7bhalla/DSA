/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void preorder(TreeNode* root,vector<int>& pre){

        if(root==NULL){
            return;
        }

        pre.push_back(root->val);
        preorder(root->left,pre);
        preorder(root->right,pre);
    }
    bool findTarget(TreeNode* root, int k) {

        vector<int> pre;

        preorder(root,pre);
        unordered_map<int,int> mp;

        for(int i=0;i<pre.size();i++){
            int current=k-pre[i];

            if(mp.find(current)!=mp.end()){
                return true;
            }

            mp[pre[i]]=i;
        }

        return false;


        
    }
};