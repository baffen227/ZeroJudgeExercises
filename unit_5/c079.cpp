#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int num_cigarette, maxnum_stump;
    while (cin >> num_cigarette >> maxnum_stump) {
        unsigned int do_smoking_cnt = 0;
        unsigned int num_stump = 0;
        while (num_cigarette > 0) {
            do_smoking_cnt++;
            num_cigarette--;
            num_stump++; 
            if (num_stump == maxnum_stump) {
                num_stump = 0;
                num_cigarette++;
            }
        }

        cout << do_smoking_cnt << '\n';
    }
}
