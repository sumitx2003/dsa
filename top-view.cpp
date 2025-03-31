#include <iostream>
#include <queue>
#include <vector>
#include <map>
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

// Function to get the top view of a binary tree
vector<int> topView(node* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }
    
    map<int, int> node_map; // Stores first node at each horizontal distance
    queue<pair<node*, int>> q;
    q.push({root, 0});
    
    while (!q.empty()) {
        auto it = q.front();
        q.pop();
        
        node* temp = it.first;
        int line = it.second;
        
        // Store first node at each horizontal distance
        if (node_map.find(line) == node_map.end()) {
            node_map[line] = temp->data;
        }
        
        if (temp->left != NULL) {
            q.push({temp->left, line - 1});
        }
        if (temp->right != NULL) {
            q.push({temp->right, line + 1});
        }
    }
    
    // Store the result from map
    for (auto it : node_map) {
        ans.push_back(it.second);
    }
    
    return ans;
}

int main() {
    cout << "Enter the tree data: ";
    node* root = buildtree();

    cout << "Top View Traversal: ";
    vector<int> result = topView(root);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
