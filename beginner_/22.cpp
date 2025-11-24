#include <iostream>
using namespace std;
int main(){
    long long A, B, C;
    while(cin >> A >> B >> C){
        if(A > 0 && B > 0 && C > 0 && A + B > C && A + C > B && B + C > A){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}