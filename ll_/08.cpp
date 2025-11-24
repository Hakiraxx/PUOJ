#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void addToHead(Node*& head, int val){
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}
void deleteAfter(Node* head, int b){
    Node* curr = head;
    while(curr != nullptr){
        if(curr->data == b && curr->next != nullptr){
            Node* toDelete = curr->next;
            curr->next = toDelete->next;
            delete toDelete;
            return;
        }
        curr = curr->next;
    }
}
void printList(Node* head){
    Node* tmp = head;
    while(tmp != nullptr){
        cout << tmp->data;
        tmp = tmp->next;
        if(tmp != nullptr) cout << " ";
    }
    cout << endl;
}
int main(){
    int n, m;
    cin >> n >> m;
    Node* head = nullptr;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        addToHead(head, val);
    }
    for(int i = 0; i < m; i++){
        int b;
        cin >> b;
        deleteAfter(head, b);
    }
    printList(head);
}