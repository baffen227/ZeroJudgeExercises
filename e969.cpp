#include <bits/stdc++.h>
using namespace std;

int main() {
    const unsigned int applepie_price = 32;
    const unsigned int cornsoup_price = 55;

    unsigned int left_dollars, time_interval, next_food;
    cin >> left_dollars >> time_interval >> next_food;

    unsigned cur_time = 0;
    while (true) {
        if ((next_food % 2) == 0) { // applepie
            if (left_dollars < applepie_price) break;
            else {
                left_dollars -= applepie_price;
                cout << cur_time << ": Wayne eats an Apple pie, and now he has " << left_dollars << " dollars.\n";
            }
        }
        else { // cornsoup
            if (left_dollars < cornsoup_price) break;
            else {
                left_dollars -= cornsoup_price;
                cout << cur_time << ": Wayne eats a Corn soup, and now he has " << left_dollars << " dollars.\n";
            }
        }

        cur_time += time_interval;
        next_food++;
    }
}
