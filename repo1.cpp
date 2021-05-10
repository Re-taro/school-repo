#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    float x[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    float x_3 = 0.0, y = 0.0;
    for (int i = 0; i < 10; i++) {
        x_3 = x[i] / 3.0;
        y = x_3 * 3.0;
        cout << x[i] << " / 3 = " << setprecision(8) << x_3 << '\t';
        cout << x[i] << " * 3 = " << setprecision(8) << y << '\t';
        if (x[i] == y) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }
    }
    return 0;
}