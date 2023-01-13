#include <iostream>
using namespace std ;

int gcd(int A , int B , int C){
    int i = 1 , ans = 0 ;
    while (true)
    {
        if (i > A || i > B || i > C)
        {
            break;
        }
        if (A%i==0 && B%i==0 && C%i==0)
        {
            ans = i ;
        }
        
    }
    return ans;
}
int main (){
    cout << "gcd(18,15)"    
    cout << "gcd(18,15)"
    cout << "gcd(18,15)"
    cout << "gcd(18,15)"
    cout << "gcd(18,15)"
    cout << "gcd(18,15)"
    cout << "gcd(18,15)"
    cout << "gcd(18,15)"
    cout << "gcd(18,15)"    
}