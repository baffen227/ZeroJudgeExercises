#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int num_test;
    if (!(cin >> num_test && num_test)) {
        cerr << "invalid num_test\n";
        exit(1);
    }

    double n, m;
    for (unsigned int test_cnt = 0; test_cnt < num_test; ++test_cnt) {
        while ((cin >> n >> m)
                && (n >= 6) && (n <= 10000)
                && (m >= 6) && (m <= 10000))
        {
            auto row_block_cnt = ceil((n - 2) / 3);
            auto col_block_cnt = ceil((m - 2) / 3);
            cout << row_block_cnt * col_block_cnt << '\n';
        }
    }
}
