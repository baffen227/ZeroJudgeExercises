#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int N; cin >> N;
    if (N < 1 || N > 10000) { cout << N << " is out of range.\n"; exit(1); }

    unsigned int area = 0, line = 0, pos = 0;
    if (N >= 1 && N <= 2500) {
        area = 1;
        line = (N - 1) / 25 + 1;
        pos  = (N - 1) % 25 + 1;
    } else if (N >= 2501 && N <=7500) {
        area = 2;
        N = N - 2500;
        line = (N - 1) / 50 + 1;
        pos  = (N - 1) % 50 + 1;
    } else {  // N >= 7501 && N <= 10000
        area = 3;
        N = N - 7500;
        line = (N - 1) / 25 + 1;
        pos  = (N - 1) % 25 + 1;
    }

    cout << area << " " << line << " " << pos << "\n";
}
