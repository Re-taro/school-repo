#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float f_num1, f_num2, f_ans;
    double d_num1, d_num2, d_ans;
    f_num1 = d_num1 = 20000001;
    f_num2 = d_num2 = 20000000;
    f_ans = 1/ (sqrt(f_num1) + sqrt(f_num2));
    d_ans = 1 / (sqrt(d_num1) + sqrt(d_num2));
    cout<<"Pattern float "<<f_ans<<endl;
    cout<<"Pattern double "<<d_ans<<endl;
    return 0;
}