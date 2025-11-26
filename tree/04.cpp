#include <iostream>
using namespace std;
bool searchBST(long long arr[], long long n,long long k){
    long long idx = 0;
    while(idx < n && arr[idx] != -1){
        if(arr[idx] == k){
            return true;
        }
        else if(k < arr[idx]) {
            idx = 2 * idx + 1;
        } else {
            idx = 2 * idx + 2;
        }
    }
    return false;
}
int main(){
    long long n, k;
    cin >> n >> k;
    long long arr[100005];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << (searchBST(arr, n, k) ? 1 : 0) << endl;
}