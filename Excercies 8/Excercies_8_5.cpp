#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;

void printPattern2(int I ){
    for (int n = 0; n < I; ++n)
    {
      for (int i = 0; i <= n; i++)
      {
        cout << "O";
      }
      for (int i = 0; i < I-(n+1); i++)
      {
        cout << "X";
      }
      cout << endl ;
    }
    
}
int main (){
    printPattern2(4);
    
}