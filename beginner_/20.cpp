#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            cout << i << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}