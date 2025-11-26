#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long T;
    cin >> T;
    for(int i = 0; i < T; i++){
        long long val;
        cin >> val;
        long long high = n, low = 1;
        while(low < high){
            long long mid = low + (high - low) / 2;
            if(mid * mid + 1 >= val){
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        long long nn = low;
        long long un = nn * nn + 1 ;
        cout << un << endl; 
    }
}