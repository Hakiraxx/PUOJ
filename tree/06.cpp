#include <iostream>
using namespace std;
long long arr[700005];
void deleteBST(long long arr[], long long n, long long k) {
    long long idx = 0;
    while (idx < n && arr[idx] != -1) {
        if (arr[idx] == k) {
            long long left = 2 * idx + 1;
            long long right = 2 * idx + 2;
            if ((left >= n || arr[left] == -1) && (right >= n || arr[right] == -1)) {
                arr[idx] = -1;
                return;
            }
            else if (left >= n || arr[left] == -1) {
                arr[idx] = arr[right];
                deleteBST(arr, n, arr[right]);
            }
            else if (right >= n || arr[right] == -1) {
                arr[idx] = arr[left];
                deleteBST(arr, n, arr[left]);
            }
            else {
                long long minIdx = right;
                while (2 * minIdx + 1 < n && arr[2 * minIdx + 1] != -1) {
                    minIdx = 2 * minIdx + 1;
                }
                arr[idx] = arr[minIdx];
                deleteBST(arr, n, arr[minIdx]);
            }
            return;
        }
        else if (k < arr[idx]) idx = 2 * idx + 1;
        else idx = 2 * idx + 2;
    }
}
void preorder(long long arr[], long long idx, long long n) {
    if (idx >= n || arr[idx] == -1) return;
    cout << arr[idx] << " ";
    preorder(arr, 2 * idx + 1, n);
    preorder(arr, 2 * idx + 2, n);
}
int main() {
    long long n, k;
    cin >> n >> k;
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    deleteBST(arr, n, k);
    preorder(arr, 0, n);
    cout << endl;
    return 0;
}