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
    for(int i = 0; i < m; i++){
        if(head == nullptr) break;
        if(head->next == nullptr){
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            while(temp->next->next != nullptr){
                temp = nullptr;
            }
            delete temp->next;
            temp->next = nullptr;
        }
    }
}