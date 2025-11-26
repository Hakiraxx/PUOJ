#include <iostream>
using namespace std;
struct Node {
    long long val;
    Node* left;
    Node* right;
    Node(long long v) : val(v), left(nullptr), right(nullptr) {}
};
void insert(Node*& root, long long x) {
    if (!root) {
        root = new Node(x);
        return;
    }
    if (x < root->val) insert(root->left, x);
    else if (x > root->val) insert(root->right, x);
}
Node* findMin(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}
Node* deleteNode(Node* root, long long k) {
    if (!root) return nullptr;
    if (k < root->val) root->left = deleteNode(root->left, k);
    else if (k > root->val) root->right = deleteNode(root->right, k);
    else {
        if (!root->left) {
            Node* tmp = root->right;
            delete root;
            return tmp;
        }
        else if (!root->right) {
            Node* tmp = root->left;
            delete root;
            return tmp;
        }
        Node* minNode = findMin(root->right);
        root->val = minNode->val;
        root->right = deleteNode(root->right, minNode->val);
    }
    return root;
}
void preorder(Node* root) {
    if (!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
int main() {
    int n;
    long long k;
    cin >> n >> k;
    Node* root = nullptr;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        insert(root, x);
    }
    root = deleteNode(root, k);
    preorder(root);
    cout << endl;
    return 0;
}