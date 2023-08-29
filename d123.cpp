#include <bits/stdc++.h>

using namespace std;

int main() {
    int case_num = 1;

    int seq_size;
    while (cin >> seq_size) {
        vector<int> seq_vec(seq_size, 0);
        for (int ival, i = 0; i < seq_size; i++) {
            if (!(cin >> ival)) { cerr << "invalid input\n"; exit(1); }
            seq_vec[i] = ival;
        }

        // check if increasing sequence
        bool is_b2_seq = true;
        for (int i = 1; i < seq_size; i++) {
            if (seq_vec[i] < seq_vec[i - 1]) {
                is_b2_seq = false;
                break;
            }
        }
        if (!is_b2_seq) {
            cout << "Case #" << case_num << ": It is not a B2-Sequence.\n\n";
            case_num++;
            break;
        }

        // check if b2 sequence
        int total_sum_cnt = ((seq_size + 1) * seq_size ) >> 1;

        set<int> sum_set;
        for (int i = 0; i < seq_size; i++)
            for (int j = i; j < seq_size; j++)
                sum_set.insert(seq_vec[i] + seq_vec[j]);

        if (sum_set.size() == total_sum_cnt)
            cout << "Case #" << case_num << ": It is a B2-Sequence.\n\n";
        else
            cout << "Case #" << case_num << ": It is not a B2-Sequence.\n\n";
        case_num++;

    }
}
