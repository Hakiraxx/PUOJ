#include <iostream>
using namespace std;
int main(){
    long long a;
    if(!(cin >> a)) return 0;
    if(a % 2 == 0){
        cout << "CHAN" << endl;
    } else {
        cout << "LE" << endl;
    }
    return 0;
}