#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int num_rand;
    cin >> num_rand;

    set<unsigned int> all_rand_numbers;
    random_device rd_engine{};
    unsigned int a_rand_num;
    for (unsigned int i = 0; i < num_rand; i++) {
        a_rand_num = rd_engine() % 1000 + 1;
        all_rand_numbers.insert(a_rand_num);
    }

    cout << all_rand_numbers.size() << '\n';
    for (const auto randnum : all_rand_numbers)
        cout << randnum << ' ';
    cout << '\n';
}
