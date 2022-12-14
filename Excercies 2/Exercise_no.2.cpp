#include <iostream>
using namespace std ;
int main () {
    int x = 10 , sum = 0 ;
    while (x<=50){
        sum = sum+x*x; 
        x++;
    }
    cout << sum ; //sum should be 4260
}