#include <iostream>
using namespace std;
struct Node{
    long long val;
    Node* left;
    Node* right;
    Node(long long v) : val(v), left(nullptr), right(nullptr) {}
};
void insert(Node*& root, long long x){
    if(!root){
        root = new Node(x);
        return;
    }
    if(x < root -> val) insert(root->left, x);
    else if(x > root->val) insert(root->right, x);
}
void preorder(Node* root){
    if(!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root-> right);
};
int main(){
    int n;
    cin >> n;
    Node* root = nullptr;
    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        insert(root, x);
    }
    preorder(root);
    cout << endl;
}