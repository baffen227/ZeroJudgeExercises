#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> aset;

    int ival;
    while (cin >> ival) {
        aset.insert(ival);
        cout << "size: " << aset.size() << '\n';
    }

}
