#include <iostream>
#include <queue>
using namespace std;

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

node* buildtree(node* root) {
    int data;
    cout << "Enter the data: ";
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new node(data);
    root->left = buildtree(root->left);
    root->right = buildtree(root->right);

    return root;  
}

// Function to calculate the height of a tree
int height(node* root) {
    if (root == NULL) return -1;  // Base case: Empty tree has height -1
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int main() {
    node* root = NULL;
    // Example input: 1 2 4 -1 -1 5 -1 -1 3 -1 -1
    root = buildtree(root);

    cout << "\nHeight of the tree: " << height(root) << endl;
    return 0;
}
