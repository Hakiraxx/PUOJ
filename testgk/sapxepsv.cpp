#include <iostream>
using namespace std;

struct Student {
    char id[12];
    char name[35];
    double gpa;
};

int main() {
    int n;
    cin >> n;
    cin.ignore(1);
    Student students[1005];

    for (int i = 0; i < n; i++) {
        cin.getline(students[i].id, 12);
        cin.getline(students[i].name, 35);
        cin >> students[i].gpa;
        cin.ignore(1);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].gpa > students[j + 1].gpa) {
                Student tmp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << students[i].id;
        if (i + 1 < n) cout << " ";
    }
    if (n > 0) cout << "\n";
    return 0;
}