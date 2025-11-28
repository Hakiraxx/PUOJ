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
        if(head == nullptr) break;
        if(head->next == nullptr){
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            while(temp->next->next != nullptr){
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
        }
    }
    Node* tmp = head;
	while(tmp != nullptr) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}