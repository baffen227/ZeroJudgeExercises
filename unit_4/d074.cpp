#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    vector<int> m_v(n, 0);
    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        m_v[i] = m;
    }

    auto max_number_p = max_element(m_v.begin(), m_v.end());
    cout << *max_number_p  << "\n";
}
