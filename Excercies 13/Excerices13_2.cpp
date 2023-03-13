#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std ;

void randomMatrix(long double A[][10]){
    int i , j , result;
    i = rand()%10 + 1 ;
    j = rand()%10 + 1 ;
    cout << "\n\nrandomMatrix :: ";
    cout << A[i][j];
    cout << "\n locatoin is A[" << i <<"][" << j <<"]";

}

int main (){
    srand(time(0));
   long double A[10][10] ;
   for (int i = 0; i < 10; i++)
   {
    for (int j = 0; j < 10; j++)
    {
        long double result = rand()%10000/1000.0;
        A[i][j] = result ;
    }
    
   }
   for (int i = 0; i < 10; i++)
   {
    for (int j = 0; j < 10; j++)
    {
        cout <<setprecision(4)<< setw(8)<< A[i][j] << setw(8) ;
    }
    cout << endl ;
   }
   randomMatrix(A);
   
}