// เเบบฝึก ที่3 ข้อ 6
#include <iostream>
#include <cmath>
using namespace std ;


double findKineticEnergy(double mass);

int main () {
    double input1 ; 
    cout << "In put your m : " ;
    cin >> input1 ;
    cout << "Expected out put : "<< findKineticEnergy(input1);

}

double findKineticEnergy(double x ){
    double E = sin(pow(x,3))/log((2*x+1)/pow(x,2));
    return E ; 

}
