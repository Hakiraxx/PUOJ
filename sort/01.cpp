#include <iostream>
using namespace std;
int main(){
    long long arr[100005];
    long long n;
    cin >> n;
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(long long i = 0; i < n - 1; i++){
        for(long long j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j+1]){
                long long temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    long long limit = (n < 3) ? n : 3;
    for(long long i = 0; i < limit; i++){
        cout << arr[i];
        if(i < limit - 1) cout << " ";
    }
    cout << endl;
}