#include <iostream>
using namespace std;

struct Node {
    long long data;
    Node* left;
    Node* right;
};

Node* build(long long arr[], long long idx, long long n) {
    if (idx >= n || arr[idx] == -1) return nullptr;
    Node* root = new Node();
    root->data = arr[idx];
    root->left = build(arr, 2 * idx + 1, n);
    root->right = build(arr, 2 * idx + 2, n);
    return root;
}

Node* findMin(Node* root) {
    while (root && root->left) {
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, long long k) {
    if (!root) return nullptr;
    if (k < root->data) {
        root->left = deleteNode(root->left, k);
    } else if (k > root->data) {
        root->right = deleteNode(root->right, k);
    } else {
        if (!root->left) {
            Node* tmp = root->right;
            delete root;
            return tmp;
        }
        if (!root->right) {
            Node* tmp = root->left;
            delete root;
            return tmp;
        }
        Node* minNode = findMin(root->right);
        root->data = minNode->data;
        root->right = deleteNode(root->right, minNode->data);
    }
    return root;
}

void preOrder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    long long n, k;
    cin >> n >> k;
    static long long arr[700005];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Node* root = build(arr, 0, n);
    root = deleteNode(root, k);
    preOrder(root);
    cout << "\n";
    return 0;
}