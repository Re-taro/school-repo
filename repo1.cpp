#include<iostream>
using namespace std;

int main(){
    float x = 0, x_3 = 0, y = 0;
    for (int i = 1; i <= 10; i++)
    {
        x += 0.1;
        cout<<x<<":";
        x_3 = x / 3;
        y = x_3 * 3;
        cout << x <<","<<x / 3<<","<<y<<"  ";
        if(x == y)
         cout<<"True";
        else
         cout <<"False";
        
        cout <<endl;
    }
    return 0;
}