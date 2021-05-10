#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float fnum1,fnum2;
    double dnum1,dnum2;
    float x; double x2;
    x = 20000001;
    fnum1 = sqrt(x);
    x= 20000000;
    fnum2 = sqrt(x);
    cout << "Pattern float " << fnum1 - fnum2 << endl;
    x2 = 20000001;
    dnum1 = sqrt(x2);
    x2 = 20000000;
    dnum2 = sqrt(x2);
    cout << "Pattern double " << dnum1 - dnum2 << endl;
    return 0;
}