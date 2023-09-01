#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n; cin >> n;

    for (unsigned int factor = 2; factor <= n; factor++) {

        unsigned int power_num = 0;
        while (n % factor == 0) {
            power_num++;
            n /= factor;
        }

        if (power_num > 1) {
            cout << factor << '^' << power_num;
            if (n > 1) cout << " * ";
        } else if (power_num == 1) {
            cout << factor;
            if (n > 1) cout << " * ";
        }

        if (n == 1) {
            cout << '\n';
            break;
        }

    }
}
