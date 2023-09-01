#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int case_num;
    cin >> case_num;

    for (int i = 0; i < case_num; i++) {
        unsigned int store_cnt; // 1<= store_cnt <= 20
        cin >> store_cnt;
        vector<unsigned int> store_positions;
        for (int j = 0; j < store_cnt; j++) {
            unsigned int pos;
            cin >> pos;
            store_positions.push_back(pos);
        }
        const auto minmax_result = minmax_element(store_positions.begin(),
                                                  store_positions.end());
        cout << (*minmax_result.second - *minmax_result.first) * 2 << '\n';
    }
}
