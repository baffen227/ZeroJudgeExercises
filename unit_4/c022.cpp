#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_test;
    cin >> num_test;

    for (int test_case = 1; test_case <= num_test; test_case++) {
        int start_num, end_num, sum_of_odds;
        cin >> start_num >> end_num;
        sum_of_odds = 0;
        for (int num = start_num; num <= end_num; num++) 
            if (num & 0x1) sum_of_odds += num;
        cout << "Case " << test_case << ": " << sum_of_odds << '\n';
    }
}
