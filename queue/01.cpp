#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    long long q[100005];
    int head = 0, tail = 0;
    for (int i = 0; i < T; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            long long n;
            cin >> n;
            q[tail++] = n;
        } else if (type == 2) {
            if (head < tail) {
                head++;
            }
        } else if (type == 3) {
            if (head >= tail) {
                cout << "Empty!" << endl;
            } else {
                cout << q[head] << endl;
            }
        }
    }
    return 0;
}