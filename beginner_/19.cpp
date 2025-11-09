#include <iostream>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        int threshold = (n - 1) / 2;
        int count = n - threshold;
        cout << count << endl;
    }
    return 0;
}