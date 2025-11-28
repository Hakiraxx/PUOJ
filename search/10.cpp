#include <iostream>
using namespace std;
int idArr[1000005];
int scoreArr[1000005];
int binarySearch(int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (idArr[mid] == target) return mid;
        if (idArr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> idArr[i] >> scoreArr[i];
    }
    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        int pos = binarySearch(n, q);
        if (pos != -1) cout << scoreArr[pos];
        else cout << -1;
        if (i < m - 1) cout << " ";
    }
    cout << endl;
    return 0;
}