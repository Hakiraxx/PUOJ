#include <iostream>
#include <string>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        string s;
        cin >> s;
        bool valid =  (s.length() == 10);
        if(valid){
            for(char c : s){
                if(c < '0' || c > '9'){
                    valid = false;
                    break;
                }
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}