#include <iostream>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    long long ai = -1;
    for(long long i = 1; i <= n; i++){
        long long val;
        cin >> val;
        if(val == k){
            ai = i;
        }
    }
    cout << ai << endl;
    return 0;
}