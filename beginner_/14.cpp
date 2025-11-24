#include <iostream>
using namespace std;
int main() {
    double x;
    cin >> x;
    if (x >= 0 && x < 4) {
        cout << "F" << endl;
    } else if (x >= 4 && x < 5) {
        cout << "D" << endl;
    } else if (x >= 5 && x < 5.5) {
        cout << "D+" << endl;
    } else if (x >= 5.5 && x < 6.5) {
        cout << "C" << endl;
    } else if (x >= 6.5 && x < 7) {
        cout << "C+" << endl;
    } else if (x >= 7 && x < 8) {
        cout << "B" << endl;
    } else if (x >= 8 && x < 8.5) {
        cout << "B+" << endl;
    } else if (x >= 8.5 && x < 9) {
        cout << "A" << endl;
    } else if (x >= 9 && x <= 10) {
        cout << "A+" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}