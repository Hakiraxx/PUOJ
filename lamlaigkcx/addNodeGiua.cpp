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
        int a, b;
        cin >> a >> b;
        Node* newNode = new Node();
        newNode->data = a;
        newNode->next = nullptr;
        Node* curr = head;
        Node* target = nullptr;
        while(curr != nullptr){
            if(curr->data == b){
                target = curr;
                break;
            }
            curr = curr->next;
        }
        if(target == nullptr){
            newNode->next = head;
            head = newNode;
        } else {
            newNode->next = target->next;
            target->next = newNode;
        }
    }
    Node* iter = head;
    while(iter){
        cout << iter->data;
        if(iter->next) cout << " ";
        iter = iter->next;
    }
    cout << endl;
    return 0;
}