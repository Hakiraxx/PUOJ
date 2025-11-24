#include <iostream>
using namespace std;
int main() {
    char a;
    int n;
    cin >> a >> n;
    int offset = a - 'a';
    int new_offset = (offset + n) % 26;
    char result = 'a' + new_offset;
    cout << result << endl;
    return 0;
}