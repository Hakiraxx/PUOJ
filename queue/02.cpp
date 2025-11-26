#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int nums[100005];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int deque[100005];
    int head = 0, tail = 0;
    for(int i = 0; i < n; i++){
        while(head < tail && deque[head] <= i - k){
            head++;
        }
        while(head < tail && nums[deque[tail - 1]] <= nums[i]){
            tail--;
        }
        deque[tail++] = i;
        if(i >= k - 1){
            cout << nums[deque[head]];
            if(i < n - 1) cout << " ";
        }
    }
}