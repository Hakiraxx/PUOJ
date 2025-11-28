#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    int n;
    cin >> n;
    Node* head = nullptr;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    };
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}