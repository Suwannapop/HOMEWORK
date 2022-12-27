#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    int input,min;
   do
   {
    cout << "Input number: ";
    cin >> input ;
    if (input == 0)
    {
        break;
    }
    
    if (input < min )
    {
        min = input ;
    }
    
   } while (input > 0);
    cout << "Minimum = "<< min ;
   
   
}