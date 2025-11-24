#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main(){
    int n;
    cin >> n;
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    Node* tmp = head;
    while(tmp != nullptr){
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
}