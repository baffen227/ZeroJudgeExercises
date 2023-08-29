#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int hh, mm;
    cin >> hh >> mm;
    if (hh > 23 || mm > 59) { cout << "out of time range.\n"; exit(1); }

    if (hh < 7 ||
       (hh == 7 && mm < 30) ||
        hh > 17 ||
       (hh == 17 && mm >= 0))
        cout << "Off School\n";
    else
        cout << "At School\n";
}
