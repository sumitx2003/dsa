#include <iostream>
#include <queue>
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

// Function to perform Zig-Zag Traversal
vector<int> Zigzag(node* root) {
    vector<int> result;
    if (root == NULL) {
        return result;
    }

    queue<node*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int size = q.size();
        vector<int> ans(size);

        // Process current level
        for (int i = 0; i < size; i++) {
            node* temp = q.front();
            q.pop();
            
            int index = leftToRight ? i : (size - i - 1);
            ans[index] = temp->data;

            if (frontnode->left) {
                q.push(frontnode->left);
            }
            if (frontnode->right) {
                q.push(frontnode->right);
            }
        }

        // Change direction
        leftToRight = !leftToRight;

        for (auto i : ans) {
            result.push_back(i);
        }
    }
    return result;
}

// Main function
int main() {
    cout << "Enter the tree data: ";
    node* root = buildtree();

    cout << "Zig-Zag Traversal: ";
    vector<int> result = Zigzag(root);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

