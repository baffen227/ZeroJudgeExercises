#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 3> cnt{ };  // index 0 for 3n, 1 for 3n+1, 2 for 3n+2

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        cnt[m % 3]++;
    }

    for (auto x : cnt) cout << x << " ";
    cout << "\n";
}
