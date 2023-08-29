#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int pile_size;
    unsigned int test_num = 1;

    while (cin >> pile_size && pile_size) {

        vector<unsigned int> piles(pile_size, 0);
        for (unsigned int ix = 0; ix < pile_size; ++ix)
            cin >> piles[ix];

        unsigned int sum_of_block_cnt = accumulate(piles.begin(), piles.end(), 0);
        if (sum_of_block_cnt % pile_size != 0) {
            cout << "sum_of_block_cnt is not multiple of pile_size.\n";
            exit(1);
        }

        unsigned int target_block_cnt = sum_of_block_cnt / pile_size;
        unsigned int num_moves = 0;
        for (const auto block_cnt : piles)
            if (block_cnt > target_block_cnt)
                num_moves += (block_cnt - target_block_cnt);

        cout << "Set #" << test_num << '\n';
        cout << "The minimum number of moves is " << num_moves << '\n';
        test_num++;

    }
}
