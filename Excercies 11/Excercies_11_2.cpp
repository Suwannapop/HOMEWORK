#include <iostream>
using namespace std;
double fibonaci(int ) ;
int main (){
    long double x1 = 0 , x2 = 1 , N  , sum=0;
    cout << "N : " ;
    cin >> N ;
    

    if(N == 1)
    {
        sum = 1 ;
    }else {
        for (int i = 1; i < N; i++)
        {
        sum = x1 + x2 ;
        x1 = x2 ;
        x2 = sum ;
        }
    }
    cout << sum << endl;
    cout << fibonaci(N);
}   

double fibonaci(int N ) {
    long double sum ;
    if (N == 0 )
    {
        return 0;
        
    }
    if (N == 1 )
    {
        return 1;
       
    }
    if (N>1)
    {
       sum =  fibonaci(N-1)+fibonaci(N-2);
    }
    return sum ;
}