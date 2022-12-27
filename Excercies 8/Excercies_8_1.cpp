#include <iostream>
#include <iomanip>
using namespace std ;
int main (){
    double sum=0 ;
    for (int i = 2; i <= 222; i+=2)
    {
        sum = sum + (double)1/i ; 
    }
    cout << setprecision(11)<< sum ;
}