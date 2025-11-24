#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

int main() {
    int n;
    cin >> n;
    Node* head = nullptr;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        Node* newNode = new Node(a);
        if (head == nullptr) {
            head = newNode;
            continue;
        }
        Node* curr = head;
        bool found = false;
        while (curr != nullptr) {
            if (curr->val == b) {
                newNode->next = curr->next;
                curr->next = newNode;
                found = true;
                break;
            }
            curr = curr->next;
        }
        if (!found) {
            newNode->next = head;
            head = newNode;
        }
    }
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->val;
        if (curr->next != nullptr) cout << " ";
        curr = curr->next;
    }
    cout << endl;
    return 0;
}