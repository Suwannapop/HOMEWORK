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
    if (N < 1)
    {
        return 1;
    }else {
        sum = 1+(N/fomula(N-1));
    }
    return sum ;
}