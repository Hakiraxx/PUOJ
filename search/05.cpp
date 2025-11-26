#include <iostream>
using namespace std;
long long a[100005]; 
int main(){
    ios::sync_with_stdio(false);  
    cin.tie(nullptr);
    long long n;
    cin >> n;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    long long T;
    cin >> T;
    for(long long i = 0; i < T; i++){
        long long val;
        cin >> val;
        bool found = false;
        for(long long j = 0; j < n; j++){  
            if(a[j] == val){
                found = true;
                break;
            }
        }
        cout << (found ? "Y" : "N") << endl;
    }
    return 0;
}