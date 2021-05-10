#include <iostream>
using namespace std;
int main() {
    float f_num1, f_num2, f_ans;
    double d_num1, d_num2, d_ans;
    f_num1 = d_num1 = 123456789.0;
    f_num2 = d_num2 = 0.0000001;
    f_ans = (f_num1 + f_num2) - f_num1;
    d_ans = (d_num1 + d_num2) - d_num1;
    cout << "Pattern float " << f_ans << endl;
    cout << "Pattern double " << d_ans << endl;
    return 0;
}