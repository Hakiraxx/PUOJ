#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int v) : data(v), next(nullptr) {}
};
void addToHead(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        newNode->next = newNode;
    } else {
        newNode->next = head;
        tail->next = newNode;
        head = newNode;
    }
}
void printList(Node* head){
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
    int n;
    cin >> n;
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        addToHead(head, tail, val);
    }
    printList(head);
    return 0;
}