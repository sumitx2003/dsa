#include <iostream>
#include <vector>
using namespace std;

// Node structure
class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to build a binary tree
node* buildtree() {
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    node* root = new node(data);
    root->left = buildtree();
    root->right = buildtree();
    
    return root;
}

// Function to check if a node is a leaf
bool isLeaf(node* root) {
    return (root->left == NULL && root->right == NULL);
}

// Function to get left boundary (excluding leaves)
void getLeftBoundary(node* root, vector<int>& result) {
    node* cur = root->left;
    while (cur) {
        if (!isLeaf(cur)) result.push_back(cur->data);
        if (cur->left) cur = cur->left;
        else cur = cur->right;
    }
}

// Function to get all leaf nodes
void getLeafNodes(node* root, vector<int>& result) {
    if (!root) return;

    if (isLeaf(root)) {
        result.push_back(root->data);
        return;
    }
    
    getLeafNodes(root->left, result);
    getLeafNodes(root->right, result);
}

// Function to get right boundary (excluding leaves, in reverse)
void getRightBoundary(node* root, vector<int>& result) {
    node* cur = root->right;
    vector<int> temp;
    
    while (cur) {
        if (!isLeaf(cur)) temp.push_back(cur->data);
        if (cur->right) cur = cur->right;
        else cur = cur->left;
    }

    // Reverse order insertion
    for (int i = temp.size() - 1; i >= 0; i--) {
        result.push_back(temp[i]);
    }
}

// Function to perform boundary traversal
vector<int> boundaryTraversal(node* root) {
    vector<int> result;
    if (!root) return result;

    // Step 1: Add root node
    if (!isLeaf(root)) result.push_back(root->data);

    // Step 2: Get left boundary
    getLeftBoundary(root, result);

    // Step 3: Get leaf nodes
    getLeafNodes(root, result);

    // Step 4: Get right boundary
    getRightBoundary(root, result);

    return result;
}

// Main function
int main() {
    cout << "Enter the tree data: ";
    node* root = buildtree();

    cout << "Boundary Traversal: ";
    vector<int> result = boundaryTraversal(root);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
