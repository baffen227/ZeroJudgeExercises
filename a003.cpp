#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, D;
    cin >> M >> D;

    int S = (M * 2 + D) % 3;
    switch (S) {
        case 0:
            cout << "普通\n";
            break;
        case 1:
            cout << "吉\n";
            break;
        case 2:
            cout << "大吉\n";
            break;
        default:
            break;
    }
}
