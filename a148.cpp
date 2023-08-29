#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int test_cnt;
    while (cin >> test_cnt && test_cnt) {
        unsigned int total_scores = 0;
        for (int i = 0; i < test_cnt; i++) {
            unsigned int score; cin >> score;
            total_scores += score;
        }
        if ((total_scores / test_cnt) > 59)
            cout << "no\n";
        else
            cout << "yes\n";
    }
}
