#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int ans = a * b;
    if(ans < 0){
        cout << "-1" << endl;
    } else if(ans == 0){
        cout << "0" << endl;
    } else {
        cout << "1" << endl;
    }
    return 0;
}