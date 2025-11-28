#include <iostream>
using namespace std;
struct Node{
    long long data;
    Node* left;
    Node* right;
};
void inseart(Node*& root, long long val){
    if(!root){
        root = new Node();
        root->data = val;
        root->left = nullptr;
        root->right = nullptr;
        return;
    }
    if(val < root->data){
        inseart(root->left,val);
    } else if(val > root->data) {
        inseart(root->right, val);
    }
}
void preOrder(Node* root){
    if(!root) return;   
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
    int n;
    cin >> n;
    Node* root = nullptr;
    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        inseart(root, x);
    }
    preOrder(root);
}