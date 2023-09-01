#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int Z, I, M, L;

    while (cin >> Z >> I >> M >> L && ( Z && I && M && L)) {
        unsigned int test_case_num = 1;

        vector<unsigned int> pos_vec(M, 0); // idx 0 ~ M-1

        unsigned int cur_pos = 1;
        pos_vec[L] = cur_pos++;

        unsigned int N, cycle_length;
        while (true) {
            N = (Z * L + I) % M;
            if (pos_vec[N] != 0) {
                cycle_length = cur_pos - pos_vec[N];
                break;
            }
            pos_vec[N] = cur_pos++;
            L = N;        
        }

        printf("Case %d: %d\n", test_case_num, cycle_length);
        test_case_num++;
    }
}
