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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        int ans=0;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            long long min=q.front().second;  // to make the id starting from 0
            long long first,last;
            for(int i=0;i<size;i++){
                long long cur_id=q.front().second-min;
                TreeNode* node=q.front().first;
                q.pop();
                if(i==0){
                    first=cur_id;
                }
                if(i==size-1){
                    last=cur_id;
                }
                if(node->left){
                    q.push({node->left,cur_id*2+1});
                }
                if(node->right){
                    q.push({node->right,cur_id*2+2});
                }
            }
            ans=max(ans,(int)(last-first+1));
        }
        return  ans;
    }
};
