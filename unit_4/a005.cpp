#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 5> seq{};

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < seq.size() - 1; j++) cin >> seq[j];

        for (int j = seq.size() - 2; j >= 2; j--) {
            if (seq[j] - seq[j-1] != seq[j-1] - seq[j-2]) {
            }

        }

        
        for (int j = 0; j < seq.size(); j++) cout << seq[j] << " ";
        cout << "\n";
    }

}
