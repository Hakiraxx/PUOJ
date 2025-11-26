#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    int q[1005];
    int head = 0, tail = 0;
    
    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;
        
        if (type == 1) {
            if (head < tail) {
                head++;
            }
        } else if (type == 2) {
            int u;
            cin >> u;
            q[tail++] = u;
        }
    }
    
    // In ra queue từ head đến tail
    for (int i = head; i < tail; i++) {
        cout << q[i];
        if (i < tail - 1) cout << " ";
    }
    if (head < tail) cout << endl;
    
    return 0;
}