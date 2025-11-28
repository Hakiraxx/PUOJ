#include <iostream>
using namespace std;
void preorder(int arr[100005], int idx, int n){
    if(idx >= n && arr[idx] == -1) return;
    preorder(arr, 2 * idx + 1, n);
    preorder(arr, 2 * idx + 2, n);
    cout << arr[idx] << " ";
}
int main(){
    int n; 
    cin >> n;
    int arr[100005];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    preorder(arr, 0, n);
    cout << endl;
}