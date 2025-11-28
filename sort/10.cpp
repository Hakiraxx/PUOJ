#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int id[100005], score[100005];
    for (int i = 0; i < n; i++) {
        cin >> id[i] >> score[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (score[j] < score[j + 1]) {
                int tmp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = tmp;
                tmp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tmp;
            }
        }
    }
    cout << id[0] << " " << id[1] << " " << id[2] << "\n";
    return 0;
}