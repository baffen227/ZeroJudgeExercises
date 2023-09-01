#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int input_number;
    cin >> input_number;

    double sqrt_of_input = sqrt(input_number);
    unsigned int factors_sum = 1;
    for (unsigned int factor = 2; factor <= sqrt_of_input; factor++) {
        if (input_number % factor == 0) {
            factors_sum += factor;
            if (factor != sqrt_of_input)
                factors_sum += (input_number / factor);
        }
    }

    if (factors_sum < input_number)
        cout << "deficient number\n";
    else if (factors_sum > input_number)
        cout << "abundant number\n";
    else
        cout << "perfect number\n";
}
