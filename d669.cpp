#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream file{ "d669_input.txt" };
    if (!file.is_open()) { cout << "file open failed.\n"; exit(1); }

    int ans;
    int h1, m1, h2, m2;
    while ( file >> h1 >> m1 >> h2 >> m2 ) {
        if ( !( h1 | m1 | h2 | m2 ) ) break;
        ans = ( h2 * 60 + m2 ) - ( h1 * 60 + m1 );
        if ( ans < 0 ) ans = ans + 24 * 60;
        cout << ans << "\n";    
    }
}
