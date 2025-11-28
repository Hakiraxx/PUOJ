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
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }
    for(int i = 0; i < m; i++){
        if(head != nullptr){
            Node* tmp = head;
            head = head->next;
            delete tmp;
        }
    }
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}