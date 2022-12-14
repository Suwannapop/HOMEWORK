// เเบบฝึก ที่3 ข้อ 5
#include <iostream>
#include <cmath>
using namespace std ;


double findKineticEnergy(double mass , double speed);

int main () {
    double input1 ; 
    double input2 ;
    cout << "In put your m : " ;
    cin >> input1 ;
    cout << "In put your V : ";
    cin >> input2 ;
    cout << "Expected out put : "<< findKineticEnergy(input1 , input2);

}

double findKineticEnergy(double mass , double speed){
    double E = 1.0/2.0*mass*pow(speed,2);
    return E ; 

}
