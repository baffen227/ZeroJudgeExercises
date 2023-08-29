#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int n, m;
    cin >> n >> m;

    for (unsigned int x = n; x < m; ++x) {
        unsigned int pow_num = 0;
        for (unsigned int i = 1; x / i > 0; i *= 10, pow_num++);

        unsigned int accum = 0;
        for (unsigned int i = 1; x / i > 0; i *= 10) {
            accum += pow((x / i ) % 10, pow_num);
        }

        if (accum == x)
            cout << x << ' ';
    }
    cout << '\n';
    
}
