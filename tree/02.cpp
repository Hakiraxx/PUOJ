#include <iostream>
using namespace std;
void preorder(int arr[100005], int idx, int n){
    if(idx >= n || arr[idx] == -1) return;
    preorder(arr, 2 * idx + 1, n);
    cout << arr[idx] << " ";
    preorder(arr, 2 * idx + 2, n);
}
int main(){
    int n;
    int arr[100005];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    preorder(arr, 0, n);
    cout << endl;
}