#include <iostream>
#include <cmath>
using namespace std ;
int main (){
    int X , Y , Z ;
    cout << "Input X and Y : ";
    cin >> X >> Y ;
    if (X>=20 and Y >=20 and X+Y>=50)
    {
        if (Y>X)
        {
            Y=2*Y;
        }
        Z=(X+Y)/2;
    }else{
        Z=sqrt(pow(X,2)+pow(Y,2));
        if (Z>50)
        {
            Z=50;
        }
        
    }
    cout << Z ;
}