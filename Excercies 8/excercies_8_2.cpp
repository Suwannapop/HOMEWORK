#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    double sum=0 ;
    for (int i = 3; i <= 333; i+=6)
    {
        sum = sum + (double)pow(i,3) ; 
    }
    for (int i = 6; i <= 330; i+=6)
    {
        sum = sum + (double)pow(i,2) ; 
    }

    cout << setprecision(10)<< sum ;
}