#include <iostream>
using namespace std ;
int main () {
    int sum = 0 , num = 3;
    while (num<=300)
    {
        sum = sum + num * num ;
        num+=3 ;
    }
    cout << sum ; //sum should be 3045150
}