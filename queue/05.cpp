#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int num = i;
        int binary[32];
        int pos = 0;
        while (num > 0) {
            binary[pos++] = num % 2;
            num /= 2;
        }
        for (int j = pos - 1; j >= 0; j--) {
            cout << binary[j];
        }
        
        if (i < N) cout << " ";
    }
    cout << endl;
    return 0;
}   