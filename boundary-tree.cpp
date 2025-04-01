void leftboundary(node* root,vector<int>&result){
    node* cur=root->left;
    while(cur){
        if(cur->left || cur->right){
            result.push_back(cur->data)
            cur=(cur->left) ? cur->left : cur->right;
        }
    }
}    
    // function to print leaft nodes
    void leafnodes(node* root,vector<int>& result){
        if(!root){
            return;
        }
        leafnodes(root->left,result);
        if(!root->left && !root->right){
            result.push_back(root->data);
            leafnodes(root->right,result);
        }
    }
    
    void rightboundary(node* root,vector<int>& result){
        node* cur=root->right;
        vector<int>temp;
        while(cur){
            if(cur->left || cur->right){
                temp.push_back(cur->data);
                cur=(cur->right) ? cur->right:cur->left;
            }
            // add elements in the reverse order 
            result.insert(result.end(),temp.rbegin(),temp.rend());
        }
    }
    
    // function for boundary traversal
    
    vector<int>boundaryTraversal(node* root){
        vector<int>result;
        if(root==NULL){
            return result;
        }
        result.push_back(data);
        // get left boundary and ,leaf nodes and right boundary
        leftboundary(root,result);
        leafnodes(root,result);
        rightboundary(root,result);
        return result;
    }
    
