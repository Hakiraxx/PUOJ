#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    int n, m;
    cin >> n >> m;
    Node* head = nullptr;
    for(int i = 0; i < m; i++){
        int val;
        cin >> val;
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = head;
        head = nullptr;
    };
    for(int i = 0; i < n; i++){
       if(head != nullptr){
         Node* temp = head;
         head = head->next;
         delete temp;
       }
    }
}