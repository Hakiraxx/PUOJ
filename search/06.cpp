#include <iostream>
using namespace std;
long long arr[100005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(long long i = 0; i < n - 1; i++){
        for(long long j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                long long temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    long long T;
    cin >> T;
    while(T--){
        long long val;
        cin >> val;
        
        long long res = -1;
        for(long long i = n - 1; i >= 0; i--){
            if(arr[i] <= val){
                res = arr[i];
                break;
            }
        }
        
        cout << res << endl;
    }
    return 0;
}