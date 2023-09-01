#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int num_persons;
    cin >> num_persons;

    unsigned int off_num_1, off_num_2, off_num_3;
    cin >> off_num_1 >> off_num_2 >> off_num_3;

    for (unsigned int num = num_persons; num >= 1; num--)
        if ((num != off_num_1) && (num != off_num_2) && (num != off_num_3))
            cout << "No. " << num << '\n';
}
