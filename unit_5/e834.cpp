#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int base_num;
    cin >> base_num;

    unsigned int order_quantity;
    while (cin >> order_quantity && order_quantity) {
        unsigned int shipment_num = order_quantity / base_num;
        bool is_multiple = (order_quantity % base_num) ? false : true;
        if (is_multiple)
            cout << shipment_num << '\n';
        else
            cout << (shipment_num + 1) * base_num - order_quantity << '\n';
            // or, cout << base_num - (order_quantity % base_num) << '\n';
    }
}
