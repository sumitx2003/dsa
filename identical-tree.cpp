#include <iostream>
#include <queue>
using namespace std;

// Node class definition
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

// Function to calculate height of a tree
int height(node* root) {
    if (root == NULL) {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);
    
    return max(lh, rh) + 1;
}

// Function to check if two trees are identical
bool isIdentical(node* r1, node* r2) {
    if (r1 == NULL && r2 == NULL) {
        return true;
    }
    
    if (r1 == NULL || r2 == NULL) {
        return false;
    }
    
    bool left = isIdentical(r1->left, r2->left);
    bool right = isIdentical(r1->right, r2->right);
    bool value = (r1->data == r2->data);
    
    return (left && right && value);
}

// Main function
int main() {
    cout << "Enter the data for first tree: ";
    node* root1 = buildtree();
    
    cout << "Enter the data for second tree: ";
    node* root2 = buildtree();
    
    if (isIdentical(root1, root2)) {
        cout << "The trees are identical." << endl;
    } else {
        cout << "The trees are not identical." << endl;
    }

    return 0;
}
