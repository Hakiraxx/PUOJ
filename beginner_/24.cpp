#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    if(N == 0) return 0;
    long long first, last;
    cin >> first;
    for(int i = 1; i < N; i++){
        cin >> last;
    }
    cout << first << endl;
    cout << last << endl;
    return 0;
}