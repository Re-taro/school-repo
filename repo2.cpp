#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float f_num1 = 0.25, f_num2 = 0.3, f_ans1 = 0.0, f_ans2 = 0.0;
    double d_num1 = 0.25, d_num2 = 0.3, d_ans1 = 0.0, d_ans2 = 0.0;
    for (int i = 0; i < 10000; i++)
    {
        f_ans1 = f_ans1 + f_num1;
        f_ans2 = f_ans2 + f_num2;
        d_ans1 = d_ans1 + d_num1;
        d_ans2 = d_ans2 + d_num2;
    }
    cout << "Pattern float 0.25 is " << f_ans1 << " and this is pattern double 0.25 is " << d_ans1 << endl;
    cout << "Pattern float 0.3 is " << f_ans2 << " and this is pattern double 0.3 is " << d_ans2 << endl;
    cout << "The Absolute error of float 0.25 is " << fabs(f_ans1 - 2500) << " and this is the absolute error of double 0.25 is " << fabs(d_ans1 - 2500) << endl;
    cout << "The Absolute error of float 0.3 is " << fabs(f_ans2 - 3000) << " and this is the absolute error of double 0.3 is " << fabs(d_ans2 - 3000) << endl;
    if (f_ans1 == 2500)
    {
        cout << "true(float 0.25)" << endl;
    }
    else
    {
        cout << "false(float 0.25)" << endl;
    }
    if (f_ans2 == 3000)
    {
        cout << "true(float 0.3)" << endl;
    }
    else
    {
        cout << "false(float 0.3)" << endl;
    }
    if (d_ans1 == 2500)
    {
        cout << "true(double 0.25)" << endl;
    }
    else
    {
        cout << "false(double 0.25)" << endl;
    }
    if (d_ans2 == 3000)
    {
        cout << "true(double 0.3)" << endl;
    }
    else
    {
        cout << "false(double 0.3)" << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    f_ans1 = f_num1 * 10000;
    f_ans2 = f_num2 * 10000;
    d_ans1 = d_num1 * 10000;
    d_ans2 = d_num2 * 10000;
    cout << "Pattern float 0.25 is " << f_ans1 << " and this is pattern double 0.25 is " << d_ans1 << endl;
    cout << "Pattern float 0.3 is " << f_ans2 << " and this is pattern double 0.3 is " << d_ans2 << endl;
    cout << "The Absolute error of float 0.25 is " << fabs(f_ans1 - 2500) << " and this is the absolute error of double 0.25 is " << fabs(d_ans1 - 2500) << endl;
    cout << "The Absolute error of float 0.3 is " << fabs(f_ans2 - 3000) << " and this is the absolute error of double 0.3 is " << fabs(d_ans2 - 3000) << endl;
    if (f_ans1 == 2500)
    {
        cout << "true(float 0.25)" << endl;
    }
    else
    {
        cout << "false(float 0.25)" << endl;
    }
    if (f_ans2 == 3000)
    {
        cout << "true(float 0.3)" << endl;
    }
    else
    {
        cout << "false(float 0.3)" << endl;
    }
    if (d_ans1 == 2500)
    {
        cout << "true(double 0.25)" << endl;
    }
    else
    {
        cout << "false(double 0.25)" << endl;
    }
    if (d_ans2 == 3000)
    {
        cout << "true(double 0.3)" << endl;
    }
    else
    {
        cout << "false(double 0.3)" << endl;
    }
    return 0;
}