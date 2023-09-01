#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int n_row, n_col;
    while (cin >> n_row >> n_col) {
        vector<vector<unsigned>> imatrix;
        for (unsigned int i = 0; i < n_row; i++) {
            vector<unsigned int> row_vec(n_col, 0);
            imatrix.push_back(row_vec);
        }

        unsigned int ival;
        for (unsigned int ri = 0; ri < n_row; ri++)
            for (unsigned int ci = 0; ci < n_col; ci++) {
                if (cin >> ival) imatrix[ri][ci] = ival;
                else { cerr << "cin >> ival failed\n"; exit(1); }
            }

        cout << "Normal content:\n";
        for (unsigned int ri = 0; ri < n_row; ri++) {
            for (unsigned int ci = 0; ci < n_col; ci++)
                cout << imatrix[ri][ci] << ' ';
            cout << '\n';
        }

        cout << "Transposed content:\n";
        for (unsigned int ci = 0; ci < n_col; ci++) {
            for (unsigned int ri = 0; ri < n_row; ri++)
                cout << imatrix[ri][ci] << ' ';
            cout << '\n';
        }
    }
}
