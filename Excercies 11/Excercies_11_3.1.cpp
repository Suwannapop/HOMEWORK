#include <iostream>
#include <cmath>
using namespace std;
double fomula(int ) ;
int main (){
    int N ;
    do
    {
        cout << "2^N : " ;
        cin >> N ;
        cout << fomula(N) << endl  ;
    } while (true);
    
}   

double fomula(int N ) {
    double sum = 0 ;
    if (N <= 1)
    {
        return pow(2,1);
    }else {
        sum += pow(2,N)+fomula(N-1);
    }
    return sum ;
}