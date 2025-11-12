#include <iostream>
using namespace std;
int main(){
    char c;
    cin >> c;
    if(c == 'A'){
        cout << 'a' << endl;
    } else {
        char prev = c - 1;
        cout << (prev - 'A' + 'a') << endl;
    }
    return 0;
}