#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

// Helper function to find the path from root to the given node
bool findPath(TreeNode* root, vector<int>& path, int target) {
    if (root == nullptr)
        return false;

    // Add current node to path
    path.push_back(root->val);

    // If the target node is found, return true
    if (root->val == target)
        return true;

    // Recursively check left and right subtrees
    if ((root->left && findPath(root->left, path, target)) ||
        (root->right && findPath(root->right, path, target))) {
        return true;
    }

    // If not found, remove the node from path (backtrack)
    path.pop_back();
    return false;
}

// Function to print root to node path
void rootToNodePath(TreeNode* root, int target) {
    vector<int> path;
    if (findPath(root, path, target)) {
        cout << "Path from root to node " << target << ": ";
        for (int val : path) {
            cout << val << " ";
        }
        cout << endl;
    } else {
        cout << "Node not found in the tree" << endl;
    }
}

// Driver code
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    int target = 5;
    rootToNodePath(root, target);

    return 0;
}
