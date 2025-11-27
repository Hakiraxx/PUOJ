#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int id[1000005], score[1000005], rank[1000005] = {0}, query[1000005];

    for(int i = 0; i < n; i++) {
        cin >> id[i] >> score[i];
    }
    // Bubble sort theo điểm tăng dần, đồng thời sắp xếp id theo score
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(score[j] > score[j+1]) {
                int tmpScore = score[j]; score[j] = score[j+1]; score[j+1] = tmpScore;
                int tmpId = id[j]; id[j] = id[j+1]; id[j+1] = tmpId;
            }
        }
    }
    // Gán thứ hạng cho từng mã sinh viên
    for(int i = 0; i < n; i++) {
        rank[id[i]] = i + 1;
    }
    for(int i = 0; i < m; i++) {
        cin >> query[i];
    }
    for(int i = 0; i < m; i++) {
        if(rank[query[i]] > 0) cout << rank[query[i]];
        else cout << -1;
        if(i < m - 1) cout << " ";
    }
    cout << endl;
    return 0;
}