#include <iostream>
#include <math.h>
using namespace std;

double fact(double a);
double McLaughlin(double x, double n);

int main() {
    double x, n;
    double ans;
    cout<<"Input number to x."<<endl;
    cin>>x;
    cout<<"Input numbr to n."<<endl;
    cin>>n;
    ans = McLaughlin(x, n);
    cout<<"The score is "<<ans<<endl;
    return 0;
}


double fact(double a) {
    double b = 1;

    while (a > 1){
        b = b * a;
        a--;
    }
    return b;
}

double McLaughlin(double x, double n) {
    double ans = 0;
    for (double i = n-1; i >= 0.0; i -= 1.0) {
        ans = ans + pow(x,i) / fact(i);
    }
    return ans;
}