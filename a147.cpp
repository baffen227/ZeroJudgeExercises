#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n;
    while (cin >> n && n) {
        for (unsigned int i = 1; i < n; i++)
            if (i % 7 != 0) cout << i << ' ';
        cout << '\n';
    }
}
