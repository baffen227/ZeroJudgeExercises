#include <bits/stdc++.h>
using namespace std;

int main() {
    int h;
    cin >> h;

    int ans = (h >= 15) ? (h - 15) : (h + 9);
    cout << ans << '\n';
}
