#include <iostream>
using namespace std;

int main() {
    const unsigned int maxnum_empty_bottle = 3;

    unsigned int num_cola;
    while (cin >> num_cola) {
        unsigned int do_drinking_cnt = 0;
        unsigned int num_empty_bottle = 0;
        while (num_cola > 0) {
            do_drinking_cnt++;
            num_cola--;
            num_empty_bottle++;
            if (num_empty_bottle == maxnum_empty_bottle) {
                num_empty_bottle = 0;
                num_cola++;
            }
        }

        if (num_empty_bottle == 2) {
            cout << "Borrow 1 empty bottle.\n";
            num_empty_bottle = 0;
            num_cola++;

            cout << "Drink 1 extra cola.\n";
            do_drinking_cnt++;
            num_cola--;
            num_empty_bottle++;
            cout << "Return 1 empty bottle.\n";
        }

        cout << do_drinking_cnt << '\n';
    }
}
