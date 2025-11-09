#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long fn1 = 1;  
    long long fn2 = 1;  
    long long fn = 0;  
	if(n >= 1 && n <= 90) {
		for(long long i = 2; i < n; i++) {
			fn = fn1 + fn2;
			fn2 = fn1;
			fn1 = fn;
		}
	}
	cout << fn;
}