#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = n / 12;
    int b = n % 12;
    cout << a * 50 + b * 5 << '\n';
}
