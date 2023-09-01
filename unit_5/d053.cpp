#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int num_row, num_col;
    while (cin >> num_row >> num_col) {
        unsigned int total_cut_to_unit_row = num_row - 1;
        unsigned int total_cut_to_unit_col = num_col - 1;
        cout << total_cut_to_unit_row + num_row * total_cut_to_unit_col << '\n';
    }
}
