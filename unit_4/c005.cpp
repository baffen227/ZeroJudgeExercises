#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream input_file{ "c005_input.txt" };

    int n; input_file >> n;

    for (int i = 0; i < n; i++) {
        int f; input_file >> f;

        double bonus = 0;
        for (int j = 0; j < f; j++) {
            double farm_area, animal_cnt, env_level;
            input_file >> farm_area >> animal_cnt >> env_level;
            bonus += (farm_area * env_level);
        }
        cout << bonus << "\n";
    }
}
