#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << fixed << setprecision(2) << area << endl;
    } else {
        cout << "Error" << endl;
    }
    return 0;
}