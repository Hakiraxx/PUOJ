#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        bool valid = true;
        int len = s.length();
        for(int j = 0; j < len / 2; j++){
            if(s[j] != s[len - 1 - j]){
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}