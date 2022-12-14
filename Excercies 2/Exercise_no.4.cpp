#include <iostream>
using namespace std ;
int main () {
    double x = 1 , y = 2, sum = 0 ;
    while (x<=999)
    {
        sum = sum + x/y;
        x+=2;
        y+=2;
    }
    cout << sum ;
}