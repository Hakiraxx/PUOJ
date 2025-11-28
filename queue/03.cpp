#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long unlucky[100000];
    int total = 0;
    unlucky[total++] = 3;
    unlucky[total++] = 7;
    for (int i = 0; i < total; i++) {
        long long next1 = unlucky[i] * 10 + 3;
        long long next2 = unlucky[i] * 10 + 7;
        if (next1 <= n) unlucky[total++] = next1;
        if (next2 <= n) unlucky[total++] = next2;
    }
    int count = 0;
    for (int i = 0; i < total; i++) {
        if (n % unlucky[i] == 0) {
            count++;
        }
    }
    if (count == 0) {
        cout << "lucky number\n";
    } else {
        cout << count << "\n";
        for (int i = 0; i < total; i++) {
            if (n % unlucky[i] == 0) {
                cout << unlucky[i] << "\n";
            }
        }
    }
    return 0;
}
