#include <iostream>
using namespace std;
int preOrder(long long arr[], long long idx, long long n){
    if(idx >= n && arr[idx] != -1) return;
    cout << arr[idx] << " ";
    preOrder(arr, 2* idx + 1, n);
    preOrder(arr, 2* idx + 2, n);
};
int main(){
    long long n;
    cin >> n;
    long long arr[100005];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    preOrder(arr, 0 , n);
}