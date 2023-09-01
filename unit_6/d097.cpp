#include <bits/stdc++.h>

using namespace std;

int main() {
    int seq_size;
    while (cin >> seq_size) {

        // diff_cnt_vec[0] not used
        // diff_cnt_vec[diff], 1 <= diff <= seq_size-1
        vector<int> diff_cnt_vec(seq_size, 0);

        int pre, now, diff;
        cin >> pre;
        for (int cnt = 1; cnt < seq_size; cnt++) {
            cin >> now;
            diff = abs(now - pre); 
            if (diff >= 1 && diff <= seq_size-1)
                diff_cnt_vec[diff]++;
            pre = now;
        }


        int idx;
        for (idx = 1; idx < seq_size; ++idx) {
            if (diff_cnt_vec[idx] != 1) {
                cout << "Not jolly\n";
                break;
            }
        }
        if (idx == seq_size) cout << "Jolly\n";

    }
}
