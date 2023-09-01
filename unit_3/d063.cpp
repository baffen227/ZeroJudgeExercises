#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if (n != 0 && n != 1) { cout << "Input must be 0 or 1\n"; }
    else { cout << !n << "\n"; }
}
