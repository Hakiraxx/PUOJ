#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void addToHead(Node*& head, Node*& tail, int val){
    Node* newNode = new Node();
    newNode->data = val;
    if(head == nullptr){
        head = newNode;
        tail = newNode;
        newNode->next = newNode;
    } else {
        newNode->next = head;
        tail->next = newNode;
        head = newNode;
    }
}
void deleteHead(Node*& head, Node*& tail){
    if(head == nullptr) return;
    if(head == tail){
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    } else {
        Node* toDelete = head;
        head = head->next;
        tail->next = head;
        delete toDelete;
    }
}
void printList(Node* head, Node* tail){
    if(head == nullptr) return;
    Node* tmp = head;
    while(true){
        cout << tmp->data;
        tmp = tmp->next;
        if(tmp == head) break;
        cout << " ";
    }
    cout << endl;
}
int main(){
    int n, m;
    cin >> n >> m;
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        addToHead(head, tail, val);
    }
    for(int i = 0; i < m; i++){
        deleteHead(head, tail);
    }
    printList(head, tail);
    return 0;
}