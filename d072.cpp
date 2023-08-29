#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int t; cin >> t;

    for (int i = 0; i < t; i++) {
        unsigned int y; cin >> y;
        cout << "Case " << i + 1 << ": ";
        if (((y % 4 == 0) && (y % 100 != 0)) ||
            (y % 400 == 0))
            cout << "a leap year\n";
        else
            cout << "a normal year\n";
    }
}
